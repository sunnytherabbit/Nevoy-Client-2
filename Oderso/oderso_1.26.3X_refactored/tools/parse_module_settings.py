#!/usr/bin/env python3
"""Extract Oderso module settings (names, types, defaults) from a constructor.

Tracks pointer aliases from the constructor body so the setting-name argument
of a registration call can be mapped back to a decrypted TLS string.
"""
import os
import re
import struct
import sys

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DLL = os.path.join(BASE, '..', '1.26.3X.dll')
DECOMP = os.path.join(BASE, '..', 'ghidra_decompiled_1.26.3X.c')

import extract_nametags as en
import extract_datacopy as ed


# Some constructors copy encrypted strings from stack locals rather than .rdata;
# the generic datacopy decrypter does not yet handle these.  Map them explicitly.
DATACOPY_OVERRIDES = {
    'func_0x180130570': {
        0x3ba9: 'Render distance',
        0x3bc1: 'VV render distance',
        0x3bdd: 'RTX render distance',
    },
}


def split_args(s):
    """Split a comma-separated argument list while ignoring commas inside parentheses."""
    args = []
    depth = 0
    cur = ''
    for ch in s:
        if ch == '(' or ch == '[' or ch == '{':
            depth += 1
        elif ch == ')' or ch == ']' or ch == '}':
            depth -= 1
        if ch == ',' and depth == 0:
            args.append(cur.strip())
            cur = ''
        else:
            cur += ch
    if cur.strip():
        args.append(cur.strip())
    return args


def eval_const(expr, size=4, const_map=None, depth=0, seen=None):
    """Try to evaluate a constant expression.

    Handles plain hex/decimal, CONCAT44 wrappers, and known local variables.
    For floats the 32-bit hex is packed as IEEE 754; for ints the integer value is kept.
    """
    if const_map is None:
        const_map = {}
    if seen is None:
        seen = set()
    if depth > 10:
        return None
    expr = expr.strip()
    # Resolve a known local variable assignment recursively
    if re.fullmatch(r'\w+', expr) and expr in const_map and expr not in seen:
        seen.add(expr)
        return eval_const(const_map[expr], size, const_map, depth + 1, seen)
    # Direct hex constant (possibly a 64-bit CONCAT44 result)
    m = re.fullmatch(r'0x[0-9a-fA-F]+', expr)
    if m:
        v = int(expr, 0)
        if size == 8:
            return {'qword': v, 'int': v & 0xffffffff, 'float': struct.unpack('<f', struct.pack('<I', v & 0xffffffff))[0]}
        return {'int': v & 0xffffffff, 'float': struct.unpack('<f', struct.pack('<I', v & 0xffffffff))[0], 'hex': hex(v)}
    # Plain decimal
    m = re.fullmatch(r'-?\d+', expr)
    if m:
        return {'int': int(expr), 'float': float(int(expr))}
    # CONCAT44(high, low) -> lower 32 bits determine the float/int value
    m = re.fullmatch(r'CONCAT44\s*\(\s*([^,]+)\s*,\s*([^)]+)\s*\)', expr)
    if m:
        return eval_const(m.group(2), size, const_map)
    # Fallback: take the last 32-bit hex token in the expression (often the lower half)
    tokens = re.findall(r'0x[0-9a-fA-F]+', expr)
    if tokens:
        return eval_const(tokens[-1], size, const_map)
    # Last plain decimal token
    tokens = re.findall(r'-?\d+', expr)
    if tokens:
        return eval_const(tokens[-1], size, const_map)
    return None


def update_const_map(line, const_map):
    """Update the line-local constant map with uVar assignments.

    Recognizes simple assignments such as:
        uVar25 = 0x3f000000;
        uVar25 = CONCAT44(uVar26, 0x3f000000);
        uVar25 = CONCAT44(uVar26, uVar6);   # if uVar6 is already known, use it
    """
    for m in re.finditer(r'\b(\w+)\s*=\s*([^;]+);', line):
        var, rhs = m.group(1), m.group(2).strip()
        if re.match(r'uVar\d+$', var):
            val = eval_const(rhs, 4, const_map)
            if val:
                # Store the original RHS expression so later CONCAT44 resolvers
                # can see the concrete hex token if needed.
                const_map[var] = rhs


