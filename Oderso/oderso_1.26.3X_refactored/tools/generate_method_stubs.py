#!/usr/bin/env python3
"""Generate .h declarations and .cpp stub definitions for every overridden
module method found in module_vtables_full.txt.

For each module the script:
  - reads the vtable to discover which IModule methods are overridden;
  - ensures the .h has a clean declaration for each overridden method;
  - adds a stub definition in the .cpp (with a // Binary function comment)
    for any method that is not already defined there.
"""
import re
import argparse
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent
VTABLES = BASE / "tools" / "module_vtables_full.txt"
MOD_DIR = BASE / "Oderso" / "Module" / "Modules"

from vtable_config import DEFAULT_FUNCS, SLOT_NAMES, METHOD_SIGNATURES

# Build slot -> (name, ret, args) from the canonical vtable config.
SLOT_SIGNATURES = {
    i: (name, *METHOD_SIGNATURES[name]) for i, name in enumerate(SLOT_NAMES)
}


def parse_vtables():
    text = VTABLES.read_text(errors="ignore")
    blocks = re.split(r"\n(?=Module:)", text)
    out = {}
    for b in blocks[1:]:
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
        out[mod] = entries
    return out


def method_decl(name, ret, args):
    arglist = f"({args})" if args else "()"
    return f"\tvirtual {ret} {name}{arglist} override;\n"


def method_impl(cls, name, ret, args, func):
    arglist = re.sub(r"\s*=\s*[^,]+", "", args) if args else ""
    arglist = f"({arglist})" if arglist else "()"
    return f"{ret} {cls}::{name}{arglist} {{\n\t// Binary function: {func}\n\t// TODO\n}}\n\n"


def update_header(h_path, methods):
    """Ensure the .h declares all `methods` (name -> (ret, args, func)) and
    remove any inline {} bodies from existing declarations."""
    txt = h_path.read_text(errors="ignore")

    # Remove inline bodies one by one.
    for name in methods:
        pattern = (
            r"(\tvirtual\s+\S+\s+" + re.escape(name) +
            r"\s*\([^)]*\)\s*(?:override\s*)?)\s*\{[^}]*\}\s*;?\n"
        )
        if re.search(pattern, txt):
            decl = method_decl(name, *methods[name][:2])
            txt = re.sub(pattern, decl, txt)

    # Add any completely missing declarations before the first member variable.
    missing = [name for name in methods if not re.search(
        r"\b" + re.escape(name) + r"\s*\(", txt)]
    if missing and "public:" in txt:
        # Insert before the first member variable line.
        member_re = re.compile(r"\n\t([A-Za-z_][A-Za-z0-9_<>:\s]*?\s+[A-Za-z_][A-Za-z0-9_]*\s*=)")
        m = member_re.search(txt)
        if m:
            insert_point = m.start()
            for name in missing:
                decl = method_decl(name, *methods[name][:2])
                txt = txt[:insert_point] + decl + txt[insert_point:]
                insert_point += len(decl)
    h_path.write_text(txt)


def update_cpp(cpp_path, cls, methods):
    """Add stub definitions for any method not already present in the .cpp."""
    txt = cpp_path.read_text(errors="ignore")
    added = ""
    for name, (ret, args, func) in methods.items():
        if re.search(rf"\b{re.escape(cls)}::{re.escape(name)}\s*\(", txt):
            continue
        added += method_impl(cls, name, ret, args, func)
    if added:
        cpp_path.write_text(txt + added)


def parse_h_methods(h_path):
    """Return a dict of (name -> (ret, args)) for every virtual override
    declared in the class."""
    txt = h_path.read_text(errors="ignore")
    methods = {}
    # Match `virtual <ret> <name>(<args>) [override] [{...}];`
    for m in re.finditer(
        r"\tvirtual\s+(\S[\w\s\*&]*?)\s+(\w+)\s*\(([^)]*)\)\s*(?:override\s*)?(?:\s*\{[^}]*\})?\s*;?\n",
        txt,
    ):
        ret, name, args = m.group(1).strip(), m.group(2).strip(), m.group(3).strip()
        # skip destructor and getModuleName
        if name in ("destructor", "~" + h_path.stem):
            continue
        if ret == "~":
            continue
        methods[name] = (ret, args)
    return methods


def update_header_all(h_path, methods):
    """Remove inline bodies from every method we will define out-of-line."""
    txt = h_path.read_text(errors="ignore")
    for name in methods:
        pattern = (
            r"(\tvirtual\s+\S[\w\s\*&]*?\s+" + re.escape(name) +
            r"\s*\([^)]*\)\s*(?:override\s*)?)\s*\{[^}]*\}\s*;?\n"
        )
        if re.search(pattern, txt):
            decl = method_decl(name, *methods[name][:2])
            txt = re.sub(pattern, decl, txt)
    h_path.write_text(txt)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--class", dest="cls", help="Only process this module class")
    args = parser.parse_args()

    vtables = parse_vtables()
    files = [MOD_DIR / f"{args.cls}.h"] if args.cls else sorted(MOD_DIR.glob("*.h"))

    for h_path in files:
        cls = h_path.stem
        cpp_path = h_path.with_suffix(".cpp")
        if not cpp_path.exists():
            continue

        # Start from .h declared overrides
        h_methods = parse_h_methods(h_path)
        # Enrich with vtable info if available
        if cls in vtables:
            for slot, (name, func) in vtables[cls].items():
                sig = SLOT_SIGNATURES.get(slot)
                if not sig:
                    continue
                slot_name, ret, args = sig
                canonical_names = {t[0] for t in SLOT_SIGNATURES.values()}
                use_name = name if name in canonical_names else slot_name
                if use_name in h_methods:
                    h_methods[use_name] = (ret, args, func)
                else:
                    h_methods[use_name] = (ret, args, func)

        if not h_methods:
            continue

        # For .h methods with no binary func, use unknown marker
        complete = {}
        for name, (ret, args) in h_methods.items():
            func = "func_0xunknown"
            if len(h_methods[name]) == 3:
                ret, args, func = h_methods[name]
            complete[name] = (ret, args, func)

        update_header_all(h_path, complete)
        update_cpp(cpp_path, cls, complete)
        print(f"{cls}: generated stubs for {len(complete)} method(s)")


if __name__ == "__main__":
    main()
