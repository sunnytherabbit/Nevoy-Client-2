#!/usr/bin/env python3
"""Extract decrypted strings and settings from func_0x1803d65c0 (NameTags)."""
import os
import re
import struct
import json
import sys

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DLL = os.path.join(BASE, '..', '1.26.3X.dll')
DECOMP = os.path.join(BASE, '..', 'ghidra_decompiled_1.26.3X.c')
IMAGE_BASE = 0x180000000


def load_sections(dll):
    dos = struct.unpack('<H', dll[0x3c:0x3e])[0]
    num = struct.unpack('<H', dll[dos + 6:dos + 8])[0]
    opt = struct.unpack('<H', dll[dos + 20:dos + 22])[0]
    sec = dos + 24 + opt
    out = []
    for i in range(num):
        e = sec + i * 40
        name = dll[e:e + 8].rstrip(b'\x00').decode('ascii', 'ignore')
        vsize = struct.unpack('<I', dll[e + 8:e + 12])[0]
        vaddr = struct.unpack('<I', dll[e + 12:e + 16])[0]
        raw = struct.unpack('<I', dll[e + 20:e + 24])[0]
        out.append((vaddr, vsize, raw, name))
    return out


def read_bytes(dll, sections, addr, n):
    rva = addr - IMAGE_BASE
    for vaddr, vsize, raw, _ in sections:
        if vaddr <= rva < vaddr + vsize:
            off = raw + (rva - vaddr)
            return dll[off:off + n]
    raise ValueError(f'cannot map address 0x{addr:x}')


def read_dword(dll, sections, addr):
    return struct.unpack('<I', read_bytes(dll, sections, addr, 4))[0]


def read_qword(dll, sections, addr):
    return struct.unpack('<Q', read_bytes(dll, sections, addr, 8))[0]


def get_function_body(content, name):
    pat = r'// Function:\s*' + re.escape(name) + r'\b(.*?\n)(?=// Function:|\Z)'
    m = re.search(pat, content, re.S)
    if not m:
        raise ValueError(f'{name} not found')
    return m.group(1)


def brace_block(lines, start_idx):
    """Return list of lines for the brace block starting at start_idx."""
    brace = 0
    block = []
    i = start_idx
    while i < len(lines):
        line = lines[i]
        block.append(line)
        brace += line.count('{')
        brace -= line.count('}')
        if brace == 0 and i > start_idx:
            break
        i += 1
    return block


def expr_value(expr, dll, sections, size=8):
    """Evaluate simple Ghidra expressions to an integer or bytes."""
    expr = expr.strip()
    # cast prefix: (undefined8), (undefined4), (undefined2), (undefined), (uint), (ulonglong), (byte)
    m = re.match(r'\(\s*(?:undefined\d*|uint|ulonglong|byte|short|char|int|longlong|\d+)(?:\s+\w+)?\s*\)\s*(.+)', expr, re.S)
    if m:
        expr = m.group(1).strip()
    # handle shift casts like (undefined2)((uint)_UNK_... >> 0x10)
    m = re.match(r'\(\s*(?:undefined\d*|uint|ulonglong|byte|short|char|int|longlong|\d+)(?:\s+\w+)?\s*\)\s*\(\s*(?:uint|ulonglong|short|int|longlong|undefined\d*)\s*\)\s*\(\s*(.+?)\s*>>\s*(0x[0-9a-fA-F]+|\d+)\s*\)', expr, re.S)
    if m:
        inner = m.group(1).strip()
        shift = int(m.group(2), 0)
        return (eval_expr(inner, dll, sections) >> shift) & ((1 << (size * 8)) - 1)
    return eval_expr(expr, dll, sections, size)


