#!/usr/bin/env python3
"""Port simple method bodies (member resets) from decompiled C to C++.

Scans the generated Module_*.cpp files for methods whose decompiled bodies
contain only direct member writes, then translates those writes into
field assignments.  Complex methods are left untouched.
"""
import re
import sys
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

# Recognise simple statements that can be translated.
STORE_RE = re.compile(
    r"\*\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*([^;]+);"
)
ARRAY_STORE_RE = re.compile(
    r"param_1\[(0x[0-9a-fA-F]+|\d+)\]\s*=\s*([^;]+);"
)


def is_simple_value(v):
    v = v.strip()
    if v == "0" or v == "0x0" or v == "0x0U" or v == "(undefined4)0x0" or v == "(undefined8)0x0":
        return True
    if re.match(r"^[+-]?(\d+\.?\d*|\d*\.\d+)[fF]?$", v):
        return True
    if re.match(r"^0x[0-9a-fA-F]+[uU]?$", v):
        return True
    return False


def translate_expr(v, ftype):
    v = v.strip()
    if v == "0" or v == "0x0" or v == "0x0U" or v == "(undefined4)0x0" or v == "(undefined8)0x0":
        return "0"
    if v == "(undefined1)0x1" or v == "(undefined8)0x1" or v == "(undefined4)0x1" or v == "1":
        return "1"
    m = re.match(r"^0x([0-9a-fA-F]+)(?:[uU]|\.0+)?$", v)
    if m:
        try:
            ival = int(m.group(1), 16)
            if ival > 0x7fffffff:
                return f"0x{m.group(1)}ULL"
            return f"0x{m.group(1)}"
        except ValueError:
            return v
    m = re.match(r"^(\d+\.?\d*|\.\d+)[fF]?$", v)
    if m:
        return f"{m.group(1)}f"
    return v


def ctype_to_fieldtype(ctype):
    if "float" in ctype:
        return "float"
    if "bool" in ctype or "undefined1" in ctype:
        return "bool"
    if "undefined4" in ctype or "uint" in ctype or "int" in ctype:
        return "int"
    return "__int64"


def translate_function(func_body):
    """Return list of C++ statements if the function is simple; otherwise None."""
    lines = func_body.splitlines()
    statements = []
    fields = {}  # offset (int) -> ctype

    for line in lines:
        l = line.strip()
        if not l or l.startswith("//") or l.startswith("/*"):
            continue
        # Skip local variable declarations
        if re.match(r"^(undefined\d|char|int|longlong|bool|float|double|size_t|uint|ulonglong|code \*|void)\s+[a-zA-Z_][a-zA-Z0-9_]*", l):
            continue
        if l == "return;":
            statements.append("return;")
            continue
        if l == "{":
            continue
        if l == "}":
            continue

        m = STORE_RE.match(l)
        if m:
            ctype, off, val = m.group(1), int(m.group(2), 0), m.group(3)
            if not is_simple_value(val):
                return None
            off = int(off)
            ftype = ctype_to_fieldtype(ctype)
            fields[off] = ftype
            statements.append(f"field_0x{off:x} = {translate_expr(val, ftype)};")
            continue

        m = ARRAY_STORE_RE.match(l)
        if m:
            idx, val = int(m.group(1), 0), m.group(2)
            if not is_simple_value(val):
                return None
            off = idx * 8
            ftype = "__int64"
            fields[off] = ftype
            statements.append(f"field_0x{off:x} = {translate_expr(val, ftype)};")
            continue

        # Anything else is not a simple reset
        return None

    if not statements or all(s == "return;" for s in statements):
        return None
    # Reject methods that write to an excessive number of offsets or very
    # large offsets (these are usually initializers/memsets, not simple resets)
    max_off = max(fields.keys()) if fields else 0
    if len(fields) > 8 or max_off > 0x2f0:
        return None
    return statements, fields


def update_module_file(cpp_path, cache):
    txt = cpp_path.read_text(errors="ignore")
    h_path = cpp_path.with_suffix(".h")
    htxt = h_path.read_text(errors="ignore") if h_path.exists() else ""

    new_cpp = []
    i = 0
    changed = False
    fields_all = {}

    while i < len(txt):
        # Find method definitions
        m = METHOD_RE.search(txt, i)
        if not m:
            new_cpp.append(txt[i:])
            break
        # append text before match
        new_cpp.append(txt[i : m.start()])

        ret = m.group(1)
        cls = m.group(2)
        name = m.group(3)
        args = m.group(4)
        func = m.group(5)
        body = m.group("body")
        func_text = cache.get(func, "")

        translated = translate_function(func_text)
        if translated and body.strip().endswith("// TODO"):
            stmts, fields = translated
            # Build new method body
            arglist = f"({args})" if args else "()"
            new_cpp.append(f"{ret} {cls}::{name}{arglist} {{\n")
            new_cpp.append(f"\t// {func}: reset state\n")
            for s in stmts:
                new_cpp.append(f"\t{s}\n")
            new_cpp.append("}\n\n")
            changed = True
            fields_all.update(fields)
        else:
            new_cpp.append(m.group(0))

        i = m.end()

    if changed:
        cpp_path.write_text("".join(new_cpp))
        # Add fields to header private section
        if htxt and fields_all:
            # Find private section
            new_fields = []
            existing = re.findall(r"field_0x([0-9a-fA-F]+)", htxt)
            existing_offs = {int(o, 16) for o in existing}
            for off, ftype in sorted(fields_all.items()):
                if off in existing_offs:
                    continue
                new_fields.append(f"\t{ftype} field_0x{off:x} = 0;\n")
            if new_fields:
                if "private:" in htxt:
                    htxt = htxt.replace("private:\n", "private:\n" + "".join(new_fields))
                else:
                    htxt = htxt.replace(
"};\n\n#endif",
                    "\nprivate:\n" + "".join(new_fields) + "};\n\n#endif",
                    )
                h_path.write_text(htxt)
        return True
    return False


def main():
    cache = decomp_cache()
    mod_dir = BASE / "Oderso" / "Module" / "Modules"
    ported = 0
    for cpp in sorted(mod_dir.glob("*.cpp")):
        if update_module_file(cpp, cache):
            print(f"ported simple resets in {cpp.name}")
            ported += 1
    print(f"Done: ported simple method bodies in {ported} files")


if __name__ == "__main__":
    main()
