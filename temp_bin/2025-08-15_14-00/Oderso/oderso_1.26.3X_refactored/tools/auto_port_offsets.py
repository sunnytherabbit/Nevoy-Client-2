"""Auto-port simple onEnable/onDisable/pre/post event stubs that only raw-write
member fields at fixed offsets (param_1 + 0x...), with no helper calls or globals."""
import re
from pathlib import Path

DECOMP = Path('/Users/tl/Desktop/MCBE/Clients/Oderso/ghidra_decompiled_1.26.3X_new.c').read_text(errors='ignore')
BASE = 0x80

type_map = {
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
    'undefined': 'uint8_t',
}

def cType(ghidra):
    t = ghidra.strip()
    return type_map.get(t, t)

def repl_mem(m):
    typ = cType(m.group(1))
    sign = m.group(2)
    off = m.group(3)
    op = '+' if sign == '+' else '-'
    return f'*reinterpret_cast<{typ}*>(reinterpret_cast<uintptr_t>(this) {op} {off})'

def trans(line, params):
    line = re.sub(r'\*\s*\(\s*([A-Za-z0-9_\s]+)\s*\*\s*\)\s*\(\s*param_1\s*([+-])\s*(0x[0-9a-fA-F]+)\s*\)', repl_mem, line)
    line = re.sub(r'\bparam_1\b', 'this', line)
    for i, p in enumerate(params, start=2):
        line = re.sub(rf'\bparam_{i}\b', p, line)
    return line

def decomp_body(addr):
    m = re.search(rf'// Function: {re.escape(addr)}\s*\n(.*?)\n(?=// Function:|$)', DECOMP, re.DOTALL)
    if not m:
        return ''
    # strip function signature line
    body = m.group(1).strip()
    if '\n' in body:
        return body.split('\n', 1)[1].strip()
    return ''

def port_stub(func_addr, sig):
    body = decomp_body(func_addr)
    if not body:
        return False, 'no decomp'
    # skip calls to other functions / globals
    if re.search(r'\b(DAT_|func_0x|LAB_)[A-Za-z0-9_]+\b', body):
        return False, 'globals/helper calls'
    accesses = re.findall(r'\*\s*\(\s*([A-Za-z0-9_\s]+)\s*\*\s*\)\s*\(\s*param_1\s*([+-])\s*(0x[0-9a-fA-F]+)\s*\)', body)
    if not accesses:
        return False, 'no this access'
    params = re.findall(r'(?:^|,)\s*(?:const\s+)?(?:[\w<>:,\s]+?)\s+([A-Za-z_][A-Za-z0-9_]*)\s*(?:,|\))', sig)
    out = []
    max_end = BASE
    for raw in body.split('\n'):
        line = raw.strip()
        if not line or line == 'return;':
            continue
        if line.startswith('return '):
            val = line[7:-1].strip()
            out.append('\treturn ' + trans(val, params) + ';')
            continue
        if line.startswith('if '):
            m = re.match(r'if\s*\((.*)\)\s*\{', line)
            if m:
                out.append('\tif (' + trans(m.group(1), params) + ') {')
                continue
        if line in ('{', '}', 'else', 'else {') or re.match(r'\}\s*else', line):
            out.append(line)
            continue
        if line.endswith(';'):
            out.append('\t' + trans(line[:-1], params) + ';')
        else:
            out.append('\t' + trans(line, params) + ';')
    for typ, sign, off in accesses:
        if sign == '-':
            continue
        off = int(off, 0)
        t = typ.strip()
        if 'undefined8' in t or t in ('longlong','ulonglong','double','__int64'):
            sz = 8
        elif 'undefined4' in t or t in ('int','unsigned int','float','__int32'):
            sz = 4
        elif 'undefined2' in t or t in ('short','unsigned short'):
            sz = 2
        else:
            sz = 1
        end = off + sz
        if end > max_end:
            max_end = end
    return True, ('\n'.join(out), max_end)

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
            ok, res = port_stub(addr, sig)
            if not ok:
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
    print(f'Ported {count} simple stubs')

if __name__ == '__main__':
    main()
