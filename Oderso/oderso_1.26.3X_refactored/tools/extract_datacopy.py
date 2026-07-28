#!/usr/bin/env python3
"""Decrypt Oderso .rdata -> TLS copy strings used by module constructors."""
import os
import re
import struct

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DLL = os.path.join(BASE, '..', '1.26.3X.dll')

import extract_nametags as en


def read_bytes(dll, sections, addr, size):
    rva = addr - en.IMAGE_BASE
    for vaddr, vsize, raw, name in sections:
        if vaddr <= rva < vaddr + vsize:
            off = raw + (rva - vaddr)
            return dll[off:off + size]
    return None


def read_rdata_value(dll, sections, addr, size):
    b = read_bytes(dll, sections, addr, size)
    if not b:
        return None
    if size == 8:
        return struct.unpack('<Q', b)[0]
    return struct.unpack('<I', b)[0]


def parse_addr(expr):
    for pat in [r'_DAT_(?:18)?([0-9a-fA-F]+)', r'_UNK_(?:18)?([0-9a-fA-F]+)']:
        m = re.search(pat, expr)
        if m:
            return en.IMAGE_BASE | int(m.group(1), 16)
    return None


def value_of(expr, dll, sections, uvars, size=4):
    expr = expr.strip().rstrip(';')
    # strip casts like (uint), (ulonglong), (undefined4), SUB168(..., 0)
    expr = re.sub(r'SUB168\s*\(\s*([^,]+),\s*0\s*\)', r'\1', expr)
    expr = re.sub(r'^\([^)]*\)\s*', '', expr)
    # literal
    m = re.fullmatch(r'0x[0-9a-fA-F]+', expr)
    if m:
        return int(expr, 0) & (0xffffffffffffffff if size == 8 else 0xffffffff)
    m = re.fullmatch(r'\d+', expr)
    if m:
        return int(expr)
    # variable
    if expr in uvars:
        return uvars[expr]
    # rdata symbol
    addr = parse_addr(expr)
    if addr is not None:
        if '_DAT_' in expr:
            # _DAT_ is usually a qword but the use may truncate; try requested size
            v = read_rdata_value(dll, sections, addr, 8)
            if size == 4:
                return v & 0xffffffff
            return v
        else:
            return read_rdata_value(dll, sections, addr, 4)
    return None


def find_data_copy_blocks(body):
    lines = en._join_continued(body)
    blocks = []
    for i, line in enumerate(lines):
        # func_0x18007d2b0(base + OFF, &local_XX)  or func_0x1801b7c70(...)
        m = re.search(r'func_0x180(?:07d2b0|07d150|1b7c70)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*,\s*&?\s*(local_\w+)\s*\)', line)
        if not m:
            continue
        tls_off = int(m.group(1), 0)
        local = m.group(2)
        # find rdata source start from local initialization in previous lines
        rdata_start = None
        for j in range(max(0, i - 15), i):
            if local not in lines[j]:
                continue
            # local_XX._0_8_ = _DAT_1806... ;
            dm = re.search(r'(?:=\s*)?(_DAT_18[0-9a-fA-F]+|_UNK_18[0-9a-fA-F]+)', lines[j])
            if dm:
                try:
                    rdata_start = en.IMAGE_BASE | int(dm.group(1).split('_')[-1], 16)
                    break
                except Exception:
                    pass
        if not rdata_start:
            continue
        blocks.append({'line': i, 'tls_off': tls_off, 'local': local, 'rdata_start': rdata_start})
    return lines, blocks


def xor_buf(buf, off, key, size):
    if key is None or off < 0 or off + size > len(buf):
        return
    for b in range(size):
        buf[off + b] ^= (key >> (8 * b)) & 0xff


def get_offset(expr, base_tls):
    """Extract offset relative to base_tls from expressions like (lVar15 + 0x5a79)."""
    m = re.search(r'\+\s*(0x[0-9a-fA-F]+|\d+)', expr)
    if not m:
        return None
    return int(m.group(1), 0) - base_tls


