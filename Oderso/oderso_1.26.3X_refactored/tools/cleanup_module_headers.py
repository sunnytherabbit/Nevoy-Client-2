#!/usr/bin/env python3
"""Clean up module .h files: split multiple virtual declarations onto separate lines."""
import re
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent
MOD_DIR = BASE / "Oderso" / "Module" / "Modules"


def split_virtual_lines(txt):
    out = []
    for line in txt.splitlines():
        if line.count("virtual") > 1 and line.count("(") > 1:
            # split multiple declarations on one line into separate lines
            line = re.sub(r"(override;[ \t]+)(virtual\s+\S[\w\s\*&]+\([^)]*\)\s*override;)", r"\1\n\t\2", line)
        out.append(line)
    return "\n".join(out) + "\n"


def main():
    count = 0
    for h in sorted(MOD_DIR.glob("*.h")):
        txt = h.read_text(errors="ignore")
        new = split_virtual_lines(txt)
        if new != txt:
            h.write_text(new)
            count += 1
    print(f"Cleaned up {count} header files")


if __name__ == "__main__":
    main()
