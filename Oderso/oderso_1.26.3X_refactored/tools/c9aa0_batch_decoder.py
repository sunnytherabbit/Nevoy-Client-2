#!/usr/bin/env python3
"""Batch decode func_0x1804c9aa0 subclass module constructors."""
import re
import struct
import json
from pathlib import Path

ROOT = Path('/Users/tl/Desktop/MCBE/Clients/Oderso')
DECOMP = ROOT / 'ghidra_decompiled_1.26.3X.c'
DLL = ROOT / '1.26.3X.dll'
OUT = Path('/Users/tl/Desktop/MCBE/Clients/Oderso/oderso_1.26.3X_refactored/tools/c9aa0_decoded.json')

# Known verified decodings for func_0x1804c9aa0 subclass modules. The generic decoder
# can be brittle with complex copy/XOR/pblendw patterns, so these serve as the ground
# truth and are merged with any successfully generic-decoded strings.
C9AA0_KNOWN = {
    'Module_180371f00': {'name': 'CustomCrosshair', 'tooltip': 'Sets the crosshair image file for the CustomCrosshair module'},
    'Module_180376860': {'name': 'CustomHitsound', 'tooltip': 'Sets the hit sound audio file path for CustomHitsound'},
    'Module_18037bc90': {'name': 'BlockOverlay', 'tooltip': 'Sets the overlay image file for the BlockOverlay module'},
    'Module_180380410': {'name': 'SetPrefix', 'tooltip': 'Set the prefix for client commands'},
    'Module_180380fc0': {'name': 'TextHotkey', 'tooltip': 'Set, list, remove or clear text hotkeys for TextHotkey'},
    'Module_180388cf0': {'name': 'Unbind', 'tooltip': 'Unbinds a key from a module'},
    'Module_18038bc60': {'name': 'Waypoints', 'tooltip': 'Manage Waypoints'},
    'Module_1804c9320': {'name': 'Bind', 'tooltip': 'Bind a key to a module'},
    'Module_1804ce890': {'name': 'ClearChat', 'tooltip': 'Clears the chat, client-side only'},
    'Module_1804cf410': {'name': 'ConfigManager', 'tooltip': 'Manage client configurations'},
    'Module_1804d6b70': {'name': 'Coords', 'tooltip': 'Prints your coordinates'},
    'Module_1804d8520': {'name': 'Dodge', 'tooltip': 'Automatically dodge attacks from players'},
    'Module_1804dd020': {'name': 'Eject', 'tooltip': 'Ejects from the server'},
    'Module_1804de3f0': {'name': 'Help', 'tooltip': 'Lists all commands'},
    'Module_1804df4a0': {'name': 'HiveStats', 'tooltip': 'Show Hive game stats'},
    'Module_1804e2da0': {'name': 'Nick', 'tooltip': 'Sets the nickname for the Nick module'},
    'Module_1804e44c0': {'name': 'Panorama', 'tooltip': 'Creates a panorama at the current location'},
    'Module_1804e5480': {'name': 'PlayerInfo', 'tooltip': 'Gives you basic information of each player on the server'},
    'Module_1804e6e10': {'name': 'Say', 'tooltip': 'Sends a chat message'},
    'Module_1804e7c10': {'name': 'Schematic', 'tooltip': 'Command to change schematic data for the Schematic module'},
    'Module_1804f24e0': {'name': 'Seed', 'tooltip': 'Shows you the seed of the world'},
    'Module_1804f3ae0': {'name': 'ServerInfo', 'tooltip': 'Shows information about the server you\'re playing on'},
}

def parse_int(s):
    s = s.strip()
    if not s:
        return 0
    if s.startswith('0x') or s.startswith('0X'):
        return int(s, 0)
    return int(s)

def read_dat(addr, width=8):
    """Read data at virtual address from DLL."""
    with open(DLL, 'rb') as f:
        data = f.read()
    e_lfanew = struct.unpack_from('<I', data, 0x3c)[0]
    opt_header_size = struct.unpack_from('<H', data, e_lfanew + 0x14)[0]
    num_sections = struct.unpack_from('<H', data, e_lfanew + 6)[0]
    section_table = e_lfanew + 24 + opt_header_size
    for i in range(num_sections):
        name = data[section_table + i*40:section_table + i*40 + 8].rstrip(b'\x00')
        vsize, vaddr, raw_size, raw_ptr = struct.unpack_from('<IIII', data, section_table + i*40 + 8)
        if vaddr <= addr < vaddr + raw_size:
            off = raw_ptr + (addr - vaddr)
            if off + width <= len(data):
                if width == 8:
                    return struct.unpack_from('<Q', data, off)[0]
                if width == 4:
                    return struct.unpack_from('<I', data, off)[0]
                if width == 2:
                    return struct.unpack_from('<H', data, off)[0]
                if width == 1:
                    return data[off]
    return None

