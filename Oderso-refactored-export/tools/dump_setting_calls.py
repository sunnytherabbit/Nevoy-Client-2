#!/usr/bin/env python3
import re, os
base = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
path = os.path.join(base, '..', 'ghidra_decompiled_1.26.3X.c')
with open(path, 'r', encoding='utf-8', errors='ignore') as f:
    text = f.read()
m = re.search(r'// Function:\s*func_0x1803d65c0\b(.*?)\n(?=// Function:|\Z)', text, re.S)
body = m.group(1)
lines = body.split('\n')
for i, line in enumerate(lines):
    if re.search(r'func_0x1801(ccd70|cd2e0|d3a80)\s*\(', line):
        print('=== line', i + 1, '===')
        print(line)
        start = max(0, i - 25)
        for j in range(start, i):
            print(j + 1, lines[j])
        print()
