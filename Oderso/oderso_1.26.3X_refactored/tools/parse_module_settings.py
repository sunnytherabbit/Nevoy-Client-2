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


def eval_const(expr, size=4):
    """Try to evaluate a constant expression."""
    expr = expr.strip()
    m = re.fullmatch(r'0x[0-9a-fA-F]+', expr)
    if m:
        v = int(expr, 0)
        if size == 8:
            return {'qword': v, 'int': v & 0xffffffff, 'float': struct.unpack('<f', struct.pack('<I', v & 0xffffffff))[0]}
        return {'int': v & 0xffffffff, 'float': struct.unpack('<f', struct.pack('<I', v & 0xffffffff))[0], 'hex': hex(v)}
    m = re.fullmatch(r'-?\d+', expr)
    if m:
        return {'int': int(expr), 'float': float(int(expr))}
    return None


def build_alias_map(body, off_map, dll, sections):
    """Build a map from local variable names to TLS string offsets.

    Recognises:
        puVar1 = (ulonglong *)(lVar15 + 0x12fb0);
        puVar21 = local_d8;
        ppppuVar22 = &local_88;
        func_0x1806aa960(ppppuVar22, puVar1, sVar14);  // copy from puVar1's offset
    """
    alias = {}   # var -> offset or (var, 0)
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
            continue
        # func_0x1806aa960(dst, src, len);  // string copy
        m = re.search(r'func_0x1806aa960\s*\(\s*(\w+)\s*,\s*(\w+)\s*,', line)
        if m:
            dst, src = m.group(1), m.group(2)
            if src in alias:
                alias[dst] = alias[src]
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
    if reg_func == 'func_0x1801ccd70':
        return 'bool'
    if reg_func == 'func_0x1801d3a80':
        return 'enum'
    if reg_func == 'func_0x1801ccff0':
        return 'int'
    if reg_func == 'func_0x1801cd2e0':
        return 'float'
    return 'unknown'


def update_alias(line, alias, off_map):
    """Apply one statement to the alias map and return any call metadata."""
    # pointer assignment to lVar15 + off
    m = re.search(r'\b(\w+)\s*=\s*\([^)]*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)', line)
    if m:
        alias[m.group(1)] = int(m.group(2), 0)
        return None
    # var = &local_** or var = local_**
    m = re.search(r'\b(\w+)\s*=\s*&?\s*(local_\w+)\s*;', line)
    if m:
        dst, src = m.group(1), m.group(2)
        if src in alias:
            alias[dst] = alias[src]
        return None
    # func_0x1806aa960(dst, src, len);  string copy
    m = re.search(r'func_0x1806aa960\s*\(\s*(\w+)\s*,\s*(\w+)\s*,', line)
    if m:
        dst, src = m.group(1), m.group(2)
        if src in alias:
            alias[dst] = alias[src]
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
    for fn in ('func_0x1801ccd70', 'func_0x1801cd2e0', 'func_0x1801d3a80', 'func_0x1801ccff0'):
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
            return ('setting', {
                'reg_func': fn,
                'name': name,
                'type': infer_type(fn, args),
                'offset': off,
                'raw_args': args,
                'parts': parts,
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
    alias = {}
    result = {'constructor': ctor, 'name': None, 'category': None, 'key': None, 'tooltip': None, 'settings': []}
    for line in en._join_continued(body):
        if not line.strip() or line.strip().startswith('//'):
            continue
        entry = update_alias(line, alias, off_map)
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
