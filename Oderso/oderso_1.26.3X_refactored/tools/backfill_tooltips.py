#!/usr/bin/env python3
"""Backfill empty or unusable getTooltip() methods with the IModule
constructor tooltip string (the third argument).

Usage:
    python3 tools/backfill_tooltips.py [--dry-run]
"""
import argparse
import re
from pathlib import Path

BASE = Path(__file__).parent.parent
SRC = BASE / "Oderso" / "Module" / "Modules"


def is_good_tooltip(s: str) -> bool:
    if not s:
        return False
    if re.fullmatch(r"Module_180[0-9a-fA-F]+", s):
        return False
    cleaned = re.sub(r"[\x00-\x08\x0b\x0c\x0e-\x1f\x7f]", "", s).strip()
    return bool(re.search(r"[A-Za-z]", cleaned))


def escape_cstr(s: str) -> str:
    return s.replace("\\", "\\\\").replace('"', '\\"')


def process_file(fp: Path, dry_run: bool = False) -> bool:
    original = fp.read_text(errors="ignore")
    text = original

    ctor_match = re.search(r"IModule\([^)]*,\s*\"([^\"]+)\"\s*\)", text)
    if not ctor_match:
        return False
    fallback = ctor_match.group(1)
    if not is_good_tooltip(fallback):
        return False
    fallback = re.sub(r"[\x00-\x08\x0b\x0c\x0e-\x1f\x7f]", "", fallback).strip()

    # Match getTooltip method body that returns a (possibly empty) string literal.
    pattern = re.compile(
        r"(std::string\s+(?:\w+::)?getTooltip\s*\(\)\s*\{)\s*(?://[^\n]*\n\s*)*return\s+\"([^\"]*)\"\s*;\s*\}",
        re.MULTILINE | re.DOTALL,
    )

    def repl(m):
        existing = m.group(2)
        cleaned = re.sub(r"[\x00-\x08\x0b\x0c\x0e-\x1f\x7f]", "", existing).strip()
        if len(cleaned) >= 4 and re.search(r"[A-Za-z]", cleaned):
            return m.group(0)  # leave existing good tooltip alone
        return f'{m.group(1)}\n\t// Constructor tooltip fallback\n\treturn "{escape_cstr(fallback)}";\n}}'

    new_text, n = pattern.subn(repl, text)
    if n == 0 or new_text == original:
        return False

    if not dry_run:
        fp.write_text(new_text)
    print(f"{'[DRY] ' if dry_run else ''}{fp.name}: {fallback}")
    return True


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--dry-run", action="store_true")
    args = parser.parse_args()

    count = 0
    for fp in sorted(SRC.glob("*.cpp")):
        if process_file(fp, args.dry_run):
            count += 1
    print(f"\nBackfilled {count} file(s).")


if __name__ == "__main__":
    main()
