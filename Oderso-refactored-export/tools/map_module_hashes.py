#!/usr/bin/env python3
"""Map Oderso module constructor calls to their hash IDs by parsing the decompiled source."""
import os
import re
import json

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DECOMP = os.path.join(BASE, '..', 'ghidra_decompiled_1.26.3X.c')
OUT_DIR = os.path.join(BASE, 'tools')

STD_STRING_PREFIXES = (
    's_avx', 's_base', 's_fma', 's_leap_year', 's_alnum', 's_ansi_if_required',
    's_copy_to_tzname', 's_iostream_stream_error', 's_invalid_iterator',
    's_namespace', 's_std', 's_double', 's_bias', 's_true_literal', 's_false_literal',
    's_per_channel', 's_alpha', 's_32_bit_rle_rgbe', 's_FORMAT_32_bit_rl',
    's_January', 's_Sunday', 's_Common', 's_null', 's_4_', 's_0000000000000000_',
    's_callback_0', 's_t', 's_i', 's_FuncInfo', 's_index', 's_float',
    's_win_core_datetime_l1_1_1', 's___________________',
    's_0123456789abcdefghijklmnopqrstuv', 's_device_or_resource_busy',
    's_XXXX_PNG_chunk_not_known',
)

def is_std_string(sym):
    return sym.startswith(STD_STRING_PREFIXES) or not sym.startswith('s_')

def get_function_block(content, func_name):
    """Return the body of a single function (without its header)."""
    pattern = r'// Function:\s*' + re.escape(func_name) + r'\b(.*?)(?=\n// Function:)'
    m = re.search(pattern, content, re.S)
    return m.group(1) if m else ''

def main():
    if not os.path.exists(DECOMP):
        print('Decompiled file not found:', DECOMP)
        return

    with open(DECOMP, 'r', encoding='utf-8', errors='replace') as f:
        content = f.read()

    # Split into function blocks
    blocks = re.split(r'\n// Function:\s*', content)
    block_map = {}
    for block in blocks[1:]:
        parts = block.split('\n', 1)
        name = parts[0].strip()
        body = parts[1] if len(parts) > 1 else ''
        block_map[name] = body

    # Find module registration functions
    pairs = []
    for name, body in block_map.items():
        # Pattern: constructor call on plVar10 then local_70[0] = hash
        for ctor, hashid in re.findall(r'func_(0x[0-9a-fA-F]+)\(plVar10\).*?local_70\[0\]\s*=\s*(0x[0-9a-fA-F]+)', body, re.S):
            pairs.append({'registration_func': name, 'constructor': ctor, 'hash': int(hashid, 16)})

    # Enrich with strings from each constructor
    for p in pairs:
        ctor_body = block_map.get('func_' + p['constructor'], '')
        s_syms = sorted(set(re.findall(r's_[A-Za-z0-9_]+', ctor_body)))
        s_syms = [s for s in s_syms if not is_std_string(s)]
        p['strings'] = s_syms

    out = {'count': len(pairs), 'modules': pairs}
    json_path = os.path.join(OUT_DIR, 'module_hash_map.json')
    txt_path = os.path.join(OUT_DIR, 'module_hash_map.txt')
    with open(json_path, 'w', encoding='utf-8') as f:
        json.dump(out, f, indent=2)
    with open(txt_path, 'w', encoding='utf-8') as f:
        f.write(f'# Module constructor -> hash ID mappings ({len(pairs)} modules)\n')
        for p in pairs:
            strs = ', '.join(p['strings'][:5])
            f.write(f"{p['registration_func']} -> {p['constructor']} -> 0x{p['hash']:08x} : {strs}\n")
    print('Wrote', json_path, 'and', txt_path)

if __name__ == '__main__':
    main()
