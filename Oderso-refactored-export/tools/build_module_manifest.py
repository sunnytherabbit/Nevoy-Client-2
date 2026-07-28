#!/usr/bin/env python3
"""Build a module manifest from Oderso module constructors.

Reads module_hash_map.txt, locates each real constructor, extracts the module
description (tooltip) and decrypted setting strings, and writes a JSON manifest.
"""
import os
import re
import sys
import json

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DLL = os.path.join(BASE, '..', '1.26.3X.dll')
DECOMP = os.path.join(BASE, '..', 'ghidra_decompiled_1.26.3X.c')
MAP = os.path.join(BASE, 'tools', 'module_hash_map.txt')
OUT = os.path.join(BASE, 'tools', 'module_manifest.json')

import extract_nametags as en


def read_cstring(dll, sections, addr):
    rva = addr - en.IMAGE_BASE
    for vaddr, vsize, raw, name in sections:
        if vaddr <= rva < vaddr + vsize:
            off = raw + (rva - vaddr)
            end = dll.find(b'\x00', off)
            if end == -1:
                end = off + vsize
            return dll[off:end].decode('latin1', errors='replace')
    return None


def clean_string(s):
    """Remove non-printable/incomplete trailing bytes while keeping printable text."""
    if not s:
        return ''
    # keep only printable-ish and common punctuation; stop at first strongly non-printable char
    res = []
    for ch in s:
        o = ord(ch)
        if 32 <= o < 127 or o in (0xb7, 0x2019, 0x2026):
            res.append(ch)
        else:
            break
    return ''.join(res)


def is_sentence(s):
    """A module tooltip/description is usually a full English sentence."""
    if len(s) < 10:
        return False
    if not (0.8 <= sum(1 for c in s if 32 <= ord(c) < 127) / len(s) <= 1.0):
        return False
    if s.endswith('.') or '. ' in s or s.endswith('!') or 'every' in s.lower() or 'user' in s.lower():
        return True
    return False


def choose_description(strings):
    candidates = [clean_string(s['string']) for s in strings if s.get('string')]
    # prefer an actual sentence
    sentences = [c for c in candidates if is_sentence(c)]
    if sentences:
        return max(sentences, key=len)
    # fallback: longest mostly-printable string longer than 10 chars
    longs = [c for c in candidates if len(c) > 10]
    if longs:
        return max(longs, key=len)
    return None


def extract_description(body, dll, sections, strings):
    """Find the module tooltip from the s_ symbol or from the decrypted strings."""
    # look for a nearby s_ symbol used to fill a local TextHolder before the call
    for m in re.finditer(r's_([A-Za-z0-9_]+)_([0-9a-fA-F]+)', body):
        addr = en.IMAGE_BASE | int(m.group(2), 16)
        s = clean_string(read_cstring(dll, sections, addr))
        if s and ('. ' in s or len(s) > 10):
            return s
    return choose_description(strings)


def parse_module_map(path):
    constructors = []
    with open(path, 'r') as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'):
                continue
            parts = [p.strip() for p in line.split('->')]
            if len(parts) >= 2:
                ctor = parts[1]
                if ctor.startswith('0x'):
                    ctor = 'func_' + ctor
                elif not ctor.startswith('func_'):
                    ctor = 'func_' + ctor
                constructors.append(ctor)
    return constructors


def main():
    if not os.path.exists(DLL) or not os.path.exists(DECOMP) or not os.path.exists(MAP):
        print('missing inputs')
        sys.exit(1)
    with open(DLL, 'rb') as f:
        dll = f.read()
    with open(DECOMP, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    sections = en.load_sections(dll)
    constructors = parse_module_map(MAP)
    print('constructors:', len(constructors))
    manifest = []
    for ctor in constructors:
        try:
            body = en.get_function_body(content, ctor)
        except Exception as e:
            print('MISS', ctor, e)
            manifest.append({'constructor': ctor, 'error': str(e)})
            continue
        strings = en.extract_inline_tls_strings(body, dll, sections)
        desc = extract_description(body, dll, sections, strings)
        # keep only non-empty meaningful cleaned strings
        seen = set()
        clean = []
        for s in strings:
            txt = clean_string(s['string'])
            if txt and txt not in seen:
                seen.add(txt)
                clean.append({'offset': s['offset'], 'string': txt})
        manifest.append({
            'constructor': ctor,
            'description': desc,
            'strings': clean,
        })
        print(ctor, 'desc', repr(desc[:60] if desc else None), 'strings', len(clean))
    with open(OUT, 'w', encoding='utf-8') as f:
        json.dump(manifest, f, indent=2)
    print('wrote', OUT)


if __name__ == '__main__':
    main()
