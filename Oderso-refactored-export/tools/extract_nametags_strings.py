#!/usr/bin/env python3
"""Extract and decrypt all obfuscated strings used by func_0x1803d65c0 (NameTags)."""
import os, re, struct, sys

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DECOMP = os.path.join(BASE, '..', 'ghidra_decompiled_1.26.3X.c')
DLL = os.path.join(BASE, '..', '1.26.3X.dll')

# Known .rdata range in 1.26.3X.dll
RDATA_VADDR = 0x1806ae000
RDATA_ROFF = 0x6ad400
RDATA_SIZE = 0x18ba00


def load_dll(path):
    with open(path, 'rb') as f:
        return f.read()


def rva_to_fileoff(rva, dll):
    if RDATA_VADDR <= rva < RDATA_VADDR + RDATA_SIZE:
        return RDATA_ROFF + (rva - RDATA_VADDR)
    # fallback PE section parse
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
    return dll[rva_to_fileoff(addr, dll):rva_to_fileoff(addr, dll) + n]


def read_qword(dll, addr):
    return struct.unpack('<Q', read_bytes(dll, addr, 8))[0]


def read_dword(dll, addr):
    return struct.unpack('<I', read_bytes(dll, addr, 4))[0]


def read_word(dll, addr):
    return struct.unpack('<H', read_bytes(dll, addr, 2))[0]


def read_float(dll, addr):
    return struct.unpack('<f', read_bytes(dll, addr, 4))[0]


def get_function_body(content, name):
    m = re.search(r'// Function:\s*' + re.escape(name) + r'\b(.*?)\n(?=// Function:|\Z)', content, re.S)
    return m.group(1) if m else ''


def xor_qword_bytes(q, key):
    return (q ^ key).to_bytes(8, 'little')


def xor_dword_bytes(d, key):
    return (d ^ key).to_bytes(4, 'little')


def xor_word_bytes(w, key):
    return (w ^ key).to_bytes(2, 'little')


def decrypt_441640(dll, dat_addr, unk_addrs, b8):
    """.rdata blob for func_0x180441640 (34 bytes)."""
    buf = bytearray(34)
    buf[0:8] = read_bytes(dll, dat_addr, 8)
    buf[8:16] = read_bytes(dll, unk_addrs[0], 8)
    buf[16:18] = read_bytes(dll, unk_addrs[1], 2)
    buf[18:20] = read_bytes(dll, unk_addrs[2], 2)
    buf[20:22] = read_bytes(dll, unk_addrs[3], 2)
    buf[22:24] = read_bytes(dll, unk_addrs[4], 2)
    buf[24:32] = read_bytes(dll, unk_addrs[5], 8)
    buf[32] = b8 & 0xff
    buf[33] = (b8 >> 8) & 0xff
    # keys at 0x1806b2cb0 etc
    keys = [read_dword(dll, 0x1806b2cb0 + i * 4) for i in range(8)]
    for i in range(8):
        v = int.from_bytes(buf[i * 4:i * 4 + 4], 'little') ^ keys[i]
        buf[i * 4:i * 4 + 4] = v.to_bytes(4, 'little')
    buf[32] ^= 0x35
    buf[33] ^= 0xb1
    return bytes(buf).split(b'\x00')[0]


def decrypt_441750(dll, dat_addr, unks, words):
    """.rdata blob for func_0x180441750 (22 bytes)."""
    buf = bytearray(22)
    buf[0:8] = read_bytes(dll, dat_addr, 8)
    buf[8:12] = read_bytes(dll, unks[0], 4)
    buf[12:14] = read_bytes(dll, unks[1], 2)
    # word[0] -> offset 14?
    buf[14:16] = struct.pack('<H', words[0])
    buf[16:20] = struct.pack('<I', words[1])
    buf[20:22] = struct.pack('<H', words[2])
    keys = [read_dword(dll, 0x1806b2de0 + i * 4) for i in range(4)]
    for i in range(4):
        v = int.from_bytes(buf[i * 4:i * 4 + 4], 'little') ^ keys[i]
        buf[i * 4:i * 4 + 4] = v.to_bytes(4, 'little')
    v = int.from_bytes(buf[16:20], 'little') ^ 0x9b4dbd9f
    buf[16:20] = v.to_bytes(4, 'little')
    buf[20] ^= 0xcd
    buf[21] ^= 0xb9
    return bytes(buf).split(b'\x00')[0]


