#!/usr/bin/env python3
"""Robust TLS / .rdata string extractor for any Oderso module constructor.

Correctly handles multi-line Ghidra statements and the common XOR patterns.
"""
import os
import re
import struct
import json

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


def read_qword(dll, sections, addr):
    return struct.unpack('<Q', read_bytes(dll, sections, addr, 8))[0]


def read_dword(dll, sections, addr):
    return struct.unpack('<I', read_bytes(dll, sections, addr, 4))[0]


def read_word(dll, sections, addr):
    return struct.unpack('<H', read_bytes(dll, sections, addr, 2))[0]


def read_byte(dll, sections, addr):
    return read_bytes(dll, sections, addr, 1)[0]


SIZE_HINTS = {
    'undefined8': 8, 'longlong': 8, 'qword': 8, 'ulonglong': 8,
    'undefined4': 4, 'uint': 4, 'dword': 4, 'int': 4, 'undefined': 1,
    'byte': 1, 'char': 1, 'undefined2': 2, 'word': 2, 'short': 2,
}


def size_from_type(typ):
    t = typ.lower()
    for k, v in SIZE_HINTS.items():
        if k in t:
            return v
    if '8' in t:
        return 8
    if '4' in t:
        return 4
    if '2' in t:
        return 2
    if '1' in t:
        return 1
    return 8


def eval_expr(expr, dll, sections):
    expr = expr.strip()
    if expr == '' or expr == '0':
        return 0
    # hex / decimal
    if re.fullmatch(r'-?0x[0-9a-fA-F]+', expr):
        return int(expr, 0)
    if re.fullmatch(r'-?\d+', expr):
        return int(expr)
    # _DAT_ / _UNK_
    m = re.search(r'(_DAT_|_UNK_)180([0-9a-fA-F]+)', expr)
    if m:
        addr = IMAGE_BASE | int(m.group(2), 16)
        if 'qword' in expr.lower() or 'undefined8' in expr or 'longlong' in expr:
            return read_qword(dll, sections, addr)
        if 'word' in expr.lower() or 'undefined2' in expr or 'short' in expr:
            return read_word(dll, sections, addr)
        if 'byte' in expr.lower():
            return read_byte(dll, sections, addr)
        # default dword
        return read_dword(dll, sections, addr)
    # CONCAT helpers
    m = re.fullmatch(r'CONCAT44\s*\(\s*(.+?)\s*,\s*(.+?)\s*\)', expr, re.S)
    if m:
        hi = eval_expr(m.group(1), dll, sections) & 0xffffffff
        lo = eval_expr(m.group(2), dll, sections) & 0xffffffff
        return (hi << 32) | lo
    m = re.fullmatch(r'CONCAT22\s*\(\s*(.+?)\s*,\s*(.+?)\s*\)', expr, re.S)
    if m:
        hi = eval_expr(m.group(1), dll, sections) & 0xffff
        lo = eval_expr(m.group(2), dll, sections) & 0xffff
        return (hi << 16) | lo
    m = re.fullmatch(r'CONCAT62\s*\(\s*(.+?)\s*,\s*(.+?)\s*\)', expr, re.S)
    if m:
        hi = eval_expr(m.group(1), dll, sections) & 0xffffffffffffff
        lo = eval_expr(m.group(2), dll, sections) & 0xffff
        return (hi << 16) | lo
    m = re.fullmatch(r'SUB168\s*\(\s*(.+?)\s*,\s*0\s*\)', expr, re.S)
    if m:
        return eval_expr(m.group(1), dll, sections) & 0xffffffffffffffff
    m = re.fullmatch(r'SUB164\s*\(\s*(.+?)\s*,\s*0\s*\)', expr, re.S)
    if m:
        return eval_expr(m.group(1), dll, sections) & 0xffffffff
    raise ValueError(f'unsupported expr: {expr!r}')


