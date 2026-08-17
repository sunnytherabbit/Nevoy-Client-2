#!/usr/bin/env python3
"""Port simple method bodies that consist only of a return statement."""
import re
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent
DECOMP = BASE.parent / "ghidra_decompiled_1.26.3X.c"


def decomp_cache():
    with open(DECOMP, "r", encoding="utf-8", errors="ignore") as f:
        content = f.read()
    blocks = re.split(r"\n(?=// Function: )", content)
    cache = {}
    for b in blocks:
        m = re.match(r"// Function:\s*(func_0x[0-9a-fA-F]+)", b)
        if m:
            cache[m.group(1)] = b
    return cache


METHOD_RE = re.compile(
    r"(\S+)\s+(\S+)::(\w+)\(([^)]*)\)\s*\{\s*\n"
    r"\s*// Binary function: (func_0x[0-9a-fA-F]+)\s*\n"
    r"(?P<body>.*?)\n\}",
    re.DOTALL,
)


def is_local_decl(line):
    return re.match(
        r"^(undefined\d|char|int|longlong|bool|float|double|size_t|uint|ulonglong|code \*|void)\s+[a-zA-Z_][a-zA-Z0-9_]*",
        line.strip(),
    )


def translate_return(func_body):
    """Return ret_expr if function is just a return of a simple constant."""
    lines = [l.strip() for l in func_body.splitlines() if l.strip()]
    for l in lines:
        if l.startswith("//") or l.startswith("/*") or l == "{" or l == "}":
            continue
        if is_local_decl(l):
            continue
        m = re.match(r'^return\s+((?:"(?:\\.|[^"\\])*")|0x[0-9a-fA-F]+|0|-?\d+|true|false);', l)
        if m:
            val = m.group(1).strip()
            return val
        # Not a return; too complex
        return None
    return None


def value_for(ret, val):
    """Translate a decompiled return value to C++."""
    val = val.strip()
    if val == "0" or val == "0x0":
        return "0" if ret != "bool" else "false"
    if val == "1" or val == "0x1":
        return "1" if ret != "bool" else "true"
    if val in ("true", "false"):
        return val
    return val


def update_module_file(cpp_path, cache):
    txt = cpp_path.read_text(errors="ignore")
    new_cpp = []
    i = 0
    changed = False

    while i < len(txt):
        m = METHOD_RE.search(txt, i)
        if not m:
            new_cpp.append(txt[i:])
            break
        new_cpp.append(txt[i : m.start()])

        ret = m.group(1)
        cls = m.group(2)
        name = m.group(3)
        args = m.group(4)
        func = m.group(5)
        body = m.group("body")

        func_text = cache.get(func, "")
        ret_val = translate_return(func_text)
        if ret_val and body.strip().endswith("// TODO") and ret != "void":
            arglist = f"({args})" if args else "()"
            new_cpp.append(f"{ret} {cls}::{name}{arglist} {{\n")
            new_cpp.append(f"\t// {func}: simple return\n")
            new_cpp.append(f"\treturn {value_for(ret, ret_val)};\n")
            new_cpp.append("}\n\n")
            changed = True
        else:
            new_cpp.append(m.group(0))

        i = m.end()

    if changed:
        cpp_path.write_text("".join(new_cpp))
        return True
    return False


def main():
    cache = decomp_cache()
    mod_dir = BASE / "Oderso" / "Module" / "Modules"
    ported = 0
    for cpp in sorted(mod_dir.glob("*.cpp")):
        if update_module_file(cpp, cache):
            print(f"ported simple returns in {cpp.name}")
            ported += 1
    print(f"Done: ported simple return bodies in {ported} files")


if __name__ == "__main__":
    main()
