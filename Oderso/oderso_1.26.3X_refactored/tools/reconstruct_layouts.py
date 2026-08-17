#!/usr/bin/env python3
"""Reconstruct binary class layouts and generate C++ from the Oderso decompilation."""
import os
import re
import json

DECOMP = '/Users/tl/Desktop/MCBE/Clients/Oderso/ghidra_decompiled_1.26.3X.c'

def get_function_body(content, name):
    pat = r'// Function:\s*' + re.escape(name) + r'\b(.*?)\n(?=// Function:|\Z)'
    m = re.search(pat, content, re.S)
    return m.group(1) if m else None

def extract_stores(body, base_reg='param_1'):
    """Extract direct stores to base_reg+offset or base_reg[n] from function body."""
    lines = body.splitlines()
    stores = []
    # Patterns:
    #  param_1[N] = ...;
    #  *(TYPE *) (param_1 + 0x...) = ...;
    #  *(TYPE *) ((longlong)param_1 + 0x...) = ...;
    #  *(TYPE *) (local_alias + 0x...) = ...;  (with alias to base_reg+off)
    alias = {}
    for line in lines:
        line = line.strip()
        if not line or line.startswith('/*'):
            continue
        # alias assignment: local_X = param_1 + N;
        m = re.match(r'(local_\w+)\s*=\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*;', line)
        if m:
            alias[m.group(1)] = int(m.group(2), 0)
        m = re.match(r'(local_\w+)\s*=\s*param_1\s*\+\s*0x([0-9a-fA-F]+)\s*;', line)
        if m:
            alias[m.group(1)] = int(m.group(2), 16)

        # direct param_1[N] =
        for m in re.finditer(r'param_1\[(0x[0-9a-fA-F]+|\d+)\]\s*=\s*([^;]+);', line):
            idx = int(m.group(1), 0)
            stores.append((idx * 8, m.group(2).strip(), line))

        # *(TYPE *) (param_1 + 0x...) =
        for m in re.finditer(r'\*\s*\(\s*[^)]+\s*\)\s*\(\s*\(?\s*(?:\(longlong\))?\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)?\s*\)\s*=\s*([^;]+);', line):
            off = int(m.group(1), 0)
            stores.append((off, m.group(2).strip(), line))

        # *(TYPE *) (local_alias + 0x...) =
        for m in re.finditer(r'\*\s*\(\s*[^)]+\s*\)\s*\(\s*(local_\w+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*([^;]+);', line):
            l = m.group(1)
            add = int(m.group(2), 0)
            val = m.group(3).strip()
            if l in alias:
                stores.append((alias[l] + add, val, line))
    return stores

def layout_from_stores(stores, base=0, end=0x200):
    # Group stores by offset, take first
    layout = {}
    for off, val, line in stores:
        if base <= off < end:
            layout.setdefault(off, (val, line))
    return layout

def main():
    with open(DECOMP, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    # IModule
    ctor = get_function_body(content, 'func_0x1801c2ba0')
    dtor = get_function_body(content, 'func_0x1801c49a0')
    stores = extract_stores(ctor) + extract_stores(dtor)
    imodule_layout = layout_from_stores(stores, 0, 0x100)

    print('=== IModule layout ===')
    for off in sorted(imodule_layout):
        print(f"0x{off:03x}: {imodule_layout[off][0]}")

    # SettingValue
    sv_dtor = get_function_body(content, 'func_0x1801b3250')
    print('\n=== SettingValue destructor ===')
    print('\n'.join(sv_dtor.splitlines()[:40]))

    # SettingEntry
    se_dtor = get_function_body(content, 'func_0x1801d4ce0')
    print('\n=== SettingEntry destructor ===')
    print('\n'.join(se_dtor.splitlines()[:60]))

    # registerInt
    reg_int = get_function_body(content, 'func_0x1801ccff0')
    print('\n=== registerInt first 80 lines ===')
    print('\n'.join(reg_int.splitlines()[:80]))

if __name__ == '__main__':
    main()
