#!/usr/bin/env python3
"""Decode and apply correct module names, tooltips, and categories from Ghidra decomp."""
import re
import struct
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent
DECOMP = BASE.parent / "ghidra_decompiled_1.26.3X.c"
MODULE_DIR = BASE / "Oderso" / "Module" / "Modules"
VTABLES = BASE / "tools" / "module_vtables_full.txt"


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


def build_decoders(cache):
    """Parse decoder functions of the form void func_...(uint *param_1) { ... }.

    Returns a dict mapping func_0x address to a list of (offset, xor_value, size)
    where offset is byte offset from param_1.
    """
    decoders = {}
    pattern = r"void\s+(func_0x\w+)\(uint \*param_1\)\s*\{(.*?)\n\}"
    for fn, body in re.findall(pattern, cache["func_0x180036160"] if False else re.split(r"\n(?=// Function: )", open(DECOMP, "r", encoding="utf-8", errors="ignore").read()), re.S):
        # This is a placeholder; the full parser will be added below.
        pass
    return decoders
