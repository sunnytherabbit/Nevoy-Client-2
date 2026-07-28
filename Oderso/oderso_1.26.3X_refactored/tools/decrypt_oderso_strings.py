#!/usr/bin/env python3
"""Decrypt Oderso obfuscated strings from a Ghidra decompiled function.

The script reads the DLL's .rdata section and the decompiled C file, then
extracts and decrypts the common TLS/XOR and .rdata string blobs used by
Oderso (func_0x180441640 / 0x180441750 / 0x180441780 helpers).
"""
import os
import re
import struct
import sys

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DECOMP = os.path.join(BASE, '..', 'ghidra_decompiled_1.26.3X.c')
DLL = os.path.join(BASE, '..', '1.26.3X.dll')

# Known .rdata section for 1.26.3X.dll
RDATA_VADDR = 0x1806ae000
RDATA_ROFF = 0x6ad400
RDATA_SIZE = 0x18ba00


def load_dll(path):
    with open(path, 'rb') as f:
        return f.read()


def rva_to_fileoff(rva, dll):
    if RDATA_VADDR <= rva < RDATA_VADDR + RDATA_SIZE:
        return RDATA_ROFF + (rva - RDATA_VADDR)
    # Fall back to PE section parsing
    dos = struct.unpack('<H', dll[0x3c:0x3e])[0]
    if dll[dos:dos + 4] != b'PE\x00\x00':
        raise ValueError('not a PE')
    num = struct.unpack('<H', dll[dos + 6:dos + 8])[0]
    opt = struct.unpack('<H', dll[dos + 20:dos + 22])[0]
    sec = dos + 24 + opt
    for i in range(num):
        e = sec + i * 40
        vaddr = struct.unpack('<I', dll[e + 12:e + 16])[0]
        vsize = struct.unpack('<I', dll[e + 8:e + 12])[0]
        raw = struct.unpack('<I', dll[e + 20:e + 24])[0]
        if vaddr <= (rva & 0xffffffff) < vaddr + vsize:
            return raw + ((rva & 0xffffffff) - vaddr)
    raise ValueError(f'cannot map RVA 0x{rva:x}')


def read_bytes(dll, addr, n):
    off = rva_to_fileoff(addr, dll)
    return dll[off:off + n]


def read_qword(dll, addr):
    return struct.unpack('<Q', read_bytes(dll, addr, 8))[0]


def read_dword(dll, addr):
    return struct.unpack('<I', read_bytes(dll, addr, 4))[0]


def read_word(dll, addr):
    return struct.unpack('<H', read_bytes(dll, addr, 2))[0]


# ----- Decryptor helpers for the three known .rdata helpers -----

def decrypt_441640(buf, keys):
    """func_0x180441640: 34-byte .rdata blob."""
    d = bytearray(buf)
    for i in range(8):
        v = int.from_bytes(d[i * 4:i * 4 + 4], 'little') ^ keys[i]
        d[i * 4:i * 4 + 4] = v.to_bytes(4, 'little')
    d[32] ^= 0x35
    d[33] ^= 0xb1
    return bytes(d).split(b'\x00')[0]


def decrypt_441750(buf, keys):
    """func_0x180441750: 22-byte .rdata blob."""
    d = bytearray(buf[:22])
    for i in range(4):
        v = int.from_bytes(d[i * 4:i * 4 + 4], 'little') ^ keys[i]
        d[i * 4:i * 4 + 4] = v.to_bytes(4, 'little')
    v = int.from_bytes(d[16:20], 'little') ^ 0x9b4dbd9f
    d[16:20] = v.to_bytes(4, 'little')
    d[20] ^= 0xcd
    d[21] ^= 0xb9
    return bytes(d).split(b'\x00')[0]


def decrypt_441780(buf, keys):
    """func_0x180441780: 28-byte .rdata blob."""
    d = bytearray(buf[:28])
    for i in range(4):
        v = int.from_bytes(d[i * 4:i * 4 + 4], 'little') ^ keys[i]
        d[i * 4:i * 4 + 4] = v.to_bytes(4, 'little')
    v = int.from_bytes(d[16:24], 'little') ^ 0xc169d3a1093b4331
    d[16:24] = v.to_bytes(8, 'little')
    v = int.from_bytes(d[24:28], 'little') ^ 0x93b4331
    d[24:28] = v.to_bytes(4, 'little')
    return bytes(d).split(b'\x00')[0]


# ----- PE / source extraction -----

def get_function_body(content, func_name):
    pat = r'// Function:\s*' + re.escape(func_name) + r'\b(.*?)\n(?=// Function:|\Z)'
    m = re.search(pat, content, re.S)
    if not m:
        raise ValueError(f'function {func_name} not found')
    return m.group(1)


def extract_rdata_strings(body, dll):
    """Find .rdata string blobs and decrypt them."""
    results = []
    # func_0x1800f15f0 + func_0x180441640 (34 bytes)
    # func_0x18007cab0 + func_0x180441750 (22 bytes)
    # func_0x18008fba0 + func_0x180441780 (28 bytes)
    for m in re.finditer(r'func_0x(1800f15f0|18007cab0|18008fba0)\([^)]*,(local_[a-z0-9]+)\).*?func_0x(180441640|180441750|180441780)\(', body, re.S):
        copy_func, local, dec_func = m.group(1), m.group(2), m.group(3)
        block = body[m.start():m.end()+200]
        # Pull all DAT_/UNK_ assignments and hex literals touching the source local
        dat = dict(re.findall(rf'_DAT_180([0-9a-fA-F]+)\s*=\s*(?:\(.*?\))?\s*(0x[0-9a-fA-F]+|\w+);', block))
        # This is a placeholder; full parsing is function-specific.
        results.append({'type': dec_func, 'local': local, 'block': block[:500]})
    return results


if __name__ == '__main__':
    if not os.path.exists(DLL) or not os.path.exists(DECOMP):
        print('missing DLL or decomp')
        sys.exit(1)
    dll = load_dll(DLL)
    with open(DECOMP, 'r', encoding='utf-8', errors='replace') as f:
        content = f.read()
    func = sys.argv[1] if len(sys.argv) > 1 else 'func_0x1803d65c0'
    body = get_function_body(content, func)
    print(f'Extracted {func} ({len(body)} chars)')
    for r in extract_rdata_strings(body, dll):
        print(r['type'], r['local'])
        print(r['block'][:300])
        print('---')
