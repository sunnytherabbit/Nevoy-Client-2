#!/usr/bin/env python3
"""Reconstruct IModule base class layout from the Ghidra constructor/destructor."""
import re
import os

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DECOMP = '/Users/tl/Desktop/MCBE/Clients/Oderso/ghidra_decompiled_1.26.3X.c'

def get_function_body(content, name):
    pat = r'// Function:\s*' + re.escape(name) + r'\b(.*?)\n(?=// Function:|\Z)'
    m = re.search(pat, content, re.S)
    return m.group(1) if m else None

def parse_offset(expr):
    """param_1 + 0x10, param_1[3], (longlong)param_1 + 0x1c"""
    expr = expr.strip()
    # param_1[N]
    m = re.fullmatch(r'param_1\s*\[\s*(0x[0-9a-fA-F]+|\d+)\s*\]', expr)
    if m:
        return int(m.group(1), 0) * 8
    # param_1 + 0x...
    m = re.fullmatch(r'(?:\(?\s*(?:longlong\s*)?\)?\s*)?param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)', expr)
    if m:
        return int(m.group(1), 0)
    return None

def extract_assignments(body):
    lines = body.splitlines()
    aliases = {}  # local_var -> offset
    assignments = []

    alias_pat = re.compile(r'\b(local_\w+)\s*=\s*(.*);')
    # Write patterns
    write_pats = [
        re.compile(r'\*\s*\(\s*([^)]+)\s*\)\s*\(\s*([^)]+)\s*\)\s*=\s*([^;]+);'),
        re.compile(r'(local_\w+)\s*=\s*([^;]+);'),
        re.compile(r'param_1\[(0x[0-9a-fA-F]+|\d+)\]\s*=\s*([^;]+);'),
    ]

    for line in lines:
        line = line.strip()
        if not line or line.startswith('/*'):
            continue

        # track aliases
        m = alias_pat.search(line)
        if m:
            local = m.group(1)
            rhs = m.group(2)
            off = parse_offset(rhs)
            if off is not None:
                aliases[local] = off
            elif local in aliases and ' = ' not in line:
                # keep alias for pointer arithmetic updates
                pass

        # direct param_1[N] =
        for m in re.finditer(r'param_1\[(0x[0-9a-fA-F]+|\d+)\]\s*=\s*([^;]+);', line):
            idx = int(m.group(1), 0)
            val = m.group(2).strip()
            assignments.append((idx * 8, val, line))

        # *(type *) ((longlong) param_1 + 0x...) =
        for m in re.finditer(r'\*\s*\(\s*([^)]+)\s*\)\s*\(\s*\(?\s*(?:\(longlong\))?\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)?\s*\)\s*=\s*([^;]+);', line):
            off = int(m.group(2), 0)
            val = m.group(3).strip()
            assignments.append((off, val, line))

        # *(type *) (local_alias + 0) =
        for m in re.finditer(r'\*\s*\(\s*([^)]+)\s*\)\s*\(\s*(local_\w+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*([^;]+);', line):
            local = m.group(2)
            add = int(m.group(3), 0)
            val = m.group(4).strip()
            off = aliases.get(local)
            if off is not None:
                assignments.append((off + add, val, line))

    return assignments

def main():
    with open(DECOMP, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    ctor = get_function_body(content, 'func_0x1801c2ba0')
    dtor = get_function_body(content, 'func_0x1801c49a0')

    print('=== IModule constructor writes (func_0x1801c2ba0) ===')
    seen = {}
    for off, val, line in extract_assignments(ctor)[:500]:
        if off not in seen:
            seen[off] = (val, line)
    for off in sorted(seen):
        print(f"0x{off:03x}: {seen[off][0]:<40} | {seen[off][1][:80]}")

    print('\n=== IModule destructor vector/string accesses (func_0x1801c49a0) ===')
    seen = {}
    for off, val, line in extract_assignments(dtor):
        if off not in seen:
            seen[off] = (val, line)
    for off in sorted(seen):
        print(f"0x{off:03x}: {seen[off][0]:<40} | {seen[off][1][:80]}")

if __name__ == '__main__':
    main()