def build_alias_map(body, off_map, dll, sections):
    """Build a map from local variable names to TLS string offsets.

    Recognises:
        puVar1 = (ulonglong *)(lVar15 + 0x12fb0);
        puVar21 = local_d8;
        ppppuVar22 = &local_88;
        func_0x1806aa960(ppppuVar22, puVar1, sVar14);  // copy from puVar1's offset

    Also tracks the local std::string object that a copy was written into,
    e.g. 'puVar27 = local_a8; ... func_0x1806aa960(puVar27, src, len);'
    """
    alias = {}   # var -> offset or (var, 0)
    last_ptr = {}  # ptr var -> local name it was assigned to
    lines = en._join_continued(body)
    # local_d8 style strings are heap copies; track offset via func_0x1806aa960
    for line in lines:
        # pointer assignment to lVar15 + off
        m = re.search(r'\b(\w+)\s*=\s*\([^)]*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)', line)
        if m:
            alias[m.group(1)] = int(m.group(2), 0)
            continue
        # ppppuVar22 = &local_88;
        m = re.search(r'\b(\w+)\s*=\s*&\s*(local_\w+);', line)
        if m:
            dst, src = m.group(1), m.group(2)
            if src in alias:
                alias[dst] = alias[src]
            continue
        # puVar21 = local_d8;
        m = re.search(r'\b(\w+)\s*=\s*(local_\w+)\s*;', line)
        if m:
            dst, src = m.group(1), m.group(2)
            if src in alias:
                alias[dst] = alias[src]
            # record that a pointer var was assigned to a local std::string
            if dst.startswith('pu') or dst.startswith('pb') or dst.startswith('pc'):
                last_ptr[dst] = src
            continue
        # local_a8._0_8_ = puVar27;  // large-string data pointer stored into the std::string object
        m = re.search(r'\b(local_\w+)\._0_8_\s*=\s*(\w+)\s*;', line)
        if m:
            local_name, ptr = m.group(1), m.group(2)
            if ptr in alias:
                alias[local_name] = alias[ptr]
            if ptr.startswith('pu') or ptr.startswith('pb') or ptr.startswith('pc'):
                last_ptr[ptr] = local_name
            continue
        # func_0x1806aa960(dst, src, len);  // string copy
        m = re.search(r'func_0x1806aa960\s*\(\s*(\w+)\s*,\s*(\w+)\s*,', line)
        if m:
            dst, src = m.group(1), m.group(2)
            if src in alias:
                alias[dst] = alias[src]
            # the destination may be a pointer that was assigned to a local
            local = last_ptr.get(dst)
            if local:
                alias[local] = alias.get(dst)
            continue
    return alias


def resolve_string(arg, alias, off_map):
    """Return the decrypted string associated with an argument variable."""
    # direct local like local_d8
    if arg in alias:
        off = alias[arg]
        return off_map.get(off, ''), off
    # &local_88
    m = re.match(r'&\s*(\w+)', arg)
    if m and m.group(1) in alias:
        off = alias[m.group(1)]
        return off_map.get(off, ''), off
    # (ulonglong *)(lVar15 + 0x12fb0) as argument
    m = re.search(r'\+\s*(0x[0-9a-fA-F]+|\d+)', arg)
    if m:
        off = int(m.group(1), 0)
        return off_map.get(off, ''), off
    return '', None


def parse_calls(body, func):
    lines = en._join_continued(body)
    pat = re.escape(func) + r'\s*\((.*?)\)\s*;'
    calls = []
    for l in lines:
        for m in re.finditer(pat, l):
            calls.append(m.group(1))
    return calls