def process_block(lines, start_idx, tls_off, rdata_start, dll, sections):
    data = read_bytes(dll, sections, rdata_start, 0x44)
    if not data:
        return None
    buf = bytearray(data)
    uvars = {}
    pvars = {}  # puVarN / pbVarN -> buffer offset
    # find the flag check after the copy call; the block contains XOR ops
    block_end = min(len(lines), start_idx + 50)
    for i in range(start_idx + 1, block_end):
        l = lines[i]
        # track pointer variables assigned to (type *)(base + OFF)
        m = re.search(r'\b(\w+)\s*=\s*\([^)]*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*;', l)
        if m:
            pvars[m.group(1)] = int(m.group(2), 0) - tls_off
            continue
        if re.search(r"=\s*'\\x01'", l) or ' == ' in l and "'\\x01'" in l:
            # start of decryption body is next line after {
            continue
        if re.search(r"=\s*0\s*;", l) and ('0x' not in l or re.search(r"\+\s*0x[0-9a-fA-F]+", l)):
            # flag cleared, end of block
            pass
        # uVarN = KEY (no XOR) - record variable value
        m = re.match(r'\s*uVar(\d+)\s*=\s*(.+?)\s*;', l)
        if m and '^' not in l:
            val = value_of(m.group(2), dll, sections, uvars)
            if val is not None:
                uvars[f"uVar{m.group(1)}"] = val
            continue
        # uVarN = *(type*)(base + OFF) ^ KEY
        m = re.match(r'\s*uVar(\d+)\s*=\s*\*\((?:uint|ulonglong|byte)\s*\*\)\s*\(([^)]+)\)\s*\^\s*(.+?)\s*;', l)
        if m:
            off = get_offset(m.group(2), tls_off)
            key = value_of(m.group(3), dll, sections, uvars, size=4)
            if off is not None and key is not None and 0 <= off < len(buf):
                xor_buf(buf, off, key, 4)
            continue
        # *puVarN = *puVarN ^ KEY  (generic pointer variable)
        m = re.match(r'\s*\*(\w+)\s*=\s*\*\1\s*\^\s*(.+?)\s*;', l)
        if m:
            pvar = m.group(1)
            off = pvars.get(pvar)
            size = 4 if 'u' in pvar else 1
            key = value_of(m.group(2), dll, sections, uvars, size=size)
            if off is not None and key is not None:
                xor_buf(buf, off, key, size)
            continue
        # *(uint *)(base + OFF) = uVarN (value already computed as XOR)
        m = re.match(r'\s*\*\(uint\s*\*\)\s*\(([^)]+)\)\s*=\s*uVar(\d+)\s*;', l)
        if m:
            # If we already applied at uVar definition, skip. If not, apply the key stored.
            # Not needed if we applied at definition.
            continue
        # *(uint *)(base + OFF) = *(uint *)(base + OFF) ^ KEY
        m = re.match(r'\s*\*\(uint\s*\*\)\s*\(([^)]+)\)\s*=\s*\*\(uint\s*\*\)\s*\(([^)]+)\)\s*\^\s*(.+?)\s*;', l)
        if m:
            off = get_offset(m.group(1), tls_off)
            key = value_of(m.group(3), dll, sections, uvars, size=4)
            if off is not None and key is not None:
                xor_buf(buf, off, key, 4)
            continue
        # *(ulonglong *)(base + OFF) = *(ulonglong *)(base + OFF) ^ KEY
        m = re.match(r'\s*\*\(ulonglong\s*\*\)\s*\(([^)]+)\)\s*=\s*\*\(ulonglong\s*\*\)\s*\(([^)]+)\)\s*\^\s*(.+?)\s*;', l)
        if m:
            off = get_offset(m.group(1), tls_off)
            key = value_of(m.group(3), dll, sections, uvars, size=8)
            if off is not None and key is not None:
                xor_buf(buf, off, key, 8)
            continue
        # *(byte *)(base + OFF) = *(byte *)(base + OFF) ^ 0xNN
        m = re.match(r'\s*\*\(byte\s*\*\)\s*\(([^)]+)\)\s*=\s*\*\(byte\s*\*\)\s*\(([^)]+)\)\s*\^\s*(0x[0-9a-fA-F]+|\d+)\s*;', l)
        if m:
            off = get_offset(m.group(1), tls_off)
            key = value_of(m.group(3), dll, sections, uvars, size=1)
            if off is not None and key is not None and 0 <= off < len(buf):
                buf[off] ^= key & 0xff
            continue
        # auVar5._0_4_ = *(uint *)(base + OFF) ^ uVarY;
        m = re.match(r'\s*auVar(\d+)\._(\d+)_\d+_\s*=\s*\*\(uint\s*\*\)\s*\(([^)]+)\)\s*\^\s*(.+?)\s*;', l)
        if m:
            off = get_offset(m.group(3), tls_off)
            key = value_of(m.group(4), dll, sections, uvars, size=4)
            if off is not None and key is not None:
                xor_buf(buf, off, key, 4)
            continue
        # 16-byte write auVar (no-op if components already applied)
        if re.match(r'\s*\*\(undefined\s*\(\*\)\s*\[16\]\)', l):
            continue
        # flag cleared line; stop if it sets the flag byte to 0 (final)
        if re.match(r'\s*\*\(undefined\s*\*\)\s*\([^)]+\)\s*=\s*0\s*;', l):
            # continue in case there are more operations? usually end
            pass
    end = buf.find(b'\x00')
    if end == -1:
        end = len(buf)
    return buf[:end].decode('latin1', errors='replace')


def extract_datacopy_strings(body, dll, sections):
    lines, blocks = find_data_copy_blocks(body)
    results = []
    for b in blocks:
        s = process_block(lines, b['line'], b['tls_off'], b['rdata_start'], dll, sections)
        if s:
            results.append({'offset': hex(b['tls_off']), 'string': s})
    return results


if __name__ == '__main__':
    import sys
    with open(DLL, 'rb') as f:
        dll = f.read()
    sections = en.load_sections(dll)
    with open(os.path.join(BASE, '..', 'ghidra_decompiled_1.26.3X.c'), 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    ctor = sys.argv[1] if len(sys.argv) > 1 else 'func_0x180181170'
    body = en.get_function_body(content, ctor)
    for r in extract_datacopy_strings(body, dll, sections):
        print(r['offset'], repr(r['string']))
