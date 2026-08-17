#!/usr/bin/env python3
"""Manual batch decoder for Module constructors that call func_0x1804c9aa0."""
import re
import struct
import sys
from pathlib import Path

DECOMP = Path('/Users/tl/Desktop/MCBE/Clients/Oderso/ghidra_decompiled_1.26.3X.c')
MODULE_DIR = Path('/Users/tl/Desktop/MCBE/Clients/Oderso/oderso_1.26.3X_refactored/Oderso/Module/Modules')

def parse_int(s):
    s = s.strip()
    if s.startswith('0x'):
        return int(s, 0)
    return int(s)

def decomp_cache():
    with open(DECOMP, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    blocks = re.split(r'\n(?=// Function: )', content)
    cache = {}
    for b in blocks:
        m = re.match(r'// Function:\s*(func_0x[0-9a-fA-F]+)', b)
        if m:
            cache[m.group(1)] = b
    return cache

def get_body(fn, cache):
    return cache.get(fn, '')

def decode_qword_xor(q, key):
    return struct.pack('<Q', q ^ key).split(b'\x00')[0].decode('ascii', errors='replace')

def decode_dwords_alt(src_list, k1, k2, copy_size=None):
    """src_list is list of (size, value) in memory order."""
    if copy_size is None:
        copy_size = sum(s for s, _ in src_list)
    buf = bytearray(copy_size)
    off = 0
    for size, v in src_list:
        for i in range(min(size, copy_size - off)):
            buf[off + i] = (v >> (8 * i)) & 0xff
        off += size
    for i in range(0, copy_size - 3, 4):
        key = k1 if (i // 4) % 2 == 0 else k2
        struct.pack_into('<I', buf, i, (struct.unpack_from('<I', buf, i)[0] ^ key))
    return bytes(buf).split(b'\x00')[0].decode('ascii', errors='replace')

def find_c9aa0_modules(cache):
    out = []
    for fn in sorted(cache):
        if not fn.startswith('func_0x180'):
            continue
        body = cache[fn]
        if 'func_0x1804c9aa0' in body:
            mod = fn.replace('func_0x', 'Module_')
            out.append(mod)
    return out

def decode_module(mod, cache):
    fn = f'func_0x{mod.split("_")[1]}'
    body = get_body(fn, cache)
    if not body:
        return None
    # For now, identify the three func_0x1804c9aa0 argument sites.
    # This is a placeholder; the real implementation requires parsing the whole function.
    return None

if __name__ == '__main__':
    cache = decomp_cache()
    mods = find_c9aa0_modules(cache)
    print('found', len(mods), 'c9aa0 modules')
    for m in mods[:5]:
        print(m)