def clean_name(s):
    """Truncate setting name at the first non-printable or clearly corrupt byte."""
    if not s:
        return ''
    out = []
    for ch in s:
        o = ord(ch)
        if 32 <= o < 127 or o in (0xb7, 0x2019):
            out.append(ch)
        else:
            break
    s = ''.join(out).rstrip()
    # drop trailing garbage punctuation like } ) ] ; etc.
    s = re.sub(r'[\{\}\[\]\(\);:,]+$', '', s)
    return s.rstrip()


def infer_type(reg_func, args):
    # Oderso registration functions map to Horion setting types:
    #   func_0x1801cd2e0 -> float   (ValueType 0)
    #   func_0x1801ccff0 -> int     (ValueType 3)
    #   func_0x1801ccd70 -> bool    (ValueType 5)
    #   func_0x1801d3a80 -> enum    (ValueType 7)
    #   func_0x1801d3800 -> key     (ValueType 8)
    if reg_func == 'func_0x1801ccd70':
        return 'bool'
    if reg_func == 'func_0x1801d3a80':
        return 'enum'
    if reg_func == 'func_0x1801ccff0':
        return 'int'
    if reg_func == 'func_0x1801cd2e0':
        return 'float'
    if reg_func == 'func_0x1801d3800':
        return 'key'
    return 'unknown'


def update_alias(line, alias, off_map, const_map, last_ptr=None):
    """Apply one statement to the alias and constant maps and return any call metadata."""
    if last_ptr is None:
        last_ptr = {}
    update_const_map(line, const_map)
    # pointer assignment to lVar15 + off
    # Handles: puVar3 = (ulonglong *)(lVar23 + 0x3ba9);
    #          pcVar1 = (char *)(*(longlong *)(...) + 0x3bdd);
    m = re.search(r'\b(\w+)\s*=\s*\([^)]*\*\s*\)\s*\(.*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*;', line)
    if m:
        alias[m.group(1)] = int(m.group(2), 0)
        return None
    # var = &local_** or var = local_**
    m = re.search(r'\b(\w+)\s*=\s*&?\s*(local_\w+)\s*;', line)
    if m:
        dst, src = m.group(1), m.group(2)
        if src in alias:
            alias[dst] = alias[src]
        if dst.startswith('pu') or dst.startswith('pb') or dst.startswith('pc'):
            last_ptr[dst] = src
        return None
    # local_a8._0_8_ = puVar27;  // large-string data pointer stored into the std::string object
    m = re.search(r'\b(local_\w+)\._0_8_\s*=\s*(\w+)\s*;', line)
    if m:
        local_name, ptr = m.group(1), m.group(2)
        if ptr in alias:
            alias[local_name] = alias[ptr]
        if ptr.startswith('pu') or ptr.startswith('pb') or ptr.startswith('pc'):
            last_ptr[ptr] = local_name
        return None
    # func_0x1806aa960(dst, src, len);  string copy
    m = re.search(r'func_0x1806aa960\s*\(\s*(\w+)\s*,\s*(\w+)\s*,', line)
    if m:
        dst, src = m.group(1), m.group(2)
        if src in alias:
            alias[dst] = alias[src]
        # the destination may be a pointer that was assigned to a local
        local = last_ptr.get(dst)
        if local:
            alias[local] = alias.get(dst)
        return None
    # IModule base constructor: func_0x18014fe60(this, key, category, nameptr)
    m = re.search(r'func_0x18014fe60\s*\((.*?)\)\s*;', line)
    if m:
        parts = split_args(m.group(1))
        name = ''
        if len(parts) >= 4:
            raw, _ = resolve_string(parts[3], alias, off_map)
            name = clean_name(raw)
        category = None
        if len(parts) >= 3:
            try:
                category = int(parts[2].strip().replace('\\x00','0'), 0)
            except Exception:
                pass
        key = None
        if len(parts) >= 2:
            try:
                key = int(parts[1].strip().replace('\\x00','0'), 0)
            except Exception:
                pass
        return ('base', {'name': name, 'category': category, 'key': key})
    # tooltip setter: func_0x1801c2ba0(this, ?, ?, tooltipptr)
    m = re.search(r'func_0x1801c2ba0\s*\((.*?)\)\s*;', line)
    if m:
        parts = split_args(m.group(1))
        tooltip = ''
        if len(parts) >= 4:
            raw, _ = resolve_string(parts[3], alias, off_map)
            tooltip = clean_name(raw)
        return ('tooltip', tooltip)
    # registration call
    for fn in ('func_0x1801ccd70', 'func_0x1801cd2e0', 'func_0x1801d3a80', 'func_0x1801ccff0', 'func_0x1801d3800'):
        pat = re.escape(fn) + r'\s*\((.*?)\)\s*;'
        m = re.search(pat, line)
        if m:
            args = m.group(1)
            parts = split_args(args)
            name, off = '', None
            for idx in (1, 2):
                if idx < len(parts):
                    raw, off = resolve_string(parts[idx], alias, off_map)
                    name = clean_name(raw)
                    if name:
                        break
            # Extract default / min / max for numeric settings.
            # Registration signatures (after this + name pointer pair):
            #   bool:   (this, name, bool*  , default)
            #   enum:   (this, name, enum*  , default)
            #   int:    (this, name, int*   , default, min, max)
            #   float:  (this, name, float* , default, min, max)
            #   key:    (this, name, name2, key* , default, ...)
            defaults = {}
            type_ = infer_type(fn, args)
            if type_ in ('int', 'float'):
                for i, key in ((4, 'default'), (5, 'min'), (6, 'max')):
                    if i < len(parts):
                        v = eval_const(parts[i], 4, const_map)
                        if v:
                            defaults[key] = v
            elif type_ in ('bool', 'enum'):
                if 3 < len(parts):
                    v = eval_const(parts[3], 4, const_map)
                    if v:
                        defaults['default'] = v
            elif type_ == 'key':
                if 4 < len(parts):
                    v = eval_const(parts[4], 4, const_map)
                    if v:
                        defaults['default'] = v

            return ('setting', {
                'reg_func': fn,
                'name': name,
                'type': type_,
                'offset': off,
                'raw_args': args,
                'parts': parts,
                **defaults,
            })
    return None


