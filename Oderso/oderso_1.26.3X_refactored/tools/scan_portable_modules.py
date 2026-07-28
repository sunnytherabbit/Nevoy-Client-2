#!/usr/bin/env python3
"""Find stub modules whose overridden vtable methods are present in the decompiled C file."""
import re, struct, json
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent
DLL = BASE / ".." / "1.26.3X.dll"
DECOMP = BASE / ".." / "ghidra_decompiled_1.26.3X.c"
FUNC_SUMMARY = BASE / "tools" / "function_summary.json"
MANIFEST = BASE / "tools" / "module_manifest_full.json"
MODULE_DIR = BASE / "Oderso" / "Module" / "Modules"

IMODULE_BASE_VTABLE_VA = 0x1806bb7a0
SLOTS = [
    "destructor", "getModuleName", "getRawModuleName", "getKeybind", "setKeybind",
    "allowAutoStart", "onTick", "onKeyUpdate", "onEnable", "onDisable",
    "onAttack", "onPreRender", "onPostRender", "onLevelRender", "onMove",
    "onLoadConfig", "onSaveConfig", "isFlashMode", "setEnabled", "toggle",
    "isEnabled", "onSendPacket", "callWhenDisabled",
]


def parse_pe():
    with open(DLL, "rb") as f:
        data = f.read()
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    opt_off = e_lfanew + 24
    image_base = struct.unpack_from("<Q", data, opt_off + 0x18)[0]
    sec_table = opt_off + struct.unpack_from("<H", data, e_lfanew + 20)[0]
    num_sections = struct.unpack_from("<H", data, e_lfanew + 6)[0]
    sections = {}
    for i in range(num_sections):
        off = sec_table + i * 40
        name = data[off : off + 8].rstrip(b"\x00").decode("ascii", errors="ignore")
        vsize = struct.unpack_from("<I", data, off + 8)[0]
        vaddr = struct.unpack_from("<I", data, off + 12)[0]
        raw_size = struct.unpack_from("<I", data, off + 16)[0]
        raw_off = struct.unpack_from("<I", data, off + 20)[0]
        sections[name] = {"vaddr": vaddr, "vsize": vsize, "raw_off": raw_off, "raw_size": raw_size}
    return {"image_base": image_base, "sections": sections, "data": data}


def va_to_fileoff(pe, va):
    rva = va - pe["image_base"]
    for sec in pe["sections"].values():
        if sec["vaddr"] <= rva < sec["vaddr"] + sec["vsize"]:
            return sec["raw_off"] + (rva - sec["vaddr"])
    return None


def read_vtable(pe, va, slots=30):
    fo = va_to_fileoff(pe, va)
    if fo is None:
        return []
    data = pe["data"]
    return [struct.unpack_from("<Q", data, fo + i * 8)[0] for i in range(slots)]


def index_decomp():
    funcs = set()
    with open(DECOMP, "r", errors="ignore") as f:
        for line in f:
            m = re.match(r"// Function: (func_0x[0-9a-fA-F]+)", line)
            if m:
                funcs.add(m.group(1))
    return funcs


def is_stub(cpp: Path) -> bool:
    text = cpp.read_text(encoding="utf-8", errors="ignore")
    methods = re.findall(r"\b(\w+)::(?!~|\w+\(\)|getModuleName\b)(\w+)\s*\(", text)
    return not methods


def main():
    pe = parse_pe()
    decomp_funcs = index_decomp()
    with open(MANIFEST, "r") as f:
        manifest = json.load(f)
    base = read_vtable(pe, IMODULE_BASE_VTABLE_VA, len(SLOTS))
    base_set = set(base)
    empty_funcs = {0x18008c310, 0x18008cb60}  # common empty/ret thunks

    def is_real_override(ptr):
        return ptr not in base_set and ptr not in empty_funcs

    results = []
    for m in manifest:
        cls = m.get("class_name")
        cpp = MODULE_DIR / f"{cls}.cpp"
        if not cpp.exists():
            continue
        if not is_stub(cpp):
            continue
        ctor = m.get("constructor", "")
        # Find constructor in decompiled C to get vtable pointer
        # (we can also read the function_summary for the constructor to find the vtable, but easiest is to parse the C)
        body = ""
        with open(DECOMP, "r", errors="ignore") as f:
            in_func = False
            for line in f:
                if f"// Function: {ctor}" in line:
                    in_func = True
                    body = ""
                    continue
                if in_func and re.match(r"// Function: ", line):
                    break
                if in_func:
                    body += line
        m2 = re.search(r"\*\w+\s*=\s*&(PTR_LAB_|PTR_FUN_|PTR_|LAB_)([0-9a-fA-F]+)", body)
        if not m2:
            continue
        vtable_va = int(m2.group(2), 16)
        vtable = read_vtable(pe, vtable_va, len(SLOTS))
        if not vtable:
            continue
        portable = []
        overriden = []
        for i, (slot_base, slot_mod) in enumerate(zip(base, vtable)):
            if i >= len(SLOTS):
                break
            if slot_mod != slot_base and is_real_override(slot_mod):
                func = f"func_0x{slot_mod:x}"
                overriden.append(SLOTS[i])
                if func in decomp_funcs:
                    portable.append((SLOTS[i], func))
        if portable:
            results.append({
                "class": cls,
                "name": m.get("name") or "",
                "category": m.get("category_name") or "CUSTOM",
                "overridden": overriden,
                "portable": portable,
            })

    results.sort(key=lambda x: len(x["portable"]), reverse=True)
    out = BASE / "portable_modules_report.md"
    lines = ["# Modules with decompiled overridden methods", ""]
    for r in results:
        lines.append(f"## `{r['class']}` — {r['name'] or 'unnamed'} ({r['category']})")
        lines.append(f"- Overridden slots: {', '.join(r['overridden'])}")
        lines.append(f"- Portable (in ghidra_decompiled_1.26.3X.c):")
        for slot, func in r["portable"]:
            lines.append(f"  - `{slot}` -> `{func}`")
        lines.append("")
    out.write_text("\n".join(lines), encoding="utf-8")
    print(f"Wrote {out}")
    print(f"Found {len(results)} modules with at least one portable overridden method")


if __name__ == "__main__":
    main()