def decrypt_441780(dll, dat_addr, unks):
    """.rdata blob for func_0x180441780 (28 bytes)."""
    # placeholder
    return b''


def extract_block(lines, start, max_scan=60):
    """Find a brace-delimited block starting at or after start."""
    for s in range(start, min(len(lines), start + max_scan)):
        if lines[s].rstrip().endswith('{'):
            brace = 0
            for e in range(s, min(len(lines), s + max_scan)):
                brace += lines[e].count('{') - lines[e].count('}')
                if brace == 0 and '}' in lines[e]:
                    return '\n'.join(lines[s:e + 1])
    return ''


def parse_tls_inline(body, dll):
    """Find all func_0x180673140 inline TLS string blocks and decrypt them."""
    results = []
    lines = body.split('\n')
    for i, line in enumerate(lines):
        if 'func_0x180673140(' not in line:
            continue
        # init window
        init_win = '\n'.join(lines[max(0, i - 15):i + 1])
        # collect encrypted qword/dword/word/byte assignments
        data = {}
        pat = r'\*\((undefined8|undefined4|undefined2|byte|undefined)\s*\*\)\s*\([^)]*\+\s*(0x[0-9a-fA-F]+)\s*\)\s*=\s*(0x[0-9a-fA-F]+);'
        for m in re.finditer(pat, init_win):
            t, off, val = m.group(1), int(m.group(2), 16), int(m.group(3), 16)
            data[off] = (t, val)
        if not data:
            print('DEBUG: no init data at line', i)
            print(init_win[:400])
            continue
        # decryption block after this line
        dec_block = extract_block(lines, i + 1)
        if not dec_block:
            continue
        # find the primary string base offset (lowest)
        base = min(data)
        plain = bytearray(0x20)
        # Simpler: just collect all direct XOR operations against TLS offsets
        for m in re.finditer(r'\*\([^)]+\+\s*(0x[0-9a-fA-F]+)\)\s*=\s*\*\([^)]+\+\s*(0x[0-9a-fA-F]+)\)\s*\^\s*(0x[0-9a-fA-F]+);', dec_block):
            off = int(m.group(1), 16) - base
            key = int(m.group(3), 16)
            v = data.get(int(m.group(1), 16))
            if v:
                t, val = v
                size = {'undefined8': 8, 'undefined4': 4, 'undefined2': 2, 'undefined': 1}[t]
                vb = (val ^ key).to_bytes(size, 'little')
                for k in range(size):
                    if off + k < len(plain):
                        plain[off + k] = vb[k]
        # collect per-byte XOR that don't match the above
        for m in re.finditer(r'\*(byte|undefined)\s*\*\)\s*\([^)]+\+\s*(0x[0-9a-fA-F]+)\)\s*=\s*\*\((?:byte|undefined)\s*\*\)\s*\([^)]+\+\s*(0x[0-9a-fA-F]+)\)\s*\^\s*(0x[0-9a-fA-F]+);', dec_block):
            pass
        results.append((base, bytes(plain).split(b'\x00')[0], dec_block[:200]))
    return results


if __name__ == '__main__':
    dll = load_dll(DLL)
    with open(DECOMP, 'r', encoding='utf-8', errors='replace') as f:
        content = f.read()
    body = get_function_body(content, 'func_0x1803d65c0')
    print('=== Inline TLS string blocks ===')
    for base, plain, block in parse_tls_inline(body, dll):
        print(f'0x{base:x}: {plain!r}')
