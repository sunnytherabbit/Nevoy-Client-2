#!/usr/bin/env python3
"""Port all portable modules from the decompiled C into C++ stubs.

Reads portable_modules_report.md, the module vtables, and the decompiled
function bodies to generate .h/.cpp files with correct IModule overrides
and member variables extracted from the constructor.
"""
import re
import os
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent
REPORT = BASE / "portable_modules_report.md"
VTABLES = BASE / "tools" / "module_vtables_full.txt"
DECOMP = BASE.parent / "ghidra_decompiled_1.26.3X.c"

from vtable_config import SLOT_NAMES, METHOD_SIGNATURES

SKIP_MODULES = {
    "Module_180130570",
    "Module_18031e130",
    "Module_18020d4c0",
    "Module_18020a2d0",
    "Module_180193330",
    "Module_180412630",
    "Module_1802ce320",
    "Module_1803404a0",
}


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


def parse_report():
    with open(REPORT, "r", encoding="utf-8", errors="ignore") as f:
        content = f.read()
    mods = re.split(r"\n## `", content)
    out = {}
    for block in mods[1:]:
        mname = re.match(r"`?([^`\s]+)`?", block).group(1)
        mapping = {}
        for line in block.splitlines():
            mm = re.match(r"\s+- `([^`]+)` -> `([^`]+)`", line)
            if mm:
                mapping[mm.group(1)] = mm.group(2)
        out[mname] = mapping
    return out


def parse_vtables():
    if not VTABLES.exists():
        return {}
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
                entries[int(m.group(1))] = (m.group(2), m.group(3))
        out[mod] = entries
    return out


def extract_stores(ctor_body):
    stores = {}
    for m in re.finditer(r"\(\s*(?:[^)]+\s*)\)\s*\(\s*(?:\(longlong\))?\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*([^;]+);", ctor_body):
        off = int(m.group(1), 0)
        stores[off] = m.group(2).strip()
    for m in re.finditer(r"param_1\[(0x[0-9a-fA-F]+|\d+)\]\s*=\s*([^;]+);", ctor_body):
        idx = int(m.group(1), 0)
        stores[idx * 8] = m.group(2).strip()
    for m in re.finditer(r"\(undefined1\s*\*\)\s*\(\s*\(longlong\)\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*([^;]+);", ctor_body):
        off = int(m.group(1), 0)
        stores[off] = m.group(2).strip()
    return stores


def guess_type_from_offset(off, val):
    if off == 0x148:
        return "__int64"
    if off in (0x14c, 0x150, 0x154):
        if "." in val or ("f" in val.lower() and "0x" not in val.lower()):
            return "float"
        return "int"
    if off >= 0x148 and off < 0x160:
        if val in ("0", "0x0"):
            return "bool"
    return "__int64"


def is_string_method(func_body):
    if not func_body:
        return False
    for line in func_body.splitlines()[:10]:
        line = line.strip()
        if not line or line.startswith("//") or line.startswith("/*") or line.startswith("*"):
            continue
        # MSVC x64 string returns use a hidden output pointer (param_2)
        if re.search(r"\b(undefined8\s*\*|undefined1\s*\(\*\)\s*\[\d+\]|char\s*\*|std::string\s*\*|void\s*\*)\s+func_", line):
            return True
        if "param_2" in line:
            return True
        if "func_" in line:
            return False
        break
    return False


def classify_method(name, func_body):
    if name not in METHOD_SIGNATURES:
        return name
    # The old extraction script labelled the slot-3 string method as getKeybind.
    if name == "getKeybind" and is_string_method(func_body):
        return "getTooltip"
    return name


def build_method_decl(name):
    if name == "destructor" or name not in METHOD_SIGNATURES:
        return ""
    ret, args = METHOD_SIGNATURES[name]
    arglist = f"({args})" if args else "()"
    return f"\tvirtual {ret} {name}{arglist} override;\n"


def build_method_impl(class_name, name, func):
    ret, args = METHOD_SIGNATURES.get(name, ("void", ""))
    # Default arguments belong in the declaration only.
    def_args = re.sub(r"\s*=\s*[^,]+", "", args) if args else ""
    arglist = f"({def_args})" if def_args else "()"
    sig = f"{ret} {class_name}::{name}{arglist}"
    body = [f"// Binary function: {func}"]
    if name == "getModuleName":
        body.append(f'return "{class_name}";')
    elif name == "getTooltip":
        body.append(f"// {func}: obfuscated tooltip string")
        body.append(f'return "{class_name}";')
    elif name == "getRawModuleName":
        body.append("return getModuleName();")
    elif name == "getKeybind":
        body.append("// Return the configured keybind")
        body.append("return IModule::getKeybind();")
    elif name in ("isFlashMode", "isEnabled", "allowAutoStart"):
        body.append(f"// {name} logic from {func}")
        body.append("return false;")
    else:
        body.append(f"// Implement behaviour from {func}")
        body.append("// TODO")
    return f"{sig} {{\n\t" + "\n\t".join(body) + "\n}\n\n"


def port_module(class_name, mapping, cache, vtable):
    if class_name in SKIP_MODULES:
        print(f"  skipping {class_name} (already ported)")
        return
    print(f"Porting {class_name}...")
    ctor = f"func_0x{class_name.split('_')[1]}"
    ctor_body = cache.get(ctor, "")
    stores = extract_stores(ctor_body)

    overrides = {}
    for name, func in mapping.items():
        if name in ("destructor",):
            continue
        src_name = classify_method(name, cache.get(func, ""))
        if src_name in METHOD_SIGNATURES:
            overrides[src_name] = func

    # Header
    header = f"""#pragma once
#ifndef ODERSO_MODULE_{class_name.upper()}_H
#define ODERSO_MODULE_{class_name.upper()}_H

#include "../../../Horion/Module/Modules/Module.h"

class {class_name} : public IModule {{
public:
	{class_name}();
	~{class_name}() {{}}

"""
    for name in SLOT_NAMES:
        if name in overrides:
            header += build_method_decl(name)
    header += "\nprivate:\n"
    for off in sorted(stores):
        if off >= 0x148:
            t = guess_type_from_offset(off, stores[off])
            header += f"\t{t} field_0x{off:x} = 0;\n"
    header += "};\n\n#endif\n"

    # Cpp
    impl = f'#include "{class_name}.h"\n\n'
    impl += f'{class_name}::{class_name}() : IModule(0, Category::COMBAT, "{class_name}") {{\n'
    for off in sorted(stores):
        if off >= 0x148:
            impl += f"\tfield_0x{off:x} = {stores[off]};\n"
    impl += "}\n\n"
    impl += f'const char* {class_name}::getModuleName() {{ return "{class_name}"; }}\n\n'

    for name in SLOT_NAMES:
        if name in overrides:
            if name == "getModuleName":
                continue
            impl += build_method_impl(class_name, name, overrides[name])

    out_dir = BASE / "Oderso" / "Module" / "Modules"
    (out_dir / f"{class_name}.h").write_text(header)
    (out_dir / f"{class_name}.cpp").write_text(impl)
    print(f"  wrote {class_name}.h/.cpp")


def main():
    cache = decomp_cache()
    report = parse_report()
    vtables = parse_vtables()
    for class_name in sorted(report):
        mapping = report[class_name]
        port_module(class_name, mapping, cache, vtables.get(class_name, {}))


if __name__ == "__main__":
    main()
