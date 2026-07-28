#!/usr/bin/env python3
"""Map s_ / DAT_ symbol references back to the decompiled functions that use them."""
import os
import re
from collections import defaultdict

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DEcomp = os.path.join(BASE, '..', 'ghidra_decompiled_1.26.3X.c')
OUT = os.path.join(BASE, 'tools', 'symbol_map.txt')

if not os.path.exists(DEcomp):
    print('Decompiled file not found:', DEcomp)
    raise SystemExit(1)

with open(DEcomp, 'r', encoding='utf-8', errors='replace') as f:
    content = f.read()

blocks = re.split(r'\n// Function:\s*', content)
func_symbols = defaultdict(list)
for block in blocks[1:]:
    lines = block.split('\n', 1)
    func_name = lines[0].strip()
    body = lines[1] if len(lines) > 1 else ''
    symbols = sorted(set(re.findall(r's_[A-Za-z0-9_]+', body)))
    if symbols:
        func_symbols[func_name] = symbols

with open(OUT, 'w', encoding='utf-8') as f:
    f.write(f'# Functions with s_ string symbols ({len(func_symbols)} functions)\n')
    for func in sorted(func_symbols):
        f.write(f'\n{func}\n')
        for sym in func_symbols[func]:
            f.write(f'  {sym}\n')

print(f'Wrote {len(func_symbols)} functions to {OUT}')

# Print a quick summary of interesting clusters
keywords = ['login_streak', 'Displays', 'ODS', 'AI', 'daily', 'Minecraft', 'command', 'module',
            'cheat', 'hack', 'odero', 'nevoy', 'version', 'client', 'version', 'notification']
print('\nInteresting functions:')
for func in sorted(func_symbols):
    combined = ' '.join(func_symbols[func]).lower()
    if any(k in combined for k in keywords):
        print(f'\n{func}:')
        for sym in func_symbols[func][:20]:
            print(f'  {sym}')