def eval_expr(expr, dll, sections, size=8):
    expr = expr.strip()
    # integer
    if re.fullmatch(r'-?0x[0-9a-fA-F]+', expr):
        return int(expr, 0)
    if re.fullmatch(r'-?\d+', expr):
        return int(expr)
    # _DAT_ / _UNK_ symbol
    m = re.search(r'(_DAT_|_UNK_)180([0-9a-fA-F]+)', expr)
    if m:
        addr = IMAGE_BASE | int(m.group(2), 16)
        # determine size from context and caller hint
        if size == 8 or 'qword' in expr.lower() or 'undefined8' in expr or 'longlong' in expr:
            return read_qword(dll, sections, addr)
        if size == 2 or 'word' in expr.lower() or 'undefined2' in expr or 'short' in expr:
            return struct.unpack('<H', read_bytes(dll, sections, addr, 2))[0]
        if size == 1 or 'byte' in expr.lower():
            return read_bytes(dll, sections, addr, 1)[0]
        # default dword
        return read_dword(dll, sections, addr)
    # CONCAT helpers
    m = re.fullmatch(r'CONCAT44\s*\(\s*(.+?)\s*,\s*(.+?)\s*\)', expr, re.S)
    if m:
        hi = eval_expr(m.group(1), dll, sections, 4) & 0xffffffff
        lo = eval_expr(m.group(2), dll, sections, 4) & 0xffffffff
        return (hi << 32) | lo
    m = re.fullmatch(r'CONCAT22\s*\(\s*(.+?)\s*,\s*(.+?)\s*\)', expr, re.S)
    if m:
        hi = eval_expr(m.group(1), dll, sections, 2) & 0xffff
        lo = eval_expr(m.group(2), dll, sections, 2) & 0xffff
        return (hi << 16) | lo
    m = re.fullmatch(r'CONCAT62\s*\(\s*(.+?)\s*,\s*(.+?)\s*\)', expr, re.S)
    if m:
        hi = eval_expr(m.group(1), dll, sections, 8) & 0xffffffffffffff
        lo = eval_expr(m.group(2), dll, sections, 8) & 0xffff
        return (hi << 16) | lo
    m = re.fullmatch(r'SUB168\s*\(\s*(.+?)\s*,\s*0\s*\)', expr, re.S)
    if m:
        return eval_expr(m.group(1), dll, sections, 8) & 0xffffffffffffffff
    raise ValueError(f'unsupported expr: {expr!r}')


def size_from_type(typ):
    t = typ.lower()
    if '8' in t or 'longlong' in t or 'qword' in t:
        return 8
    if '4' in t or 'dword' in t or 'uint' in t or 'int' in t:
        return 4
    if '2' in t or 'word' in t or 'short' in t:
        return 2
    if '1' in t or 'byte' in t or 'char' in t:
        return 1
    return 8


def find_braceless_block(lines, start_idx):
    """For the decrypt if blocks, the block may be a single statement after if
    or braced. Return lines."""
    block = []
    i = start_idx
    # line start is the if line
    while i < len(lines):
        block.append(lines[i])
        if '{' in lines[i]:
            break
        if ';' in lines[i] and i > start_idx:
            # single statement
            return block
        i += 1
    if '{' in lines[i]:
        return brace_block(lines, i)
    return block


def _join_continued(body):
    """Join Ghidra statements split over multiple lines."""
    lines = body.split('\n')
    out = []
    buf = ''
    cont = (',', '(', '[', '|', '^', '&', '+', '-', '*', '/', '%',
            '?', ':', '~', '!', '&&', '||', '<<', '>>')
    for line in lines:
        s = line.strip()
        if not s:
            continue
        if s.startswith('//'):
            continue
        if buf:
            buf += ' ' + s
            # Continue while the accumulated buffer still has unbalanced parens/brackets
            # or does not end a statement cleanly.
            paren_depth = (buf.count('(') - buf.count(')')) + (buf.count('[') - buf.count(']'))
            if (s.endswith((';', '}', ')', '\\')) or not s.endswith(cont)) and paren_depth <= 0:
                out.append(buf)
                buf = ''
            continue
        # start a continuation buffer for unclosed parens/brackets or trailing operators
        open_depth = (s.count('(') - s.count(')')) + (s.count('[') - s.count(']'))
        if open_depth > 0 or s.endswith(cont):
            buf = s
            continue
        out.append(s)
    if buf:
        out.append(buf)
    return out