def expr_value(expr, dll, sections, size=8):
    expr = expr.strip()
    # strip leading cast
    m = re.match(r'\(\s*(?:undefined\d*|uint|ulonglong|byte|short|char|int|longlong|\d+)\s*\)\s*\(\s*(.+?)\s*\)', expr, re.S)
    if m:
        expr = m.group(1).strip()
    return eval_expr(expr, dll, sections) & ((1 << (size * 8)) - 1)


def join_continued_lines(lines):
    """Join Ghidra-generated statements that span multiple lines."""
    out = []
    buf = ''
    cont_tokens = (',', '(', '[', '|', '^', '&', '+', '-', '*', '/', '%',
                   '?', ':', '&&', '||', '<<', '>>', '~', '!')
    for raw in lines:
        line = raw.rstrip()
        if not line:
            continue
        # strip leading whitespace but keep for brace detection? not needed
        s = line.strip()
        if buf:
            # decide whether to flush with current line
            if s.endswith(cont_tokens) or s.endswith(('\\',)):
                buf += ' ' + s
                continue
            # if buffer already looks complete and current line is a statement start
            if s.endswith((';', '{', '}', ')')):
                buf += ' ' + s
                out.append(buf.strip())
                buf = ''
                continue
            buf += ' ' + s
            out.append(buf.strip())
            buf = ''
            continue
        if s.endswith(cont_tokens):
            buf = s
            continue
        out.append(line)
    if buf:
        out.append(buf.strip())
    return out


def split_statements(body):
    """Split function body into individual C statements."""
    lines = body.split('\n')
    joined = join_continued_lines(lines)
    # simple split by semicolons; ignores for-loop internals but those don't match our regexes
    stmts = []
    for line in joined:
        for part in line.split(';'):
            part = part.strip()
            if part:
                stmts.append(part)
    return stmts


def read_cstring(dll, sections, addr, max_len=256):
    rva = addr - IMAGE_BASE
    for vaddr, vsize, raw, _ in sections:
        if vaddr <= rva < vaddr + vsize:
            off = raw + (rva - vaddr)
            end = dll.find(b'\x00', off)
            if end == -1 or end - off > max_len:
                end = off + max_len
            return dll[off:end]
    raise ValueError(f'cannot map address 0x{addr:x}')


