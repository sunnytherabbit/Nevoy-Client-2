#!/usr/bin/env python3
"""Extract the vtable for a module constructor from the 1.26.3X.dll
and map the slots to IModule virtual methods."""
import re, struct, json, argparse
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent
DLL = BASE / ".." / "1.26.3X.dll"
DECOMP = BASE / ".." / "ghidra_decompiled_1.26.3X.c"
FUNC_SUMMARY = BASE / "tools" / "function_summary.json"

# IModule virtual order (extracted from Horion/Module/Modules/Module.h)
IMODULE_SLOTS = [
    "destructor",
    "getModuleName",
    "getRawModuleName",
    "getKeybind",
    "setKeybind",
    "allowAutoStart",
    "onTick",
    "onKeyUpdate",
    "onEnable",
    "onDisable",
    "onAttack",
    "onPreRender",
    "onPostRender",
    "onLevelRender",
    "onMove",
    "onLoadConfig",
    "onSaveConfig",
    "isFlashMode",
    "setEnabled",
    "toggle",
    "isEnabled",
    "onSendPacket",
    "callWhenDisabled",
]


def parse_pe():
    """Return a dict with image_base and a mapping from section name to
    (virtual_address, raw_offset, virtual_size, raw_size)."""
    with open(DLL, "rb") as f:
        data = f.read()
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    opt_off = e_lfanew + 24
    image_base = struct.unpack_from("<Q", data, opt_off + 0x18)[0]
    optional_header_size = struct.unpack_from("<H", data, e_lfanew + 20)[0]
    sec_table = opt_off + optional_header_size
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
    for name, sec in pe["sections"].items():
        if sec["vaddr"] <= rva < sec["vaddr"] + sec["vsize"]:
            return sec["raw_off"] + (rva - sec["vaddr"])
    return None


def index_decomp():
    starts = {}
    with open(DECOMP, "r", errors="ignore") as f:
        for i, line in enumerate(f, 1):
            m = re.match(r"// Function: (func_0x[0-9a-fA-F]+)", line)
            if m:
                starts[m.group(1)] = i
    return starts


def extract_function(func_name, starts):
    s = starts.get(func_name)
    if not s:
        return None
    with open(DECOMP, "r", errors="ignore") as f:
        lines = f.readlines()
    for e in range(s, len(lines)):
        if re.match(r"// Function: ", lines[e]):
            return "".join(lines[s - 1 : e])
    return "".join(lines[s - 1 :])


def find_vtable_ptr(ctor_body):
    """Find the vtable pointer assigned to the object in the constructor."""
    m = re.search(r"\*\w+\s*=\s*&(PTR_LAB_([0-9a-fA-F]+)|PTR_([0-9a-fA-F]+)|LAB_([0-9a-fA-F]+))", ctor_body)
    if not m:
        return None
    for g in (m.group(2), m.group(3), m.group(4)):
        if g:
            return int(g, 16)
    return None


def get_summary(func_name):
    try:
        with open(FUNC_SUMMARY, "r", errors="ignore") as f:
            sums = json.load(f)
        return sums.get(func_name, {})
    except Exception:
        return {}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("constructor", help="Constructor function name, e.g. func_0x180165110")
    parser.add_argument("--slots", type=int, default=30)
    parser.add_argument("--name", default="", help="Friendly module name")
    args = parser.parse_args()

    pe = parse_pe()
    starts = index_decomp()
    ctor_body = extract_function(args.constructor, starts)
    if ctor_body is None:
        print(f"Constructor {args.constructor} not found in decompiled C")
        return

    vtable_va = find_vtable_ptr(ctor_body)
    if vtable_va is None:
        print(f"Could not find vtable pointer in {args.constructor}")
        return

    fo = va_to_fileoff(pe, vtable_va)
    if fo is None:
        print(f"Could not map vtable VA {hex(vtable_va)} to file offset")
        return

    print(f"Module: {args.name or args.constructor}")
    print(f"Vtable VA: {hex(vtable_va)} -> file offset {hex(fo)}")
    print("")

    data = pe["data"]
    for i in range(args.slots):
        off = fo + i * 8
        if off + 8 > len(data):
            break
        ptr = struct.unpack_from("<Q", data, off)[0]
        if ptr == 0:
            continue
        func = f"func_0x{ptr:x}"
        slot_name = IMODULE_SLOTS[i] if i < len(IMODULE_SLOTS) else f"slot_{i}"
        summary = get_summary(func)
        func_calls = len(summary.get("func_calls", []))
        strings = len(summary.get("s_symbols", []))
        dats = len(summary.get("dat_refs", []))
        win_apis = len(summary.get("win_apis", []))
        # default functions look like stubs (very small calls / no strings)
        is_likely_overridden = (func_calls > 5 or strings > 0 or dats > 0 or win_apis > 0)
        marker = "  <-- override?" if is_likely_overridden and slot_name != "destructor" else ""
        print(f"[{i:2d}] {slot_name:15s} {func}  calls={func_calls:3d} strings={strings:3d} dat={dats:3d} winapi={win_apis:3d}{marker}")


if __name__ == "__main__":
    main()
