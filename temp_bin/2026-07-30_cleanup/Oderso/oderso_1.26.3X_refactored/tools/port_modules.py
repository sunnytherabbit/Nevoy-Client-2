#!/usr/bin/env python3
"""Port the 7 selected portable modules from the decompiled C into C++ stubs.

This tool reads the module vtables, the portable_modules_report.md mapping,
and the constructor stores to generate source-like .h/.cpp files.
"""
import re
import json
import os
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent
REPORT = BASE / "portable_modules_report.md"
DECOMP = BASE.parent / "ghidra_decompiled_1.26.3X.c"

def read_function_body(func_name):
    with open(DECOMP, "r", encoding="utf-8", errors="ignore") as f:
        content = f.read()
    pat = r"// Function:\s*" + re.escape(func_name) + r"\b(.*?)\n(?=// Function:|\Z)"
    m = re.search(pat, content, re.S)
    return m.group(1) if m else ""


def parse_report():
    with open(REPORT, "r", encoding="utf-8", errors="ignore") as f:
        content = f.read()
    # split by module sections
    mods = re.split(r'\n## `', content)
    out = {}
    for block in mods[1:]:
        mname = re.match(r'(\S+)', block).group(1)
        # overridden slots list
        slots = re.search(r'- Overridden slots: (.+)', block)
        overrides = []
        if slots:
            overrides = [s.strip() for s in slots.group(1).split(',')]
        # portable mappings
        mapping = {}
        for line in block.splitlines():
            mm = re.match(r"\s+- `([^`]+)` -> `([^`]+)`", line)
            if mm:
                mapping[mm.group(1)] = mm.group(2)
        out[mname] = {"overrides": overrides, "mapping": mapping}
    return out


def extract_stores(ctor_body):
    stores = {}
    for line in ctor_body.splitlines():
        line = line.strip()
        if not line or line.startswith('/*'):
            continue
        # *(type*)(param_1 + 0xNNN) = value;
        m = re.search(r'\(\s*(?:[^)]+\s*)\)\s*\(\s*(?:\(longlong\))?\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*([^;]+);', line)
        if m:
            off = int(m.group(1), 0)
            stores[off] = m.group(2).strip()
        # param_1[0xNN] = value;
        m = re.search(r'param_1\[(0x[0-9a-fA-F]+|\d+)\]\s*=\s*([^;]+);', line)
        if m:
            idx = int(m.group(1), 0)
            stores[idx * 8] = m.group(2).strip()
    return stores


def guess_type_from_offset(off, val):
    # Naive heuristics based on size/alignment
    if '0x14c' in str(off) or '0x160' in str(off):
        return "bool"
    if off % 8 == 0 and not any(t in val for t in ['\'', '"']) and ('0' <= val[0] <= '9' or val[0] == '-'):
        return "__int64"
    return "int"


