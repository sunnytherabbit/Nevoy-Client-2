#!/usr/bin/env python3
"""Add .h/.cpp method declarations+stubs for every vtable-override slot.

This goes further than add_cpp_method_stubs.py: for modules with vtable
entries, it adds every overridden IModule method even if the original stub
header did not declare it.
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
        methods = {}
        for line in lines:
            m = re.match(r"\[\s*(\d+)\]\s+(\S+)\s+(\S+)", line)
            if m:
                slot = int(m.group(1))
                name = m.group(2)
                func = m.group(3)
                if func in DEFAULT_FUNCS or name == "destructor":
                    continue
                if slot < 0 or slot >= len(SLOT_NAMES):
                    continue
                slot_name = SLOT_NAMES[slot]
                use_name = name if name in METHOD_SIGNATURES else slot_name
                ret, args = METHOD_SIGNATURES.get(use_name, ("void", ""))
                methods[use_name] = (ret, args, func)
        out[mod] = methods
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


def ensure_h_methods(h_path, methods):
    """Add missing method declarations and remove any inline bodies."""
    txt = h_path.read_text(errors="ignore")
    for name, (ret, args) in methods.items():
        if name in ("getModuleName", "getTooltip", "destructor", "~" + h_path.stem):
            continue
        # Remove inline body if present
        pattern = (
            r"(\tvirtual\s+\S[\w\s\*&]*?\s+" + re.escape(name) +
            r"\s*\([^)]*\)\s*(?:override\s*)?)\s*\{[^}]*\}\s*;?\n"
        )
        if re.search(pattern, txt):
            txt = re.sub(pattern, method_decl(name, ret, args), txt)
        # Add if not present at all
        if not re.search(r"\b" + re.escape(name) + r"\s*\(", txt):
            # Insert before the first member variable or before the closing `};`
            member_re = re.compile(r"\n\t([A-Za-z_][A-Za-z0-9_<>:\s]*?\s+[A-Za-z_][A-Za-z0-9_]*\s*=)")
            m = member_re.search(txt)
            if m:
                insert_point = m.start()
                txt = txt[:insert_point] + method_decl(name, ret, args) + txt[insert_point:]
            else:
                txt = txt.replace("};\n\n#endif", method_decl(name, ret, args) + "};\n\n#endif")
    h_path.write_text(txt)


def process_module(h_path, vtable_methods):
    cls = h_path.stem
    cpp_path = h_path.with_suffix(".cpp")
    if not cpp_path.exists():
        return 0

    h_methods = parse_h_methods(h_path)
    all_methods = {}
    # Prefer signature from .h where available
    for name, (ret, args) in h_methods.items():
        if name in vtable_methods:
            func = vtable_methods[name][2]
        else:
            func = "func_0xunknown"
        all_methods[name] = (ret, args, func)
    # Add vtable methods not in .h
    for name, (ret, args, func) in vtable_methods.items():
        if name in ("getModuleName", "getTooltip"):
            continue
        if name not in all_methods:
            all_methods[name] = (ret, args, func)

    ensure_h_methods(h_path, {n: (r, a) for n, (r, a, f) in all_methods.items()})

    cpp_txt = cpp_path.read_text(errors="ignore")
    if not cpp_txt.endswith("\n"):
        cpp_txt += "\n"
    added = 0
    for name, (ret, args, func) in all_methods.items():
        if name in ("getModuleName", "getTooltip"):
            continue
        if re.search(rf"\b{re.escape(cls)}::{re.escape(name)}\s*\(", cpp_txt):
            continue
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
        cls = h_path.stem
        if cls not in vtables:
            continue
        n = process_module(h_path, vtables[cls])
        if n:
            print(f"{cls}: added {n} vtable stub(s)")
            total += n
    print(f"Total vtable stubs added: {total}")


if __name__ == "__main__":
    main()