def extract_inline_tls_strings(body, dll, sections):
    results = []
    lines = _join_continued(body)
    for i, line in enumerate(lines):
        if 'func_0x180673140' not in line:
            continue
        # find init if block ending at this call
        init_start = None
        for j in range(i - 1, -1, -1):
            if "== '\\0')" in lines[j] or '== 0)' in lines[j]:
                init_start = j
                break
        if init_start is None:
            continue
        init_block = brace_block(lines, init_start)
        dec_start = None
        for j in range(i + 1, min(len(lines), i + 25)):
            if "== '\\x01')" in lines[j]:
                dec_start = j
                break
        if dec_start is None:
            continue
        dec_block = brace_block(lines, dec_start)
        mem = bytearray(0x14000)
        touched = set()
        flags = set()
        ptrs = {}
        base_off = None

        # Lines between the func_0x180673140 call and the decrypt block often
        # define the pointer used in the XOR (e.g. puVar1 = (ulonglong *)...).
        mid_block = lines[i + 1:dec_start + 1]

        # Collect pointer definitions from init, mid, and decrypt blocks first
        for block in (init_block, mid_block, dec_block):
            for l in block:
                m = re.search(r'\b(\w+)\s*=\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*;', l)
                if m:
                    var, typ, off = m.group(1), m.group(2), int(m.group(3), 0)
                    ptrs[var] = (off, size_from_type(typ))

        def process_assignments(block, is_decrypt):
            nonlocal base_off
            for l in block:
                # *puVar = *puVar ^ KEY;
                m = re.search(r'\*\s*(\w+)\s*=\s*\*\s*\1\s*\^\s*(.+?)\s*;', l)
                if m and m.group(1) in ptrs:
                    var, keyexpr = m.group(1), m.group(2)
                    off, sz = ptrs[var]
                    try:
                        key = expr_value(keyexpr, dll, sections, sz)
                    except Exception:
                        continue
                    v = int.from_bytes(mem[off:off + sz], 'little') ^ key
                    mem[off:off + sz] = v.to_bytes(sz, 'little')
                    touched.update(range(off, off + sz))
                    continue
                # *puVar = (expression_reassembling_current_bytes) ^ KEY;
                m = re.search(r'\*\s*(\w+)\s*=\s*(.+?)\s*\^\s*(.+?)\s*;', l)
                if m and m.group(1) in ptrs:
                    var, lhs, keyexpr = m.group(1), m.group(2), m.group(3)
                    off, sz = ptrs[var]
                    try:
                        key = expr_value(keyexpr, dll, sections, sz)
                    except Exception:
                        continue
                    # left side must touch the same pointer/region; otherwise ignore
                    if var in lhs or re.search(rf'{re.escape(var)}|lVar\d+\s*\+\s*0x[0-9a-fA-F]+', lhs):
                        v = int.from_bytes(mem[off:off + sz], 'little') ^ key
                        mem[off:off + sz] = v.to_bytes(sz, 'little')
                        touched.update(range(off, off + sz))
                        continue
                # *(TYPE *)(lVar15 + OFF) = *(TYPE *)(lVar15 + OFF) ^ KEY;
                m = re.search(
                    r'\*\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*='
                    r'\s*\*\s*\(\s*\1\s*\*\s*\)\s*\(\s*\w+\s*\+\s*\2\s*\)\s*\^\s*(.+?)\s*;', l)
                if m:
                    typ, off, keyexpr = m.group(1), int(m.group(2), 0), m.group(3)
                    sz = size_from_type(typ)
                    try:
                        key = expr_value(keyexpr, dll, sections, sz)
                    except Exception:
                        continue
                    v = int.from_bytes(mem[off:off + sz], 'little') ^ key
                    mem[off:off + sz] = v.to_bytes(sz, 'little')
                    touched.update(range(off, off + sz))
                    continue
                # data assignment: *(TYPE *)(lVar15 + OFF) = VALUE;
                m = re.search(r'\*\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*(.+?)\s*;', l)
                if m:
                    typ, off, val = m.group(1), int(m.group(2), 0), m.group(3)
                    sz = size_from_type(typ)
                    # skip plain flag init/clear: 1-byte assignment of 0 or 1
                    if sz == 1 and re.fullmatch(r'\s*0x0|0|1\s*', val):
                        if is_decrypt and val.strip() in ('0', '0x0'):
                            flags.add(off)
                            continue
                        if not is_decrypt and val.strip() in ('1', '0x1'):
                            flags.add(off)
                            continue
                    try:
                        v = expr_value(val, dll, sections, sz)
                    except Exception:
                        continue
                    mem[off:off + sz] = v.to_bytes(sz, 'little')
                    touched.update(range(off, off + sz))
                    if base_off is None:
                        base_off = off
                    continue
        process_assignments(init_block, False)
        process_assignments(dec_block, True)
        if not touched:
            continue
        start = min(touched - flags) if (touched - flags) else min(touched)
        end = max(touched) + 1
        s = bytes(mem[start:end]).split(b'\x00')[0]
        results.append({'offset': hex(start), 'string': s.decode('latin1', errors='replace')})
    return results


def main():
    if not os.path.exists(DLL) or not os.path.exists(DECOMP):
        print('missing DLL or decomp')
        sys.exit(1)
    with open(DLL, 'rb') as f:
        dll = f.read()
    with open(DECOMP, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    sections = load_sections(dll)
    body = get_function_body(content, 'func_0x1803d65c0')
    strings = extract_inline_tls_strings(body, dll, sections)
    for s in strings:
        print(s['offset'], repr(s['string']))


if __name__ == '__main__':
    main()
