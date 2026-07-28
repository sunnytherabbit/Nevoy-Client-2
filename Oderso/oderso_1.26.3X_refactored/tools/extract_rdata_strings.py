#!/usr/bin/env python3
"""Extract ASCII strings from the original DLL's .rdata and map DAT_ references."""
import os
import re
import struct
import sys

def parse_pe(data):
    e_lfanew = struct.unpack('<I', data[0x3c:0x40])[0]
    pe = data[e_lfanew:]
    _, num_sections = struct.unpack('<HH', pe[4:8])
    opt_header_size = struct.unpack('<H', pe[20:22])[0]
    section_start = 24 + opt_header_size
    sections = []
    for i in range(num_sections):
        sec = pe[section_start + i*40 : section_start + (i+1)*40]
        name = sec[:8].rstrip(b'\x00').decode('ascii', errors='ignore')
        vsize, vaddr, raw_size, raw_ptr = struct.unpack('<IIII', sec[8:24])
        sections.append((name, vaddr, raw_size, raw_ptr))
    return sections

def extract_strings(data, min_len=5):
    strings = []
    cur = b''
    for i, b in enumerate(data):
        if 32 <= b < 127 or b in (9, 10, 13):
            cur += bytes([b])
        else:
            if len(cur) >= min_len:
                strings.append((i - len(cur), cur.decode('ascii', errors='replace')))
            cur = b''
    if len(cur) >= min_len:
        strings.append((len(data)-len(cur), cur.decode('ascii', errors='replace')))
    return strings

def main():
    base = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    dll_path = os.path.join(base, '..', '1.26.3X.dll')
    out_path = os.path.join(base, 'tools', 'rdata_strings.txt')

    if not os.path.exists(dll_path):
        print('DLL not found:', dll_path)
        sys.exit(1)

    with open(dll_path, 'rb') as f:
        dll = f.read()

    sections = parse_pe(dll)
    for name, vaddr, raw_size, raw_ptr in sections:
        if name == '.rdata':
            rdata = dll[raw_ptr : raw_ptr + raw_size]
            break
    else:
        print('No .rdata section')
        sys.exit(1)

    strings = extract_strings(rdata, min_len=5)
    with open(out_path, 'w', encoding='utf-8') as f:
        f.write(f'# .rdata strings from {dll_path}\n')
        f.write(f'# vaddr={hex(vaddr)} size={hex(raw_size)} count={len(strings)}\n')
        for off, s in strings:
            f.write(f'{hex(vaddr + off):>14} {repr(s)}\n')
    print(f'Wrote {len(strings)} strings to {out_path}')

if __name__ == '__main__':
    main()
