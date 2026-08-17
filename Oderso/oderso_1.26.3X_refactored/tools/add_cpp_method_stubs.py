#!/usr/bin/env python3
"""Generate .cpp method definitions for every virtual override declared in a
module's .h file.  Inline bodies are removed from the .h and replaced with
out-of-line declarations.  Existing .cpp definitions are preserved.
"""
import re
import argparse
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent
VTABLES = BASE / "tools" / "module_vtables_full.txt"
MOD_DIR = BASE / "Oderso" / "Module" / "Modules"

from vtable_config import DEFAULT_FUNCS, SLOT_NAMES, METHOD_SIGNATURES


def parse_vtables():
    text = VTABLES.read_text(errors="ignore")
    # Split into blocks starting with "Module:"
    blocks = re.split(r"\n(?=Module:)", text)
    out = {}
    for b in blocks:
        if not b.strip():
            continue
        lines = b.splitlines()
        mod = None
        for line in lines[:5]:
            m = re.match(r"Module:\s+(\S+)", line)
            if m:
                mod = m.group(1)
                break
        if not mod:
            continue
        entries = {}
        for line in lines:
            m = re.match(r"\[\s*(\d+)\]\s+(\S+)\s+(\S+)", line)
            if m:
                slot = int(m.group(1))
                name = m.group(2)
                func = m.group(3)
                if func in DEFAULT_FUNCS or name == "destructor":
                    continue
                entries[slot] = (name, func)
        # Build name -> func using the vtable slot index order
        name_to_func = {}
        for slot, (name, func) in entries.items():
            if slot < 0 or slot >= len(SLOT_NAMES):
                continue
            slot_name = SLOT_NAMES[slot]
            use_name = name if name in METHOD_SIGNATURES else slot_name
            name_to_func[use_name] = func
        out[mod] = name_to_func
    return out


def parse_h_methods(h_path):
    txt = h_path.read_text(errors="ignore")
    methods = {}
    pattern = re.compile(
        r"\tvirtual\s+(\S[\w\s\*&]*?)\s+(\w+)\s*\(([^)]*)\)\s*(?:override\s*)?(?:\s*\{[^}]*\})?\s*;?\n",
        re.DOTALL,
    )
    for m in pattern.finditer(txt):
        ret, name, args = m.group(1).strip(), m.group(2).strip(), m.group(3).strip()
        if name in ("destructor", "~" + h_path.stem):
            continue
        if ret == "~":
            continue
        methods[name] = (ret, args)
    return methods


def method_decl(name, ret, args):
    arglist = f"({args})" if args else "()"
    return f"\tvirtual {ret} {name}{arglist} override;\n"


def method_impl(cls, name, ret, args, func):
    arglist = re.sub(r"\s*=\s*[^,]+", "", args) if args else ""
    arglist = f"({arglist})" if arglist else "()"
    if func and func != "func_0xunknown":
        body = f"\t// Binary function: {func}\n\t// TODO"
    else:
        body = f"\t// TODO"
    return f"{ret} {cls}::{name}{arglist} {{\n{body}\n}}\n\n"


def strip_inline_bodies(h_txt, methods):
    for name in methods:
        pattern = (
            r"(\tvirtual\s+\S[\w\s\*&]*?\s+" + re.escape(name) +
            r"\s*\([^)]*\)\s*(?:override\s*)?)\s*\{[^}]*\}\s*;?\n"
        )
        if re.search(pattern, h_txt):
            h_txt = re.sub(pattern, method_decl(name, *methods[name]), h_txt)
    return h_txt


def process_module(h_path, vtables):
    cls = h_path.stem
    cpp_path = h_path.with_suffix(".cpp")
    if not cpp_path.exists():
        return 0

    methods = parse_h_methods(h_path)
    if not methods:
        return 0

    # Update header: remove inline bodies
    h_txt = h_path.read_text(errors="ignore")
    h_txt = strip_inline_bodies(h_txt, methods)
    h_path.write_text(h_txt)

    # Update cpp: add missing definitions
    cpp_txt = cpp_path.read_text(errors="ignore")
    if not cpp_txt.endswith("\n"):
        cpp_txt += "\n"

    name_to_func = vtables.get(cls, {})
    added = 0
    for name, (ret, args) in methods.items():
        # skip getModuleName, getTooltip, destructor, destructor-named
        if name in ("getModuleName", "getTooltip"):
            continue
        if re.search(rf"\b{re.escape(cls)}::{re.escape(name)}\s*\(", cpp_txt):
            continue
        func = name_to_func.get(name, "func_0xunknown")
        cpp_txt += method_impl(cls, name, ret, args, func)
        added += 1

    if added:
        cpp_path.write_text(cpp_txt)
    return added


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--class", dest="cls", help="Only process this module")
    args = parser.parse_args()

    vtables = parse_vtables()
    files = [MOD_DIR / f"{args.cls}.h"] if args.cls else sorted(MOD_DIR.glob("*.h"))

    total = 0
    for h_path in files:
        n = process_module(h_path, vtables)
        if n:
            print(f"{h_path.stem}: added {n} stub(s)")
            total += n
    print(f"Total stubs added: {total}")


if __name__ == "__main__":
    main()
