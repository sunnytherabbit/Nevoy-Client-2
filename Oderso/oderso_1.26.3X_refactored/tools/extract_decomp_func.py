#!/usr/bin/env python3
"""Extract a single Ghidra-decompiled function from the full decomp dump.

Usage:
    python3 tools/extract_decomp_func.py <func_addr_or_name>

<func_addr_or_name> can be:
    0x180121d00
    180121d00
    func_0x180121d00

Output is written to stdout as the C-like decompiled body.
"""
import re
import sys
from pathlib import Path

DECOMP = Path(__file__).parent.parent.parent.parent / "Oderso" / "ghidra_decompiled_1.26.3X_new.c"


def normalise(addr: str) -> str:
    addr = addr.strip().lower()
    addr = addr.removeprefix("func_")
    if not addr.startswith("0x"):
        addr = "0x" + addr
    return addr


def extract(addr: str) -> str:
    target = normalise(addr)
    if not DECOMP.exists():
        return f"# Decomp file not found: {DECOMP}"

    marker = f"// Function: func_{target}"
    output = []
    in_func = False
    with DECOMP.open("r", errors="ignore") as f:
        for line in f:
            if in_func:
                if line.startswith("// Function: "):
                    break
                output.append(line.rstrip("\n"))
            else:
                if line.rstrip("\n") == marker:
                    in_func = True

    if not output:
        return f"# Function {target} not found in {DECOMP}"
    return "\n".join(output).rstrip("\n") + "\n"


if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: extract_decomp_func.py <0x...|func_0x...|name>", file=sys.stderr)
        sys.exit(1)
    print(extract(sys.argv[1]), end="")