def collect_constants(block):
    env = {}
    for m in re.finditer(
        r'\b([a-zA-Z_]\w*)(?:\._(\d+)_8_)?\s*=\s*(?:\(\s*[^)]+\)\s*)?'
        r'(0x[0-9a-fA-F]+|\d+|CONCAT[^(]*\([^)]*\))\s*;',
        block,
    ):
        name, off, val = m.group(1), m.group(2), m.group(3)
        try:
            v = parse_int(val)
        except Exception:
            continue
        if name not in env:
            env[name] = {}
        if off is not None:
            env[name][int(off)] = v
        else:
            # a zero-reset like "local_78 = (undefined1  [16])0x0;" should not clobber pieces
            if v != 0 or None in env[name] or not env[name]:
                env[name][None] = v
    out = {}
    for name, vals in env.items():
        if None in vals and len(vals) == 1:
            out[name] = vals[None]
        else:
            q = 0
            for o, v in sorted(vals.items()):
                if o is None:
                    continue
                q |= (v & 0xffffffffffffffff) << (o * 8)
            out[name] = q
    return out

def pack_var(env, decls, start_var, size):
    buf = bytearray(size)
    # if we have explicit pieces for the start_var, pack those
    if start_var in env and isinstance(env[start_var], dict) and any(isinstance(k, int) for k in env[start_var].keys()):
        for o in sorted(k for k in env[start_var].keys() if isinstance(k, int)):
            v = env[start_var][o]
            for j in range(8):
                if o * 8 + j >= size:
                    break
                buf[o * 8 + j] = (v >> (8 * j)) & 0xff
        return buf
    names = [d[0] for d in decls]
    if start_var not in names:
        # last resort: if there is a plain integer for start_var, pack it up to size
        if start_var in env and isinstance(env[start_var], int):
            v = env[start_var]
            j = 0
            while v and j < size:
                buf[j] = v & 0xff
                v >>= 8
                j += 1
            return buf
        return None
    idx = names.index(start_var)
    off = 0
    for i in range(idx, len(decls)):
        if off >= size:
            break
        name, size_hint = decls[i]
        if name not in env:
            continue
        v = env[name]
        for j in range(size_hint):
            if off + j >= size:
                break
            buf[off + j] = (v >> (8 * j)) & 0xff
        off += size_hint
    return buf

def get_decls(block):
    decls = []
    for m in re.finditer(
        r'(?:^|\n)\s*(undefined\d+|size_t|ulonglong|longlong|char|byte|int|uint|float|double)(?:\s*\*+\s*|\s+)'
        r'([a-zA-Z_]\w*)\s*(?:\[([^\]]*)\])?\s*;',
        block,
    ):
        t = m.group(1).strip()
        name = m.group(2)
        arr = m.group(3)
        if arr:
            size = parse_int(arr)
        elif 'undefined8' in t or 'ulonglong' in t or 'longlong' in t:
            size = 8
        elif 'undefined4' in t or 'uint' in t or 'int' in t:
            size = 4
        elif 'undefined2' in t or 'short' in t or 'ushort' in t:
            size = 2
        elif 'undefined1' in t or 'byte' in t or 'char' in t:
            size = 1
        else:
            size = 8
        decls.append((name, size))
    return decls

def split_functions(content):
    parts = re.split(r'\n(?=// Function: )', content)
    out = {}
    for p in parts:
        m = re.match(r'// Function:\s*(func_0x[0-9a-fA-F]+)', p)
        if m:
            out[m.group(1)] = p
    return out

def bytes_to_str(buf):
    try:
        end = buf.index(0)
    except ValueError:
        end = len(buf)
    s = bytes(buf[:end]).decode('ascii', errors='replace')
    if '\ufffd' in s:
        s = s[:s.index('\ufffd')]
    return s

def find_copy_size(copy_fn, cache):
    body = cache.get(copy_fn, '')
    max_idx = -1
    for m in re.finditer(r'\bparam_1\[(0x[0-9a-fA-F]+|\d+)\]\s*=\s*param_2\[\1\]', body):
        max_idx = max(max_idx, parse_int(m.group(1)))
    # if func sets a byte at index+1 to 1 (size flag)
    for m in re.finditer(r'param_1\[(0x[0-9a-fA-F]+|\d+)\]\s*=\s*1\s*;', body):
        max_idx = max(max_idx, parse_int(m.group(1)) - 1)
    return max_idx + 1 if max_idx >= 0 else None

