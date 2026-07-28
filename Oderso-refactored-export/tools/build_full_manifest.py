#!/usr/bin/env python3
"""Build a full module manifest from all Oderso constructors.

Outputs module_manifest_full.json containing, for each real constructor, the
module display name, category, tooltip, inferred class name, and resolved settings.
"""
import json
import os
import re
import sys

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DLL = os.path.join(BASE, '..', '1.26.3X.dll')
DECOMP = os.path.join(BASE, '..', 'ghidra_decompiled_1.26.3X.c')
MAP = os.path.join(BASE, 'tools', 'module_hash_map.txt')
OUT = os.path.join(BASE, 'tools', 'module_manifest_full.json')
OVERRIDES = os.path.join(BASE, 'tools', 'module_name_overrides.json')

import extract_nametags as en
import parse_module_settings as pms


CATEGORY_NAMES = {0: 'COMBAT', 1: 'VISUAL', 2: 'MOVEMENT', 3: 'PLAYER', 4: 'WORLD', 5: 'MISC', 6: 'CUSTOM'}


def to_class_name(name, ctor):
    if not name:
        suffix = ctor.split('_')[-1].replace('0x', '')
        return f'Module_{suffix}'
    # strip leading "Displays" / "Shows" / "Draws" etc.
    s = re.sub(r'^(Displays?|Shows?|Draws?|Renders?|Changes?|Adds?|Affects?|Gives?|Sends?|Toggles?|Allows?|Makes?)\s+', '', name, flags=re.I)
    s = s.strip()
    # remove punctuation, keep alnum/spaces
    s = re.sub(r"[^A-Za-z0-9\s]", " ", s)
    words = [w for w in s.split() if w and len(w) > 1]
    # common short words to drop unless result too short
    stop = {'the','of','on','in','to','for','with','and','or','is','it','you','a','an','as','by','at'}
    filtered = [w for w in words if w.lower() not in stop]
    if len(filtered) >= 1:
        words = filtered
    if not words:
        suffix = ctor.split('_')[-1].replace('0x', '')
        return f'Module_{suffix}'
    return ''.join(w[0].upper() + w[1:] for w in words)


def sanitize(name):
    name = name.strip()
    name = re.sub(r'[^A-Za-z0-9_]', '_', name)
    if not name:
        return 'ModuleX'
    if name[0].isdigit():
        name = 'M' + name
    return name


def parse_map(path):
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
                constructors.append(ctor)
    return constructors


def main():
    with open(DLL, 'rb') as f:
        dll = f.read()
    with open(DECOMP, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    sections = en.load_sections(dll)
    constructors = parse_map(MAP)
    overrides = {}
    if os.path.exists(OVERRIDES):
        with open(OVERRIDES, 'r', encoding='utf-8') as f:
            overrides = json.load(f)
    manifest = []
    for ctor in constructors:
        try:
            data = pms.extract_module(ctor, dll, sections, content)
        except Exception as e:
            manifest.append({'constructor': ctor, 'error': str(e)})
            print('ERR', ctor, e)
            continue
        # clean settings: drop empty/garbage names and deduplicate by resolved name
        seen = set()
        clean_settings = []
        for s in data.get('settings', []):
            n = s.get('name', '')
            if not n or len(n.strip()) < 2 or re.fullmatch(r'\d+', n.strip()):
                continue
            name_key = n.strip().lower()
            if name_key in seen:
                continue
            seen.add(name_key)
            clean_settings.append({'name': n, 'type': s['type']})
        data['settings'] = clean_settings
        def is_garbage(s):
            if not s or not s.strip():
                return True
            s = s.strip()
            if s == '-' or s == '...':
                return True
            if re.search(r'[{}[\]()|;<>]', s):
                return True
            # decompiler artifacts like uUM, sE, uVar prefixes
            if re.fullmatch(r'[us][A-Z]{1,3}', s):
                return True
            return False

        # choose name / tooltip
        name = data.get('name') or ''
        tooltip = data.get('tooltip') or ''
        if is_garbage(name):
            name = ''
        if is_garbage(tooltip):
            tooltip = ''
        if not tooltip and name:
            tooltip = name
        if not name and tooltip:
            name = tooltip
        data['name'] = name
        data['tooltip'] = tooltip
        if ctor in overrides:
            over = overrides[ctor]
            if isinstance(over, dict):
                if over.get('class_name'):
                    data['class_name'] = sanitize(over['class_name'])
                if over.get('name'):
                    data['name'] = over['name']
                    if not data.get('tooltip'):
                        data['tooltip'] = data['name']
                if over.get('tooltip'):
                    data['tooltip'] = over['tooltip']
                if over.get('category'):
                    data['category_name'] = over['category']
                elif over.get('category_name'):
                    data['category_name'] = over['category_name']
            elif isinstance(over, str):
                data['class_name'] = sanitize(over)
        if not data.get('category_name'):
            data['category_name'] = CATEGORY_NAMES.get(data.get('category'), 'CUSTOM')
        if not data.get('class_name'):
            data['class_name'] = sanitize(to_class_name(name, ctor))
        manifest.append(data)
        print(ctor, data['class_name'], '|', data['name'][:50] if data['name'] else None, '| settings', len(clean_settings))
    with open(OUT, 'w', encoding='utf-8') as f:
        json.dump(manifest, f, indent=2)
    print('wrote', OUT)


if __name__ == '__main__':
    main()
