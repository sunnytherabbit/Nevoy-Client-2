#!/usr/bin/env python3
"""Infer a C++ class name for each Oderso module from its manifest description.

Reads module_manifest.json and writes module_manifest_named.json with an added
'class_name' field.  The class name is derived from the description by
title-casing and removing punctuation.  If no description is present a fallback
based on the constructor address is used.  module_name_overrides.json can be
used to supply manual names for constructors whose names are known.
"""
import json
import os
import re
import string

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MANIFEST = os.path.join(BASE, 'tools', 'module_manifest.json')
OVERRIDES = os.path.join(BASE, 'tools', 'module_name_overrides.json')
OUT = os.path.join(BASE, 'tools', 'module_manifest_named.json')


BANNED_WORDS = {'a', 'an', 'and', 'the', 'of', 'on', 'in', 'to', 'for', 'with', 'is', 'it', 'you'}


def to_class_name(desc, ctor):
    if not desc:
        # fallback: Module_3d65c0 from func_0x1803d65c0
        suffix = ctor.split('_')[-1].replace('0x', '')
        return f'Module_{suffix}'
    # remove punctuation except spaces, keep letters/digits
    s = re.sub(r"[^A-Za-z0-9\s]", " ", desc)
    words = [w for w in s.split() if w]
    # title case, filter short banned words unless single word
    if len(words) > 1:
        words = [w for w in words if w.lower() not in BANNED_WORDS or len(w) > 2]
    if not words:
        suffix = ctor.split('_')[-1].replace('0x', '')
        return f'Module_{suffix}'
    return ''.join(w[0].upper() + w[1:] for w in words)


def sanitize(name):
    """Ensure name is a valid C++ identifier."""
    name = name.strip()
    if not name:
        return 'ModuleX'
    name = re.sub(r'[^A-Za-z0-9_]', '_', name)
    if name[0].isdigit():
        name = 'M' + name
    return name


def main():
    with open(MANIFEST, 'r', encoding='utf-8') as f:
        manifest = json.load(f)
    overrides = {}
    if os.path.exists(OVERRIDES):
        with open(OVERRIDES, 'r', encoding='utf-8') as f:
            overrides = json.load(f)
    for m in manifest:
        ctor = m.get('constructor', '')
        desc = m.get('description') or ''
        if ctor in overrides:
            m['class_name'] = sanitize(overrides[ctor])
        else:
            m['class_name'] = sanitize(to_class_name(desc, ctor))
    with open(OUT, 'w', encoding='utf-8') as f:
        json.dump(manifest, f, indent=2)
    print('wrote', OUT, 'with', len(manifest), 'modules')


if __name__ == '__main__':
    main()
