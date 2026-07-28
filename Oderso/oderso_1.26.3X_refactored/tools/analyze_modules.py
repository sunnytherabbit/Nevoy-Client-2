#!/usr/bin/env python3
"""Generic analyzer for all Oderso module constructors.

Extracts from func_0x1803b0680 (ModuleManager::initModules) the list of module
constructors, then for each constructor parses the decrypted setting strings,
module description and member initializers into a JSON manifest.
"""
import os
import re
import struct
import json
import sys

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DLL = os.path.join(BASE, '..', '1.26.3X.dll')
DECOMP = os.path.join(BASE, '..', 'ghidra_decompiled_1.26.3X.c')
OUT = os.path.join(BASE, 'tools', 'module_manifest.json')

import extract_nametags as en

IMAGE_BASE = en.IMAGE_BASE


class SectionCache:
    def __init__(self, dll, sections):
        self.dll = dll
        self.sections = sections
        self._strings = {}

    def read_bytes(self, addr, n):
        return en.read_bytes(self.dll, self.sections, addr, n)

    def read_cstring(self, addr):
        """Read a null terminated C string from any section."""
        rva = addr - IMAGE_BASE
        for vaddr, vsize, raw, name in self.sections:
            if vaddr <= rva < vaddr + vsize:
                off = raw + (rva - vaddr)
                end = self.dll.find(b'\x00', off)
                if end == -1:
                    end = off + vsize
                return self.dll[off:end]
        raise ValueError(f'cannot map address 0x{addr:x}')


def get_function_range(content, name):
    pat = r'// Function:\s*' + re.escape(name) + r'\b'
    m = re.search(pat, content)
    if not m:
        raise ValueError(f'{name} not found')
    start = m.start()
    # find next // Function:
    m2 = re.search(r'// Function:', content[start + 1:])
    if m2:
        end = start + 1 + m2.start()
    else:
        end = len(content)
    return content[start:end]


def get_constructor_order(content):
    """Parse module_hash_map.txt for actual constructor functions."""
    mapp = os.path.join(BASE, 'tools', 'module_hash_map.txt')
    out = []
    if not os.path.exists(mapp):
        raise FileNotFoundError(mapp)
    with open(mapp, 'r') as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'):
                continue
            parts = [p.strip() for p in line.split('->')]
            if len(parts) >= 2:
                ctor = parts[1]
                if not ctor.startswith('0x'):
                    ctor = 'func_' + ctor
                else:
                    ctor = 'func_' + ctor
                if ctor not in out:
                    out.append(ctor)
    return out


def parse_all_function_markers(content):
    markers = {}
    for m in re.finditer(r'// Function:\s*(func_0x[0-9a-fA-F]+)', content):
        markers[m.group(1)] = m.start()
    return markers


def get_function_body_by_markers(content, markers, name, next_markers=None):
    start = markers.get(name)
    if start is None:
        raise ValueError(f'{name} not found')
    # find next marker after start
    end = len(content)
    for n, pos in markers.items():
        if pos > start and pos < end:
            end = pos
    return content[start:end]


def find_setting_name_src(lines, call_idx, ptrs=None):
    """Given a registration function call at line index call_idx, trace the
    source variable used for the setting name string. Returns the TLS/data
    offset if determinable, else None."""
    # find nearest previous func_0x1806aa960(dest, src, sVar14)
    src = None
    for j in range(call_idx - 1, max(0, call_idx - 50), -1):
        m = re.search(r'func_0x1806aa960\s*\(\s*(\w+)\s*,\s*(\w+)\s*,\s*sVar14\s*\)', lines[j])
        if m:
            src = m.group(2)
            break
    off = None
    if src:
        # src assignment: src = (TYPE *)(lVar15 + OFF);
        for j in range(call_idx - 1, max(0, call_idx - 120), -1):
            m = re.search(r'\b' + re.escape(src) + r'\s*=\s*\([^)]*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*;', lines[j])
            if m:
                off = m.group(1)
                break
    return src, off


def extract_description(body, sections):
    """Look for func_0x1801c2ba0 call and find the s_ symbol/string used."""
    lines = body.split('\n')
    for i, line in enumerate(lines):
        if 'func_0x1801c2ba0' in line:
            # description string is built from s_ symbol; find first s_ symbol before this line
            for j in range(i - 1, max(0, i - 60), -1):
                m = re.search(r'\bs_([0-9a-zA-Z_]+)_180([0-9a-fA-F]+)\b', lines[j])
                if m:
                    addr = IMAGE_BASE | int(m.group(2), 16)
                    try:
                        s = en.read_bytes(sections.dll, sections.sections, addr, 128)
                        s = s.split(b'\x00')[0]
                        return s.decode('latin1', errors='replace')
                    except Exception:
                        pass
    return None


def extract_settings(body):
    """Extract setting registration calls and their source offsets."""
    lines = body.split('\n')
    regs = ['func_0x1801ccd70', 'func_0x1801cd2e0', 'func_0x1801d3a80', 'func_0x1801ccff0']
    settings = []
    for i, line in enumerate(lines):
        for reg in regs:
            if reg in line:
                src, off = find_setting_name_src(lines, i)
                settings.append({'reg': reg, 'src_var': src, 'offset': off})
                break
    return settings


def extract_member_initializers(body, sections):
    """Find assignments of the form *(TYPE*)(this + OFF) = VALUE; for member fields."""
    init = {}
    for m in re.finditer(
        r'\*\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*(\w+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*(.+?)\s*;',
        body):
        typ, var, off, val = m.group(1), m.group(2), int(m.group(3), 0), m.group(4).strip()
        # only plain integer/float/double constants or simple .rdata symbol refs
        if re.fullmatch(r'-?0x[0-9a-fA-F]+|-?\d+|_DAT_180[0-9a-fA-F]+|_UNK_180[0-9a-fA-F]+', val):
            sz = en.size_from_type(typ)
            try:
                v = en.expr_value(val, sections.dll, sections.sections, sz)
            except Exception:
                continue
            init[off] = {'type': typ, 'size': sz, 'value': v, 'raw': val}
    return init


def analyze_constructor(name, content, sections):
    body = get_function_range(content, name)
    strings = en.extract_inline_tls_strings(body, sections.dll, sections.sections)
    desc = extract_description(body, sections)
    settings = extract_settings(body)
    inits = extract_member_initializers(body, sections)
    return {
        'constructor': name,
        'description': desc,
        'strings': strings,
        'settings': settings,
        'initializers': inits,
    }


def main():
    if not os.path.exists(DLL) or not os.path.exists(DECOMP):
        print('missing DLL or decomp')
        sys.exit(1)
    with open(DLL, 'rb') as f:
        dll = f.read()
    with open(DECOMP, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    sections = SectionCache(dll, en.load_sections(dll))
    constructors = get_constructor_order(content)
    print('found', len(constructors), 'constructors')
    manifest = []
    for c in constructors:
        try:
            info = analyze_constructor(c, content, sections)
            manifest.append(info)
            print('OK', c, 'desc', info['description'][:60] if info['description'] else None, 'strings', len(info['strings']), 'settings', len(info['settings']))
        except Exception as e:
            print('ERR', c, e)
    with open(OUT, 'w', encoding='utf-8') as f:
        json.dump(manifest, f, indent=2)
    print('wrote', OUT)


if __name__ == '__main__':
    main()
