"""Conservative auto-port: only functions that are direct this+offset assignments."""
import re
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

def size_of(typ):
    t = typ.strip()
    if 'undefined8' in t or t in ('longlong','ulonglong','double','__int64','uint64_t','int64_t'):
        return 8
    if 'undefined4' in t or t in ('int','unsigned int','float','__int32','uint32_t','int32_t'):
        return 4
    if 'undefined2' in t or t in ('short','unsigned short','uint16_t','int16_t'):
        return 2
    if 'undefined1' in t or t in ('char','unsigned char','bool','uint8_t','int8_t'):
        return 1
    return 1

def cpp_type(t):
    return TYPE_MAP.get(t.strip(), t.strip())

def decomp_body(addr):
    m = re.search(rf'// Function: {re.escape(addr)}\s*\n(.*?)\n(?=// Function:|$)', DECOMP, re.DOTALL)
    if not m:
        return ''
    text = m.group(1).strip()
    if '\n' not in text:
        return ''
    text = text.split('\n', 1)[1].strip()
    # remove outer { and }
    if text.startswith('{') and text.rstrip().endswith('}'):
        text = text[1:].rsplit('}', 1)[0].strip()
    return text

def extract_offset(m):
    typ = m.group(1).strip()
    sign = m.group(2)
    off = int(m.group(3), 0)
    return typ, sign, off

def trans_expr(expr, params):
    # replace raw memory accesses first
    expr = re.sub(
        r'\*\s*\(\s*([A-Za-z0-9_\s]+)\s*\*\s*\)\s*\(\s*param_1\s*([+-])\s*(0x[0-9a-fA-F]+)\s*\)',
        lambda m: f'*reinterpret_cast<{cpp_type(m.group(1))}*>(reinterpret_cast<uintptr_t>(this) {m.group(2)} {m.group(3)})',
        expr
    )
    expr = re.sub(r'\bparam_1\b', 'this', expr)
    for i, p in enumerate(params, start=2):
        expr = re.sub(rf'\bparam_{i}\b', p, expr)
    return expr

def strict_port(addr, sig):
    body = decomp_body(addr)
    if not body:
        return None
    # Reject any helper calls, globals, labels, temp variables
    if re.search(r'\b(DAT_|func_0x|LAB_)[A-Za-z0-9_]+\b', body):
        return None
    if re.search(r'\b(iVar|lVar|puVar|uVar|cVar|fVar|in_|out_)[0-9]', body):
        return None
    if re.search(r'\bif\b|\belse\b|\bfor\b|\bwhile\b|\bdo\b', body):
        return None
    # Each non-empty, non-return line must be an assignment of form *(...)(param_1 + 0x...) = VALUE;
    lines = [l.strip() for l in body.split('\n') if l.strip()]
    assignments = []
    max_end = BASE
    for line in lines:
        if line == 'return;':
            continue
        if line == 'return 0;':
            continue
        if line == 'return 1;':
            continue
        m = re.match(r'^\*\s*\(\s*([A-Za-z0-9_\s]+)\s*\*\s*\)\s*\(\s*param_1\s*([+-])\s*(0x[0-9a-fA-F]+)\s*\)\s*=\s*(.+);\s*$', line)
        if not m:
            return None
        typ, sign, off = m.group(1), m.group(2), int(m.group(3), 0)
        val = m.group(4).strip()
        if sign == '-':
            return None
        # ensure RHS has no raw memory access? Could have arithmetic with constants/param_2
        if re.search(r'\bparam_1\b', val):
            return None
        assignments.append((typ, off, val))
        end = off + size_of(typ)
        if end > max_end:
            max_end = end
    # get params
    params = re.findall(r'(?:^|,)\s*(?:const\s+)?(?:[\w<>:,\s]+?)\s+([A-Za-z_][A-Za-z0-9_]*)\s*(?:,|\))', sig)
    # generate C++ lines
    out = []
    for typ, off, val in assignments:
        out.append(f'\t*reinterpret_cast<{cpp_type(typ)}*>(reinterpret_cast<uintptr_t>(this) + {hex(off)}) = {trans_expr(val, params)};')
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
            res = strict_port(addr, sig)
            if res is None:
                continue
            body, mend = res
            if not body:
                continue
            sig_line = m.group(0).split('\n')[0]
            full = f'{sig_line}\n\t// Binary function: {addr}\n{body}\n}}'
            new = new.replace(m.group(0), full, 1)
            if mend > max_end:
                max_end = mend
            count += 1
        if new != txt:
            fp.write_text(new)
            if max_end > BASE:
                add_padding(fp.with_suffix('.h'), max_end)
    print(f'Strict port: {count} stubs')

if __name__ == '__main__':
    main()
