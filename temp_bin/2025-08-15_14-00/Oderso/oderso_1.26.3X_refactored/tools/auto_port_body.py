"""Full-body translator for simple-ish Ghidra decompilations.
Translates param_1 -> reinterpret_cast<uintptr_t>(this), raw memory accesses,
and keeps conditionals/local variables. Rejects helper calls, globals, TLS, etc."""
import re
import sys
from pathlib import Path

DECOMP = Path('/Users/tl/Desktop/MCBE/Clients/Oderso/ghidra_decompiled_1.26.3X_new.c').read_text(errors='ignore')
BASE = 0x80

TYPE_MAP = {
    'undefined1': 'uint8_t',
    'undefined2': 'uint16_t',
    'undefined4': 'uint32_t',
    'undefined8': 'uint64_t',
    'char': 'uint8_t',
    'unsigned char': 'uint8_t',
    'byte': 'uint8_t',
    'short': 'int16_t',
    'unsigned short': 'uint16_t',
    'int': 'int32_t',
    'unsigned int': 'uint32_t',
    'longlong': 'int64_t',
    'ulonglong': 'uint64_t',
    'float': 'float',
    'double': 'double',
    'undefined': 'uint8_t',
}

def cpp_type(t):
    t = t.strip() if t else ''
    return TYPE_MAP.get(t, t) if t else 'uint8_t'

def size_of(t):
    t = (t or '').strip()
    if 'undefined8' in t or t in ('longlong','ulonglong','double','__int64','uint64_t','int64_t'):
        return 8
    if 'undefined4' in t or t in ('int','unsigned int','float','__int32','uint32_t','int32_t'):
        return 4
    if 'undefined2' in t or t in ('short','unsigned short','uint16_t','int16_t'):
        return 2
    return 1

def get_body(addr):
    m = re.search(rf'// Function: {re.escape(addr)}\s*\n(.*?)\n(?=// Function:|$)', DECOMP, re.DOTALL)
    if not m:
        return ''
    text = m.group(1).strip()
    # Drop function declaration line (first line ending with )\n)
    if '\n' not in text:
        return ''
    text = text.split('\n', 1)[1].strip()
    if text.startswith('{') and text.rstrip().endswith('}'):
        text = text[1:].rsplit('}', 1)[0].strip()
    return text

def can_port(body, func_addr):
    # reject helper calls, globals, TLS, warnings, exception, local labels
    if re.search(r'\b(DAT_|LAB_|ThreadLocalStoragePointer|_tls_index|local_[0-9a-f]+|auStack_|invalidInstructionException)\b', body):
        return False
    # reject any func_ address except the function itself (declaration was removed)
    if re.search(r'\bfunc_0x[0-9a-fA-F]+\b', body):
        # check if it's the current function name (could be tail recursion? unlikely)
        return False
    if 'WARNING' in body:
        return False
    if 'Does not return' in body:
        return False
    return True

def translate_line(line, params):
    # replace raw memory access: *(TYPE*)(param_1 + expr) and *(TYPE*)(param_1 - expr)
    # handle nested: *(*(longlong*)(param_1 + lVar2) + 0x18)
    # We'll do it in a loop because nested expressions may contain further accesses.
    prev = None
    while prev != line:
        prev = line
        # match the innermost *(TYPE*)(...) with param_1 or local pointer + offset
        line = re.sub(
            r'\*\s*\(\s*([A-Za-z0-9_\s]+)\s*\*\s*\)\s*\(\s*(param_1)\s*([+-])\s*([^()]+)\s*\)',
            lambda m: f'*reinterpret_cast<{cpp_type(m.group(1))}*>(reinterpret_cast<uintptr_t>(this) {m.group(3)} {m.group(4).strip()})',
            line
        )
        # local pointer + offset, e.g. *(float*)(lVar2 + 0x18)
        line = re.sub(
            r'\*\s*\(\s*([A-Za-z0-9_\s]+)\s*\*\s*\)\s*\(\s*([A-Za-z_][A-Za-z0-9_]*)\s*([+-])\s*([^()]+)\s*\)',
            lambda m: f'*reinterpret_cast<{cpp_type(m.group(1))}*>({m.group(2)} {m.group(3)} {m.group(4).strip()})',
            line
        )
    # replace NAN with std::isnan
    line = re.sub(r'\bNAN\s*\(', 'std::isnan(', line)
    # replace param_1 used as pointer/index elsewhere? e.g. this + lVar2 (from broken scripts) no
    line = re.sub(r'\bparam_1\b', 'this', line)  # any leftover
    for i, p in enumerate(params, start=2):
        line = re.sub(rf'\bparam_{i}\b', p, line)
    return line

