#!/usr/bin/env python3
"""Extract Oderso module settings (names, types, defaults) from a constructor.

Given a constructor function, parses the decompiled C and the decrypted setting
strings produced by extract_nametags.py, then emits a structured list of setting
registrations that can be turned into C++ source.
"""
import os
import re
import struct
import json
import sys

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DLL = os.path.join(BASE, '..', '1.26.3X.dll')
DECOMP = os.path.join(BASE, '..', 'ghidra_decompiled_1.26.3X.c')

import extract_nametags as en


def parse_function_calls(body, func):
    """Return list of call argument strings for func_0x... calls matching func."""
    # join continuation lines to get single-line calls
    lines = en._join_continued(body)
    calls = []
    # find each call site: func_0xHHHHHHHHH( <args> );
    pat = re.escape(func) + r'\s*\((.*?)\)\s*;'
    for l in lines:
        for m in re.finditer(pat, l):
            calls.append(m.group(1))
    return calls


def get_strings_map(body, dll, sections):
    """Return mapping from local variable names to decrypted strings.

    extract_nametags.extract_inline_tls_strings returns offsets.  We also need
    to associate each setting name local variable with the string it points to.
    This is a heuristic: the string buffers are built in the lines immediately
    before the registration call.
    """
    strings = en.extract_inline_tls_strings(body, dll, sections)
    # Build a simple offset->string map
    off_map = {int(s['offset'], 0): s['string'] for s in strings if s.get('string')}
    return off_map


def try_eval_const(expr):
    """Try to evaluate a simple constant expression."""
    expr = expr.strip()
    # float hex like 0x3f800000 or 0x41200000
    if re.fullmatch(r'0x[0-9a-fA-F]+', expr):
        v = int(expr, 0)
        # if it looks like a float IEEE 754, try interpret
        return {'hex': hex(v), 'int': v & 0xffffffff, 'float': struct.unpack('<f', struct.pack('<I', v))[0]}
    if re.fullmatch(r'-?\d+', expr):
        return {'int': int(expr)}
    return None


def infer_setting_type(reg_func, args):
    """Map an Oderso registration function to a Horion setting type."""
    # func_0x1801ccd70 -> bool (param count often 7, flags)
    # func_0x1801cd2e0 -> float or int (param count 9, default/min/max)
    # func_0x1801d3a80 -> enum (param count 7, default selected)
    # func_0x1801ccff0 -> string/text
    parts = [a.strip() for a in args.split(',')]
    if reg_func == 'func_0x1801ccd70':
        return 'bool'
    if reg_func == 'func_0x1801d3a80':
        return 'enum'
    if reg_func == 'func_0x1801ccff0':
        return 'text'
    if reg_func == 'func_0x1801cd2e0':
        if len(parts) >= 7:
            # min and max values: if they are integer-like hex (e.g. 0x1, 0x14, 0x7)
            min_v = try_eval_const(parts[-3]) if len(parts) >= 3 else None
            max_v = try_eval_const(parts[-2]) if len(parts) >= 2 else None
            if min_v and max_v:
                # if both min and max interpreted as float are close to ints and small, call int
                fmin = min_v.get('float')
                fmax = max_v.get('float')
                if fmin is not None and fmax is not None:
                    if abs(fmin - round(fmin)) < 1e-6 and abs(fmax - round(fmax)) < 1e-6 and fmax < 100:
                        return 'int'
            return 'float'
    return 'unknown'


def extract_settings(ctor, dll, sections, content):
    body = en.get_function_body(content, ctor)
    off_map = get_strings_map(body, dll, sections)
    regs = [
        ('func_0x1801ccd70', 'bool'),
        ('func_0x1801cd2e0', 'float'),
        ('func_0x1801d3a80', 'enum'),
        ('func_0x1801ccff0', 'text'),
    ]
    results = []
    # collect registration calls and their offsets in source
    calls = []
    for fn, _ in regs:
        for raw in parse_function_calls(body, fn):
            calls.append((fn, raw))
    # For each call, try to identify the setting name string from the local var
    # immediately preceding it.  We look for the most recent local_NN / puVar*
    # assignment to a known string offset before this call.
    # This is approximate and works best when the name is decrypted inline.
    lines = en._join_continued(body)
    for fn, args in calls:
        parts = [p.strip() for p in args.split(',')]
        name = None
        # the setting name argument is usually the 2nd or 3rd parameter
        for idx in (1, 2):
            if idx < len(parts):
                var = parts[idx]
                # find an assignment to this var in the preceding lines
                for i in range(len(lines) - 1, -1, -1):
                    if var in lines[i] and ('=' in lines[i] or 'func_0x1806aa960' in lines[i]):
                        # look for an offset assignment or a known string local
                        m = re.search(r'\b(\w+)\s*=\s*\([^)]*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)', lines[i])
                        if m:
                            off = int(m.group(2), 0)
                            if off in off_map:
                                name = off_map[off]
                                break
                        # directly from local_** initialized earlier
                        for s in re.findall(r'0x[0-9a-fA-F]+', lines[i]):
                            off = int(s, 0)
                            if off in off_map:
                                name = off_map[off]
                                break
                if name:
                    break
        type_ = infer_setting_type(fn, args)
        results.append({
            'reg_func': fn,
            'raw_args': args,
            'parts': parts,
            'name': name or '',
            'type': type_,
        })
    return results


def main():
    with open(DLL, 'rb') as f:
        dll = f.read()
    with open(DECOMP, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    sections = en.load_sections(dll)
    ctor = sys.argv[1] if len(sys.argv) > 1 else 'func_0x1803d65c0'
    settings = extract_settings(ctor, dll, sections, content)
    for s in settings:
        print(s['type'], repr(s['name']))


if __name__ == '__main__':
    main()
