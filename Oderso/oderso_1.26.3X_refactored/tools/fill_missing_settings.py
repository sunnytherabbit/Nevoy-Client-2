#!/usr/bin/env python3
"""Add missing manifest settings to source modules.

Only adds settings when the source has fewer settings than the manifest, and
only if the missing manifest name looks reasonably clean.  Also fills empty or
placeholder getModuleName / getTooltip from the manifest when a clean manifest
value is available.
"""
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
MODS = ROOT / 'Oderso' / 'Module' / 'Modules'
MANIFEST = ROOT / 'tools' / 'module_manifest_full.json'

ALLOWED = set("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 .,!?-_'/()")

def is_clean(s):
    if not s:
        return False
    if len(s) == 1 and s.isalpha():
        return True
    if len(s) < 2:
        return False
    good = sum(1 for c in s if c in ALLOWED)
    has_alnum = any(c.isalnum() for c in s)
    return has_alnum and good / len(s) >= 0.85

def to_field_name(name):
    parts = re.findall(r'[A-Za-z0-9]+', name)
    if not parts:
        return 'field'
    field = parts[0].lower()
    for p in parts[1:]:
        field += p[0].upper() + p[1:].lower()
    if field[0].isdigit():
        field = 'field' + field
    if len(field) < 2:
        field = 'field' + field
    return field

def clamp_default(setting):
    t = setting['type']
    d = setting['default']
    if t == 'float':
        if 'min' in setting and 'max' in setting:
            lo, hi = setting['min'], setting['max']
            if d < lo or d > hi or abs(d) < 1e-30:
                d = lo
        return float(d)
    if t == 'int':
        if 'min' in setting and 'max' in setting:
            lo, hi = setting['min'], setting['max']
            if d < lo or d > hi:
                d = lo
        return int(d)
    if t == 'bool':
        return bool(d)
    if t == 'enum':
        return int(d)
    return d

def header_decl(field_name, setting):
    t = setting['type']
    d = clamp_default(setting)
    if t == 'bool':
        return f'\tbool {field_name} = {"true" if d else "false"};\n'
    if t == 'int':
        return f'\tint {field_name} = {d};\n'
    if t == 'float':
        return f'\tfloat {field_name} = {d}f;\n'
    if t == 'enum':
        return f'\tSettingEnum {field_name};\n'
    return f'\t// unknown setting type for {field_name}\n'

def register_call(setting, field_name):
    name = setting['name']
    d = clamp_default(setting)
    t = setting['type']
    if t == 'bool':
        return f'\tregisterBoolSetting("{name}", &{field_name}, {"true" if d else "false"});\n'
    if t == 'int':
        lo = setting.get('min', 0)
        hi = setting.get('max', 100)
        return f'\tregisterIntSetting("{name}", &{field_name}, {d}, {lo}, {hi});\n'
    if t == 'float':
        lo = setting.get('min', 0.0)
        hi = setting.get('max', 1.0)
        return f'\tregisterFloatSetting("{name}", &{field_name}, {d}f, {lo}f, {hi}f);\n'
    if t == 'enum':
        return f'\t{field_name}.addEntry(EnumEntry("Default", {d}));\n\tregisterEnumSetting("{name}", &{field_name}, {d});\n'
    return f'\t// unknown setting: {name}\n'

def insert_into_constructor(cpp_text, cls, call):
    # match the constructor body opening brace
    pat = re.compile(rf'{re.escape(cls)}::{re.escape(cls)}\(\)[^{{]*\{{', re.S)
    m = pat.search(cpp_text)
    if not m:
        return None
    return cpp_text[:m.end()] + '\n' + call + cpp_text[m.end():]

def main():
    manifest = {m['class_name']: m for m in json.load(open(MANIFEST))}
    for p in sorted(MODS.glob('*.cpp')):
        cls = p.stem
        if cls not in manifest:
            continue
        m = manifest[cls]
        h_path = p.with_suffix('.h')
        cpp_path = p
        h_text = h_path.read_text(errors='ignore')
        cpp_text = cpp_path.read_text(errors='ignore')

        # skip modules that already direct-call the binary (layout-sensitive)
        if 'getModule()' in cpp_text or 'ptrBase' in cpp_text:
            continue

        current = re.findall(r'register\w+Setting\s*\(\s*"([^"]*)"', cpp_text)
        manifest_settings = [s for s in m['settings'] if is_clean(s['name'])]
        missing = [s for s in manifest_settings if s['name'] not in current]

        if len(current) >= len(manifest_settings) or not missing:
            continue

        existing_fields = set(re.findall(r'\b([A-Za-z_]\w*)\s*[=;]', h_text))
        added = []
        for s in missing:
            field = to_field_name(s['name'])
            if field in existing_fields:
                base = field
                i = 2
                while f'{base}{i}' in existing_fields:
                    i += 1
                field = f'{base}{i}'
            existing_fields.add(field)

            decl = header_decl(field, s)
            # insert field before padding if present, else before closing };
            if 'char _binaryPadding' in h_text:
                h_text = h_text.replace('char _binaryPadding', decl + 'char _binaryPadding', 1)
            else:
                h_text = re.sub(r'^(\s*};\s*)$', decl + r'\1', h_text, flags=re.M)

            new_cpp = insert_into_constructor(cpp_text, cls, register_call(s, field))
            if new_cpp:
                cpp_text = new_cpp
                added.append(s['name'])
            else:
                print(f'WARNING: could not find constructor in {cls}')

        if added:
            h_path.write_text(h_text)
            cpp_path.write_text(cpp_text)
            print(f'Updated {cls}: added {len(added)} settings: {added}')

if __name__ == '__main__':
    main()