def extract_module(ctor, dll, sections, content):
    body = en.get_function_body(content, ctor)
    strings = en.extract_inline_tls_strings(body, dll, sections)
    dc_strings = ed.extract_datacopy_strings(body, dll, sections)
    off_map = {int(s['offset'], 0): s['string'] for s in dc_strings}
    for s in strings:
        off = int(s['offset'], 0)
        if off not in off_map or not off_map[off]:
            off_map[off] = s['string']
    for off, s in DATACOPY_OVERRIDES.get(ctor, {}).items():
        off_map[off] = s
    alias = {}
    const_map = {}
    last_ptr = {}
    result = {'constructor': ctor, 'name': None, 'category': None, 'key': None, 'tooltip': None, 'settings': []}
    for line in en._join_continued(body):
        if not line.strip() or line.strip().startswith('//'):
            continue
        entry = update_alias(line, alias, off_map, const_map, last_ptr)
        if not entry:
            continue
        kind, val = entry
        if kind == 'base':
            result.update(val)
        elif kind == 'tooltip':
            result['tooltip'] = val
        elif kind == 'setting':
            result['settings'].append(val)
    return result


def extract_settings(ctor, dll, sections, content):
    """Backwards-compatible wrapper: return only the settings list."""
    return extract_module(ctor, dll, sections, content)['settings']


def main():
    with open(DLL, 'rb') as f:
        dll = f.read()
    with open(DECOMP, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    sections = en.load_sections(dll)
    ctor = sys.argv[1] if len(sys.argv) > 1 else 'func_0x1803d65c0'
    for s in extract_settings(ctor, dll, sections, content):
        print(s['type'], repr(s['name']))


if __name__ == '__main__':
    main()