def port(addr, sig):
    body = get_body(addr)
    if not body:
        return None
    if not can_port(body, addr):
        return None
    params = re.findall(r'(?:^|,)\s*(?:const\s+)?(?:[\w<>:,\s]+?)\s+([A-Za-z_][A-Za-z0-9_]*)\s*(?:,|\))', sig)
    out = []
    max_end = BASE
    for raw in body.split('\n'):
        line = raw.strip()
        if not line:
            continue
        if line == 'return;':
            out.append('\treturn;')
            continue
        if line.startswith('return '):
            val = line[7:-1].strip()
            out.append('\treturn ' + translate_line(val, params) + ';')
            continue
        # assignment or declaration or expression
        # keep declaration for local vars (fVar1, iVar1, lVar2) at their decompiled types
        new_line = translate_line(line.rstrip(';'), params)
        out.append('\t' + new_line + ';' if not new_line.endswith(';') else '\t' + new_line)
        # track offsets
        for m in re.finditer(r'reinterpret_cast<uintptr_t>\(this\)\s*([+-])\s*(0x[0-9a-fA-F]+|\w+)', new_line):
            sign = m.group(1)
            off_str = m.group(2)
            if sign == '-' or not off_str.startswith('0x'):
                continue
            off = int(off_str, 0)
            # determine type size from cast
            cm = re.search(r'reinterpret_cast<([^>]+)>\*', new_line)
            if cm:
                sz = size_of(cm.group(1))
            else:
                sz = 8
            if off + sz > max_end:
                max_end = off + sz
    return '\n'.join(out), max_end

def add_padding(hpath, max_end):
    htxt = hpath.read_text(errors='ignore')
    if '_binaryPadding' in htxt:
        return
    m = re.search(r'^(\s*\};\s*)$', htxt, re.MULTILINE)
    if not m:
        return
    needed = max_end - BASE
    if needed <= 0:
        return
    size = (needed + 7) & ~7
    insert = '\n\t// padding to match binary layout up to 0x{:x}\n\tchar _binaryPadding[0x{:x}];\n'.format(max_end, size)
    htxt = htxt[:m.start()] + insert + htxt[m.start():]
    hpath.write_text(htxt)

def needs_cmath(body):
    return 'std::isnan' in body

def main():
    count = 0
    pattern = r'^(\w+(?:\s*\*)?\s+)?(\w+)::(\w+)\s*(\([^\)]*\))\s*\{\s*\n\s*//\s*Binary function:\s*(\S+)\s*\n\s*//\s*TODO\s*\n\s*\}'
    for fp in sorted(Path('Oderso/Module/Modules').glob('*.cpp')):
        txt = fp.read_text(errors='ignore')
        stubs = list(re.finditer(pattern, txt, re.MULTILINE))
        if not stubs:
            continue
        new = txt
        max_end = BASE
        for m in stubs:
            cls, meth, sig, addr = m.group(2), m.group(3), m.group(4), m.group(5)
            res = port(addr, sig)
            if res is None:
                continue
            body, mend = res
            if not body:
                continue
            sig_line = m.group(0).split('\n')[0]
            full = f'{sig_line}\n\t// Binary function: {addr}\n{body}\n}}'
            new = new.replace(m.group(0), full, 1)
            if needs_cmath(full) and '#include <cmath>' not in new:
                new = re.sub(r'(#include ".*"\n)', r'\1#include <cmath>\n', new, count=1)
            if mend > max_end:
                max_end = mend
            count += 1
        if new != txt:
            fp.write_text(new)
            if max_end > BASE:
                add_padding(fp.with_suffix('.h'), max_end)
    print(f'Ported {count} stubs')

if __name__ == '__main__':
    main()
