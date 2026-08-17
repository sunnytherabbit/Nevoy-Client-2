#!/usr/bin/env python3
"""Decode Module constructors that call func_0x1804c9aa0."""
import re
import struct
import sys
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent
DECOMP = BASE.parent / "ghidra_decompiled_1.26.3X.c"
MODULE_DIR = BASE / "Oderso" / "Module" / "Modules"

def parse_int(s):
    s = s.strip()
    if s.startswith('0x') or s.startswith('0X'):
        return int(s, 0)
    return int(s)

def decomp_cache():
    with open(DECOMP, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    blocks = re.split(r'\n(?=// Function: )', content)
    cache = {}
    for b in blocks:
        m = re.match(r'// Function:\s*(func_0x[0-9a-fA-F]+)', b)
        if m:
            cache[m.group(1)] = b
    return cache

def copy_function_size(fn, cache):
    body = cache.get(fn, '')
    max_idx = -1
    for m in re.finditer(r'\bparam_1\[(0x[0-9a-fA-F]+|\d+)\]\s*=\s*param_2\[\1\]', body):
        max_idx = max(max_idx, parse_int(m.group(1)))
    for m in re.finditer(r'\bparam_1\[(0x[0-9a-fA-F]+|\d+)\]\s*=\s*1\s*;', body):
        max_idx = max(max_idx, parse_int(m.group(1)) - 1)
    return max_idx + 1 if max_idx >= 0 else None

def collect_constants(body):
    env = {}
    for m in re.finditer(
        r'\b([a-zA-Z_]\w*)(?:\._(\d+)_8_)?\s*=\s*(?:\(\s*[^)]+\)\s*)?'
        r'(0x[0-9a-fA-F]+|\d+|CONCAT\d+_?\d*\s*\([^)]+\))\s*;',
        body,
    ):
        name, off, val = m.group(1), m.group(2), m.group(3)
        if name not in env:
            env[name] = {}
        if off is not None:
            env[name][int(off)] = parse_int_value(val)
        else:
            env[name][None] = parse_int_value(val)
    out = {}
    for name, vals in env.items():
        if None in vals:
            out[name] = vals[None]
        else:
            q = 0
            for o, v in sorted(vals.items()):
                q |= v << (o * 8)
            out[name] = q
    return out

def parse_int_value(v):
    if isinstance(v, int):
        return v
    if v.startswith('CONCAT'):
        cm = re.match(r'CONCAT(\d+)_?(\d*)?\s*\(\s*([^)]+)\s*\)', v)
        if cm:
            parts = [x.strip() for x in cm.group(3).split(',')]
            width = int(cm.group(1))
            mask = (1 << (width * 8)) - 1
            lo = parse_int(parts[-1]) if parts else 0
            hi = parse_int(parts[0]) if len(parts) > 1 else 0
            return ((hi << (width * 4)) | lo) & mask
        return 0
    return parse_int(v)

def var_size(type_prefix, array_spec=None):
    if array_spec:
        return parse_int(array_spec)
    m = re.search(r'undefined(\d+)', type_prefix)
    if m:
        return int(m.group(1))
    if 'longlong' in type_prefix or 'double' in type_prefix:
        return 8
    if 'size_t' in type_prefix or 'ulonglong' in type_prefix:
        return 8
    if 'uint' in type_prefix or 'int' in type_prefix or 'float' in type_prefix:
        return 4
    if 'short' in type_prefix:
        return 2
    if 'byte' in type_prefix or 'char' in type_prefix:
        return 1
    return 8

def get_decls(body):
    decls = []
    for m in re.finditer(
        r'\n\s*((?:undefined\d|size_t|ulonglong|char|byte|int|longlong|float|double)(?:\s*\*+\s*|\s+))'
        r'([a-zA-Z_]\w*)\s*(?:\[([^\]]*)\])?\s*;',
        body,
    ):
        decls.append((m.group(1), m.group(2), m.group(3)))
    return decls

def pack_source_buffer(body, srcvar, copy_size, env=None):
    if env is None:
        env = collect_constants(body)
    decls = get_decls(body)
    var_list = [d[1] for d in decls]
    if srcvar not in var_list:
        return None
    idx = var_list.index(srcvar)
    buf = bytearray(copy_size)
    off = 0
    for i in range(idx, len(decls)):
        if off >= copy_size:
            break
        type_prefix, name, arr = decls[i]
        if name not in env:
            continue
        val = env[name]
        size = var_size(type_prefix, arr)
        size = min(size, copy_size - off)
        for j in range(size):
            buf[off + j] = (val >> (8 * j)) & 0xff
        off += size
    return buf

def bytes_to_string(buf):
    try:
        end = buf.index(0)
    except ValueError:
        end = len(buf)
    s = bytes(buf[:end]).decode('ascii', errors='replace')
    if '\ufffd' in s:
        s = s[:s.index('\ufffd')]
    return s

def parse_xor_ops(body, tls_base):
    ops = []
    for line in body.splitlines():
        line = line.strip()
        if not line or line.startswith('//') or line.startswith('/*'):
            continue
        m = re.match(
            r'\*\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*'
            r'.*\^\s*(0x[0-9a-fA-F]+|\d+)',
            line,
        )
        if m:
            off = parse_int(m.group(2)) - tls_base
            key = parse_int(m.group(3))
            ctype = m.group(1)
            size = 8 if 'undefined8' in ctype or 'longlong' in ctype or 'ulonglong' in ctype else (
                2 if 'undefined2' in ctype or 'short' in ctype or 'ushort' in ctype else (
                    1 if 'undefined1' in ctype or 'byte' in ctype or 'char' in ctype else 4
                )
            )
            ops.append((off, key, size))
            continue
        m = re.match(r'\*\s*_?Str\s*=\s*\*_?Str\s*\^\s*(0x[0-9a-fA-F]+|\d+)', line)
        if m:
            key = parse_int(m.group(1))
            size = 8 if key > 0xffffffff else 4
            ops.append((0, key, size))
    return ops

def decode_tls_string(body, srcvar, copy_fn, tls_base, xor_ops):
    size = copy_function_size(copy_fn, {})
    if not size:
        size = 64
    env = collect_constants(body)
    buf = pack_source_buffer(body, srcvar, size, env)
    if buf is None:
        return None
    for off, key, sz in xor_ops:
        for i in range(sz):
            if 0 <= off + i < len(buf):
                buf[off + i] ^= (key >> (8 * i)) & 0xff
    return bytes_to_string(buf)

def decode_c9aa0_constructor(mod, cache):
    fn = f'func_0x{mod.split("_")[1]}'
    body = cache.get(fn, '')
    if not body or 'func_0x1804c9aa0' not in body:
        return None
    # find all TLS string initialization blocks: pattern (func_0x...)(&LAB_...) preceded by writes
    # simplified: find all calls to copy-to-TLS helpers and the source var
    strings = []
    for m in re.finditer(
        r'func_(0x\w+)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*,\s*&?\s*([a-zA-Z_]\w+)\s*\)',
        body,
    ):
        copy_fn, tls_base, srcvar = m.group(1), parse_int(m.group(2)), m.group(3)
        # find the following XOR operations that use this tls_base as the base
        # naive: collect all XOR ops then filter by base
        ops = []
        for line in body.splitlines():
            line = line.strip()
            if re.search(rf'\+\s*{re.escape(m.group(2))}\s*\)', line) and '\^' in line:
                mx = re.match(r'.*\^\s*(0x[0-9a-fA-F]+|\d+)', line)
                if mx:
                    # determine size from lvalue type
                    pass
        # use parse_xor_ops with the block from this call to the next call or func_0x1804c9aa0
        # (omitted for brevity; this is a partial implementation)
        pass
    return strings

if __name__ == '__main__':
    cache = decomp_cache()
    print('Loaded', len(cache), 'functions')
