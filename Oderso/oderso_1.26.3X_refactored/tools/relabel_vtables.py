#!/usr/bin/env python3
"""Relabel slot names in module_vtables_full.txt to match the canonical SLOT_NAMES."""
import re
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent
VTABLES = BASE / "tools" / "module_vtables_full.txt"

from vtable_config import SLOT_NAMES


def main():
    text = VTABLES.read_text(errors="ignore")
    lines = text.splitlines()
    out = []
    for line in lines:
        m = re.match(r"(\[\s*\d+\]\s+)(\S+)(\s+func_0x[0-9a-fA-F]+.*)", line)
        if m:
            prefix = m.group(1)
            old_name = m.group(2)
            suffix = m.group(3)
            slot = int(re.search(r"\d+", prefix).group())
            new_name = SLOT_NAMES[slot] if slot < len(SLOT_NAMES) else old_name
            out.append(f"{prefix}{new_name:15s} {suffix}")
        else:
            out.append(line)
    VTABLES.write_text("\n".join(out) + "\n")
    print(f"Relabeled {VTABLES} using {len(SLOT_NAMES)} canonical slot names.")


if __name__ == "__main__":
    main()