def extract_inline_tls_strings(body, dll, sections):
    """Extract TLS inline string blocks encrypted with XOR keys."""
    results = []
    stmts = split_statements(body)
    # find each func_0x180673140 marker (tls init helper)
    for i, stmt in enumerate(stmts):
        if 'func_0x180673140' not in stmt:
            continue
        # find the if that guards this init
        # locate preceding if/while condition with '\0' or '== 0'
        init_idx = i
        # We process from the previous if condition to the next if decryptions
        # For simplicity: gather statements between this helper call and the next one
        block = []
        for j in range(i + 1, len(stmts)):
            if 'func_0x180673140' in stmts[j]:
                break
            block.append(stmts[j])
        # also include preceding assignments that set the encrypted constants before the if
        # We look for the if start by scanning backwards for "== '\\0')" or "== 0)"
        start = max(0, i - 30)
        prefix = stmts[start:i]
        # combine prefix with block
        all_stmts = prefix + block
        mem = bytearray(0x14000)
        touched = set()
        flags = set()
        base_off = None
        ptrs = {}

        def process_statement(st):
            nonlocal base_off
            # pointer definitions
            m = re.search(r'\b(\w+)\s*=\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*', st)
            if m:
                var, typ, off = m.group(1), m.group(2), int(m.group(3), 0)
                ptrs[var] = (off, size_from_type(typ))
                return
            # *puVar = *puVar ^ KEY;
            m = re.search(r'\*\s*(\w+)\s*=\s*\*\s*\1\s*\^\s*(.+)', st)
            if m and m.group(1) in ptrs:
                var, keyexpr = m.group(1), m.group(2)
                off, sz = ptrs[var]
                try:
                    key = expr_value(keyexpr, dll, sections, sz)
                except Exception:
                    return
                v = int.from_bytes(mem[off:off + sz], 'little') ^ key
                mem[off:off + sz] = v.to_bytes(sz, 'little')
                touched.update(range(off, off + sz))
                return
            # *puVar = (expression_reassembling_current_bytes) ^ KEY;
            m = re.search(r'\*\s*(\w+)\s*=\s*(.+)\^\s*(.+)', st)
            if m and m.group(1) in ptrs:
                var, lhs, keyexpr = m.group(1), m.group(2), m.group(3)
                off, sz = ptrs[var]
                try:
                    key = expr_value(keyexpr, dll, sections, sz)
                except Exception:
                    return
                if var in lhs or re.search(rf'{re.escape(var)}|lVar\d+\s*\+\s*0x[0-9a-fA-F]+', lhs):
                    v = int.from_bytes(mem[off:off + sz], 'little') ^ key
                    mem[off:off + sz] = v.to_bytes(sz, 'little')
                    touched.update(range(off, off + sz))
                return
            # *(TYPE *)(lVar15 + OFF) = *(TYPE *)(lVar15 + OFF) ^ KEY;
            m = re.search(
                r'\*\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*='
                r'\s*\*\s*\(\s*\1\s*\*\s*\)\s*\(\s*\w+\s*\+\s*\2\s*\)\s*\^\s*(.+)', st)
            if m:
                typ, off, keyexpr = m.group(1), int(m.group(2), 0), m.group(3)
                sz = size_from_type(typ)
                try:
                    key = expr_value(keyexpr, dll, sections, sz)
                except Exception:
                    return
                v = int.from_bytes(mem[off:off + sz], 'little') ^ key
                mem[off:off + sz] = v.to_bytes(sz, 'little')
                touched.update(range(off, off + sz))
                return
            # data assignment: *(TYPE *)(lVar15 + OFF) = VALUE;
            m = re.search(r'\*\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*(.+)', st)
            if m:
                typ, off, val = m.group(1), int(m.group(2), 0), m.group(3)
                sz = size_from_type(typ)
                # skip plain flag init/clear: 1-byte assignment of 0 or 1
                if sz == 1 and re.fullmatch(r'\s*0x0|0|1\s*', val):
                    if ('\'' not in st and ('= 0' in st or '= 1' in st)):
                        flags.add(off)
                    return
                try:
                    v = expr_value(val, dll, sections, sz)
                except Exception:
                    return
                mem[off:off + sz] = v.to_bytes(sz, 'little')
                touched.update(range(off, off + sz))
                if base_off is None:
                    base_off = off
                return

        for st in all_stmts:
            process_statement(st)
        if not touched:
            continue
        start = min(touched - flags) if (touched - flags) else min(touched)
        end = max(touched) + 1
        s = bytes(mem[start:end]).split(b'\x00')[0]
        if s:
            results.append({'offset': hex(start), 'string': s.decode('latin1', errors='replace')})
    return results


def extract_rdata_strings(body, dll, sections):
    """Extract strings copied from .rdata and decrypted via helper funcs."""
    results = []
    # Look for func_0x18007d2b0(ptr, &local) and similar memcpy patterns
    for m in re.finditer(r'func_0x18007d2b0\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+)\s*,\s*&(local_\w+)\s*\)', body):
        off = int(m.group(1), 0)
        results.append({'offset': hex(off), 'string': '<.rdata copy not decoded>'})
    return results


def get_function_body(content, name):
    pat = r'// Function:\s*' + re.escape(name) + r'\b(.*?)\n(?=// Function:|\Z)'
    m = re.search(pat, content, re.S)
    if not m:
        raise ValueError(f'{name} not found')
    return m.group(1)


if __name__ == '__main__':
    import sys
    with open(DLL, 'rb') as f:
        dll = f.read()
    with open(DECOMP, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    sections = load_sections(dll)
    func = sys.argv[1] if len(sys.argv) > 1 else 'func_0x1803d65c0'
    body = get_function_body(content, func)
    for s in extract_inline_tls_strings(body, dll, sections):
        print(s['offset'], repr(s['string']))
