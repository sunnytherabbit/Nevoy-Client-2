#!/usr/bin/env python3
"""Append vtable entries for modules missing from module_vtables_full.txt."""
import re
import struct
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import extract_module_vtable as ev

BASE = Path(__file__).resolve().parent.parent
VTABLES = BASE / "tools" / "module_vtables_full.txt"
MANIFEST = BASE / "tools" / "module_manifest_full.json"


def main():
    manifest = json.loads(MANIFEST.read_text())
    existing_text = VTABLES.read_text(errors="ignore")
    existing = set(re.findall(r"Module:\s+(\S+)", existing_text))

    pe = ev.parse_pe()
    starts = ev.index_decomp()

    with open(VTABLES, "a", errors="ignore") as out:
        for mod in manifest:
            cls = mod["class_name"]
            if cls in existing:
                continue
            ctor = mod.get("constructor")
            if not ctor:
                continue
            ctor_body = ev.extract_function(ctor, starts)
            if ctor_body is None:
                continue
            vtable_va = ev.find_vtable_ptr(ctor_body)
            if vtable_va is None:
                continue
            fo = ev.va_to_fileoff(pe, vtable_va)
            if fo is None:
                continue

            out.write(f"\n===== {ctor} =====\n")
            out.write(f"Module: {cls}\n")
            out.write(f"Vtable VA: {hex(vtable_va)} -> file offset {hex(fo)}\n\n")

            data = pe["data"]
            for i in range(40):
                off = fo + i * 8
                if off + 8 > len(data):
                    break
                ptr = struct.unpack_from("<Q", data, off)[0]
                if ptr == 0:
                    continue
                func = f"func_0x{ptr:x}"
                slot_name = ev.IMODULE_SLOTS[i] if i < len(ev.IMODULE_SLOTS) else f"slot_{i}"
                summary = ev.get_summary(func)
                func_calls = len(summary.get("func_calls", []))
                strings = len(summary.get("s_symbols", []))
                dats = len(summary.get("dat_refs", []))
                win_apis = len(summary.get("win_apis", []))
                is_likely_overridden = (func_calls > 5 or strings > 0 or dats > 0 or win_apis > 0)
                marker = "  <-- override?" if is_likely_overridden and slot_name != "destructor" else ""
                out.write(f"[{i:2d}] {slot_name:15s} {func}  calls={func_calls:3d} strings={strings:3d} dat={dats:3d} winapi={win_apis:3d}{marker}\n")

    print("Appended missing vtables.")


if __name__ == "__main__":
    main()
