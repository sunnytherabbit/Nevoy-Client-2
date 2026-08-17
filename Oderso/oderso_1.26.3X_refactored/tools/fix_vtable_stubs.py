#!/usr/bin/env python3
"""Fix incorrect // Binary function comments in already-generated stubs by
using the canonical vtable name -> function mapping.  Also adds any vtable
methods not yet declared in the .h/.cpp.
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
                func = m.group(3)
                if func in DEFAULT_FUNCS:
                    continue
                if slot < 0 or slot >= len(SLOT_NAMES):
                    continue
                use_name = SLOT_NAMES[slot]
                if use_name == "destructor":
                    continue
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
    # Add a placeholder return for non-void methods so stubs compile.
    if ret == "bool":
        body += "\n\treturn false;"
    elif ret == "int":
        body += "\n\treturn 0;"
    elif ret == "const char*":
        body += '\n\treturn "";'
    return f"{ret} {cls}::{name}{arglist} {{\n{body}\n}}\n\n"


def ensure_h_methods(h_path, methods):
    txt = h_path.read_text(errors="ignore")
    for name, (ret, args) in methods.items():
        if name in ("getModuleName", "destructor", "~" + h_path.stem):
            continue
        # Replace existing declaration (with or without inline body)
        pattern = (
            r"\tvirtual\s+\S[\w\s\*&]*?\s+" + re.escape(name) +
            r"\s*\([^)]*\)\s*(?:override\s*)?(?:\s*\{[^}]*\})?\s*;?\n"
        )
        if re.search(pattern, txt):
            txt = re.sub(pattern, method_decl(name, ret, args), txt)
        # Add if not present at all
        if not re.search(r"\b" + re.escape(name) + r"\s*\(", txt):
            member_re = re.compile(r"\n\t([A-Za-z_][A-Za-z0-9_<>:\s]*?\s+[A-Za-z_][A-Za-z0-9_]*\s*=)")
            m = member_re.search(txt)
            if m:
                insert_point = m.start()
                txt = txt[:insert_point] + method_decl(name, ret, args) + txt[insert_point:]
            else:
                txt = txt.replace("};\n\n#endif", method_decl(name, ret, args) + "};\n\n#endif")
    h_path.write_text(txt)


def remove_cpp_block(cpp, cls, method):
    """Remove the first definition of ``cls::method(...) { ... }`` using brace counting."""
    header_re = re.compile(
        r"\n(\S[\w\s\*&]*?\s+" + re.escape(cls) + r"::" + re.escape(method) + r"\s*\([^)]*\)\s*\{)",
        re.MULTILINE,
    )
    m = header_re.search(cpp)
    if not m:
        return cpp
    start = m.start()
    brace_start = m.end() - 1
    depth = 1
    i = brace_start + 1
    while i < len(cpp) and depth > 0:
        if cpp[i] == "{":
            depth += 1
        elif cpp[i] == "}":
            depth -= 1
        i += 1
    if depth != 0:
        return cpp
    # swallow trailing whitespace/newlines
    while i < len(cpp) and cpp[i] in "\n \t\r":
        i += 1
    return cpp[:start] + cpp[i:]


def clean_h_methods(h_path, wanted):
    """Drop virtual declarations that are no longer present in this module's vtable."""
    txt = h_path.read_text(errors="ignore")
    cls = h_path.stem
    pattern = re.compile(
        r"\tvirtual\s+(\S[\w\s\*&]*?)\s+(\w+)\s*\(([^)]*)\)\s*(?:override\s*)?(?:\s*\{[^}]*\})?\s*;?\n",
        re.DOTALL,
    )

    def repl(m):
        ret, name = m.group(1).strip(), m.group(2).strip()
        if name == "getModuleName":
            return m.group(0)
        if ret == "~" or name in ("destructor", "~" + cls):
            return m.group(0)
        if name in wanted:
            return m.group(0)
        return ""

    h_path.write_text(pattern.sub(repl, txt))