def get_init_blocks(body, cache):
    """Return list of (tls_base, source_var, copy_size, xor_ops) for each string."""
    blocks = []
    # split by call_once markers
    markers = list(re.finditer(r'func_0x180673140\s*\(&LAB_\w+\)', body))
    for idx, mm in enumerate(markers):
        start = 0 if idx == 0 else markers[idx-1].end()
        end = mm.end()
        segment = body[start:end]
        # find copy helper call
        cpy = re.search(r'(func_0x\w+)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*,\s*&?\s*([a-zA-Z_]\w+)\s*\)', segment)
        if not cpy:
            continue
        copy_fn, tls_base, srcvar = cpy.group(1), parse_int(cpy.group(2)), cpy.group(3)
        # copy_size from helper or constants after the segment
        copy_size = find_copy_size(copy_fn, cache)
        # xor operations in the if block after marker
        rest_start = end
        rest_end = markers[idx+1].start() if idx+1 < len(markers) else body.find('func_0x1804c9aa0')
        if rest_end == -1:
            rest_end = len(body)
        rest = body[rest_start:rest_end]
        xor_ops = []
        for m in re.finditer(
            r'\*\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*'
            r'.*\^\s*(?:\(ulonglong\)|\(uint\)|\(byte\))?\s*(DAT_\w+|0x[0-9a-fA-F]+|\d+)',
            rest,
        ):
            off = parse_int(m.group(2)) - tls_base
            key_str = m.group(3)
            if key_str.startswith('DAT_'):
                key = read_dat(parse_int('0x180' + key_str.split('_')[1]), 8)
            else:
                key = parse_int(key_str)
            ctype = m.group(1)
            if 'undefined8' in ctype or 'ulonglong' in ctype or 'longlong' in ctype:
                size = 8
            elif 'undefined2' in ctype or 'short' in ctype or 'ushort' in ctype:
                size = 2
            elif 'undefined1' in ctype or 'byte' in ctype or 'char' in ctype:
                size = 1
            else:
                size = 4
            xor_ops.append((off, key, size))
        # also capture *ptr = *ptr ^ key and *_?Str = *_?Str ^ key
        for m in re.finditer(
            r'\*\s*(puVar\d+|_?Str)\s*=\s*\*\s*\1\s*\^\s*(?:\(ulonglong\)|\(uint\)|\(byte\))?\s*(DAT_\w+|0x[0-9a-fA-F]+|\d+)\s*;',
            rest,
        ):
            # offset 0 for *puVar1 and *Str when they point at tls_base
            off = 0
            key_str = m.group(2)
            if key_str.startswith('DAT_'):
                key = read_dat(parse_int('0x180' + key_str.split('_')[1]), 8)
            else:
                key = parse_int(key_str)
            size = 8 if key > 0xffffffff else 4
            xor_ops.append((off, key, size))
        blocks.append((tls_base, srcvar, copy_size, xor_ops, copy_fn, segment))
    return blocks

def decode_block(block, func_body, cache):
    tls_base, srcvar, copy_size, xor_ops, copy_fn, segment = block
    if copy_size is None:
        # estimate from xor operations highest offset + size
        copy_size = max((off + size for off, key, size in xor_ops), default=64)
        copy_size = max(copy_size, 64)
    env = collect_constants(segment)
    decls = get_decls(func_body)
    buf = pack_var(env, decls, srcvar, copy_size)
    if buf is None:
        return None
    for off, key, size in xor_ops:
        for i in range(size):
            if 0 <= off + i < len(buf) and key is not None:
                buf[off + i] ^= (key >> (8 * i)) & 0xff
    return bytes_to_str(buf)

def main():
    with open(DECOMP, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()
    cache = split_functions(content)
    results = {}
    for fn, body in cache.items():
        if not fn.startswith('func_0x180') or 'func_0x1804c9aa0' not in body:
            continue
        if fn == 'func_0x1804c9aa0':
            continue
        mod = fn.replace('func_0x', 'Module_')
        try:
            blocks = get_init_blocks(body, cache)
        except Exception as e:
            results[mod] = {'error': str(e)}
            continue
        strings = [decode_block(b, body, cache) for b in blocks]
        # find c9aa0 call arg order
        call = re.search(r'func_0x1804c9aa0\s*\(\s*param_1\s*,\s*([^,)]+)\s*,\s*([^,)]+)\s*,\s*([^\)]+)\)', body)
        if call:
            a, b, c = call.group(1).strip(), call.group(2).strip(), call.group(3).strip()
        else:
            a = b = c = None
        # In the c9aa0 call, the three string arguments are name, raw, tooltip.
        # The string blocks in the constructor usually appear in the order
        # tooltip, raw, name (because the call happens after the last init),
        # so we map the decoded strings back by reversing the block order when
        # we have three decoded strings.  If generic decoding fails we fall back
        # to the verified C9AA0_KNOWN table.
        known = C9AA0_KNOWN.get(mod, {})
        name = known.get('name')
        tooltip = known.get('tooltip')
        raw = known.get('raw', '')
        if strings and any(s for s in strings if s):
            if len(strings) >= 3:
                tooltip = strings[0] if strings[0] is not None else tooltip
                raw = strings[1] if strings[1] is not None else raw
                name = strings[2] if strings[2] is not None else name
            elif len(strings) == 2:
                tooltip = strings[0] if strings[0] is not None else tooltip
                raw = strings[1] if strings[1] is not None else raw
            else:
                tooltip = strings[0] if strings[0] is not None else tooltip
        results[mod] = {
            'strings': strings,
            'call_args': [a, b, c],
            'name': name,
            'tooltip': tooltip,
            'raw': raw,
            'verified': mod in C9AA0_KNOWN,
        }
    with open(OUT, 'w') as f:
        json.dump(results, f, indent=2)
    print('wrote', OUT)
    print('decoded', len(results), 'modules')
    print('verified', sum(1 for v in results.values() if v.get('verified')), 'modules')

if __name__ == '__main__':
    main()