def port_module(class_name, ctor, report):
    print(f"Porting {class_name}...")
    ctor_body = read_function_body(ctor)
    stores = extract_stores(ctor_body)

    overrides = report.get("mapping", {})

    # Build header
    header = f"""#pragma once
#ifndef ODERSO_MODULE_{class_name.upper()}_H
#define ODERSO_MODULE_{class_name.upper()}_H

#include "../../../Horion/Module/Modules/Module.h"

class {class_name} : public IModule {{
public:
	{class_name}();
	~{class_name}() {{}}

"""
    for name, func in overrides.items():
        if name == "destructor":
            continue
        if name in ("getModuleName", "getRawModuleName", "getKeybind"):
            header += f"\tvirtual const char* {name}() override;\n"
        elif name == "getTooltip":
            header += f"\tvirtual std::string {name}() override;\n"
        elif name == "onEnable" or name == "onDisable":
            header += f"\tvirtual void {name}() override;\n"
        elif name == "onPreRender" or name == "onPostRender" or name == "onLevelRender":
            header += f"\tvirtual void {name}(C_MinecraftUIRenderContext* renderCtx) override;\n"
        elif name == "onTick":
            header += f"\tvirtual void {name}(C_GameMode*) override;\n"
        elif name == "onAttack":
            header += f"\tvirtual void {name}(int attackButton, bool isDown, bool* cancel = nullptr) override;\n"
        elif name == "onMove":
            header += f"\tvirtual void {name}(C_MoveInputHandler*) override;\n"
        elif name == "onSendPacket":
            header += f"\tvirtual void {name}(C_Packet*) override;\n"
        elif name == "isFlashMode" or name == "isEnabled" or name == "allowAutoStart":
            header += f"\tvirtual bool {name}() override;\n"
        elif name == "setEnabled" or name == "setKeybind" or name == "toggle":
            header += f"\tvirtual void {name}(bool enabled = false) override;\n"
        elif name == "getKeybind":
            header += f"\tvirtual int {name}() override;\n"
        elif name == "callWhenDisabled":
            header += f"\tvirtual void {name}(C_Entity* entity = nullptr) override;\n"
        else:
            header += f"\t// TODO: port {name} -> {func}\n"

    header += "\nprivate:\n"
    for off, val in sorted(stores.items()):
        if off >= 0x148:
            t = guess_type_from_offset(off, val)
            header += f"\t{t} field_0x{off:x} = 0;\n"
    header += "};\n\n#endif\n"

    # Build cpp
    impl = f"""#include "{class_name}.h"

{class_name}::{class_name}() : IModule(0, Category::COMBAT, "{class_name}") {{
}}

const char* {class_name}::getModuleName() {{ return "{class_name}"; }}

"""
    for name, func in overrides.items():
        if name in ("getModuleName", "destructor"):
            continue
        impl += f"// {name} -> {func}\n"
        if name in ("onEnable", "onDisable"):
            impl += f"void {class_name}::{name}() {{\n\t// TODO: implement {func}\n}}\n\n"
        elif name in ("onPreRender", "onPostRender", "onLevelRender"):
            impl += f"void {class_name}::{name}(C_MinecraftUIRenderContext* renderCtx) {{\n\t// TODO: implement {func}\n}}\n\n"
        elif name == "onTick":
            impl += f"void {class_name}::{name}(C_GameMode*) {{\n\t// TODO: implement {func}\n}}\n\n"
        elif name == "onAttack":
            impl += f"void {class_name}::{name}(int attackButton, bool isDown, bool* cancel) {{\n\t// TODO: implement {func}\n}}\n\n"
        elif name == "onMove":
            impl += f"void {class_name}::{name}(C_MoveInputHandler*) {{\n\t// TODO: implement {func}\n}}\n\n"
        elif name == "onSendPacket":
            impl += f"void {class_name}::{name}(C_Packet*) {{\n\t// TODO: implement {func}\n}}\n\n"
        elif name in ("isFlashMode", "isEnabled", "allowAutoStart"):
            impl += f"bool {class_name}::{name}() {{\n\t// TODO: implement {func}\n\treturn false;\n}}\n\n"
        elif name == "callWhenDisabled":
            impl += f"void {class_name}::{name}(C_Entity* entity) {{\n\t// TODO: implement {func}\n}}\n\n"
        else:
            impl += f"// TODO: implement {name} from {func}\n\n"

    (BASE / "Oderso" / "Module" / "Modules" / f"{class_name}.h").write_text(header)
    (BASE / "Oderso" / "Module" / "Modules" / f"{class_name}.cpp").write_text(impl)
    print(f"  wrote {class_name}.h/.cpp")


def main():
    report = parse_report()
    modules = {
        "Module_18031e130": "func_0x18031e130",
        "Module_18020d4c0": "func_0x18020d4c0",
        "Module_18020a2d0": "func_0x18020a2d0",
        "Module_180193330": "func_0x180193330",
        "Module_180412630": "func_0x180412630",
        "Module_1802ce320": "func_0x1802ce320",
    }
    for class_name, ctor in modules.items():
        port_module(class_name, ctor, report.get(class_name, {}))


if __name__ == "__main__":
    main()