def clean_cpp_methods(cpp_path, wanted, cls):
    """Drop method definitions that are no longer present in this module's vtable."""
    if not cpp_path.exists():
        return
    txt = cpp_path.read_text(errors="ignore")
    all_slots = set(SLOT_NAMES) | {f"slot_{i}" for i in range(32)}
    for method in all_slots:
        if method in ("getModuleName", "destructor"):
            continue
        if method == f"~{cls}" or method == cls:  # destructor or constructor
            continue
        if method in wanted:
            continue
        if re.search(r"\b" + re.escape(cls) + r"::" + re.escape(method) + r"\s*\(", txt):
            txt = remove_cpp_block(txt, cls, method)
    cpp_path.write_text(txt)


def process_module(h_path, vtable_methods):
    cls = h_path.stem
    cpp_path = h_path.with_suffix(".cpp")
    if not cpp_path.exists():
        return 0, 0

    # Source of truth: methods the binary actually overrides.
    wanted = set(vtable_methods) | {"getModuleName"}

    # Remove stale declarations/definitions from previous mappings.
    clean_h_methods(h_path, wanted)
    clean_cpp_methods(cpp_path, wanted, cls)

    h_methods = parse_h_methods(h_path)
    all_methods = {}
    # Start from vtable methods (canonical signatures)
    for name, (ret, args, func) in vtable_methods.items():
        if name == "getModuleName":
            continue
        all_methods[name] = (ret, args, func)
    # Add .h-only methods (no vtable info) preserving their signature
    for name, (ret, args) in h_methods.items():
        if name == "getModuleName":
            continue
        if name not in all_methods:
            all_methods[name] = (ret, args, "func_0xunknown")

    ensure_h_methods(h_path, {n: (r, a) for n, (r, a, f) in all_methods.items()})

    cpp_txt = cpp_path.read_text(errors="ignore")
    if not cpp_txt.endswith("\n"):
        cpp_txt += "\n"

    # Fix or add each vtable method
    fixed = 0
    added = 0
    for name, (ret, args, func) in all_methods.items():
        if name == "getModuleName":
            continue
        # Find the method's definition block, if it exists, by matching the
        # opening brace and counting braces so we don't cross into the next method.
        header_re = re.compile(
            r"\n" + re.escape(ret) + r"\s+" + re.escape(cls) + r"::" + re.escape(name) +
            r"\s*\([^)]*\)\s*\{",
            re.MULTILINE,
        )
        m = header_re.search(cpp_txt)
        if m:
            start = m.start()
            brace_start = m.end() - 1
            depth = 1
            i = brace_start + 1
            while i < len(cpp_txt) and depth > 0:
                if cpp_txt[i] == "{":
                    depth += 1
                elif cpp_txt[i] == "}":
                    depth -= 1
                i += 1
            if depth == 0:
                # swallow trailing whitespace/newlines
                end = i
                while end < len(cpp_txt) and cpp_txt[end] in "\n \t\r":
                    end += 1
                cpp_txt = cpp_txt[:start] + "\n" + method_impl(cls, name, ret, args, func) + cpp_txt[end:]
                fixed += 1
                continue
        # Otherwise add if not present
        if not re.search(rf"\b{re.escape(cls)}::{re.escape(name)}\s*\(", cpp_txt):
            cpp_txt += method_impl(cls, name, ret, args, func)
            added += 1

    if fixed or added:
        cpp_path.write_text(cpp_txt)
    return fixed, added


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--class", dest="cls", help="Only process this module")
    args = parser.parse_args()

    vtables = parse_vtables()
    files = [MOD_DIR / f"{args.cls}.h"] if args.cls else sorted(MOD_DIR.glob("*.h"))

    total_fixed = 0
    total_added = 0
    for h_path in files:
        cls = h_path.stem
        if cls not in vtables:
            continue
        fixed, added = process_module(h_path, vtables[cls])
        if fixed or added:
            print(f"{cls}: fixed {fixed} stub(s), added {added} stub(s)")
            total_fixed += fixed
            total_added += added
    print(f"Total: fixed {total_fixed}, added {total_added}")


if __name__ == "__main__":
    main()
