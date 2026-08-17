#!/usr/bin/env python3
"""Populate getModuleName/getTooltip/getRawModuleName
from decoded manifests where the source still has a placeholder
or a // Binary function: stub.

Usage:
    python3 tools/populate_module_strings.py [--dry-run]
"""
import argparse
import json
import re
from pathlib import Path

BASE = Path(__file__).parent.parent
SRC = BASE / "Oderso" / "Module" / "Modules"
MANIFEST_NAMED = BASE / "tools" / "module_manifest_named.json"
MANIFEST_FULL = BASE / "tools" / "module_manifest_full.json"
C9AA0 = BASE / "tools" / "c9aa0_decoded.json"


def is_good_name(s: str) -> bool:
    """Accept a display name if it has at least one letter and is not a raw module id."""
    if not s:
        return False
    if re.fullmatch(r"Module_180[0-9a-fA-F]+", s):
        return False
    return bool(re.search(r"[A-Za-z]", s))


def is_good_tooltip(s: str) -> bool:
    """Accept a tooltip/description if it has at least one letter and is not a raw module id."""
    if not s:
        return False
    if re.fullmatch(r"Module_180[0-9a-fA-F]+", s):
        return False
    # strip stray nulls/control before deciding
    cleaned = re.sub(r"[\x00-\x08\x0b\x0c\x0e-\x1f\x7f]", "", s).strip()
    return bool(re.search(r"[A-Za-z]", cleaned))


def clean_tooltip(s: str) -> str:
    """Return the tooltip with control characters and excessive whitespace removed."""
    s = re.sub(r"[\x00-\x08\x0b\x0c\x0e-\x1f\x7f]", "", s)
    return s.strip()


def load_manifests():
    by_file = {}

    # c9aa0_decoded is the most reliable source for name/tooltip.
    if C9AA0.exists():
        c9 = json.loads(C9AA0.read_text(errors="ignore"))
        for key, entry in c9.items():
            if not key.startswith("Module_"):
                continue
            name = entry.get("name", "") or ""
            tooltip = entry.get("tooltip", "") or ""
            by_file[key] = (
                name if is_good_name(name) else "",
                clean_tooltip(tooltip) if is_good_tooltip(tooltip) else "",
            )

    # module_manifest_full has decoded name/tooltip keyed by class_name.
    full = json.loads(MANIFEST_FULL.read_text(errors="ignore"))
    for entry in full:
        cls = entry.get("class_name", "")
        if not cls or not cls.startswith("Module_"):
            continue
        name = entry.get("name", "") or ""
        tooltip = entry.get("tooltip", "") or ""
        old_name, old_tooltip = by_file.get(cls, ("", ""))
        by_file[cls] = (
            old_name or (name if is_good_name(name) else ""),
            old_tooltip or (clean_tooltip(tooltip) if is_good_tooltip(tooltip) else ""),
        )

    # module_manifest_named maps constructor rva to class_name/description.
    named = json.loads(MANIFEST_NAMED.read_text(errors="ignore"))
    for entry in named:
        ctor = entry.get("constructor", "")
        m = re.search(r"0x(180[0-9a-fA-F]+)", ctor)
        if not m:
            continue
        rva = m.group(1)
        cls = f"Module_{rva}"
        name = entry.get("class_name", "") or ""
        desc = entry.get("description", "") or ""
        old_name, old_tooltip = by_file.get(cls, ("", ""))
        by_file[cls] = (
            old_name or (name if is_good_name(name) else ""),
            old_tooltip or (clean_tooltip(desc) if is_good_tooltip(desc) else ""),
        )
        # also allow lookup by the display name itself (e.g. ChunkBorders)
        if is_good_name(name):
            by_file.setdefault(name, (name, ""))

    return by_file


def escape_cstr(s: str) -> str:
    return s.replace("\\", "\\\\").replace('"', '\\"')


def process_file(fp: Path, by_file: dict, dry_run: bool = False) -> dict:
    stem = fp.stem
    mapping = by_file.get(stem)
    if not mapping:
        return {}
    display_name, tooltip_desc = mapping

    original = fp.read_text(errors="ignore")
    text = original
    changed = {}

    # getModuleName: replace placeholder "Module_..." or a // Binary function: stub
    if display_name:
        pattern = re.compile(
            r"(std::string\s+(?:\w+::)?getModuleName\s*\(\)\s*\{)\s*(?://\s*Binary function:[^\n]*\n\s*)?(return\s+\"Module_[^\"]+\"\s*;)\s*\}",
            re.MULTILINE | re.DOTALL,
        )
        if pattern.search(text):
            repl = rf'\1\n\treturn "{escape_cstr(display_name)}";\n}}'
            text, n = pattern.subn(repl, text, count=1)
            if n:
                changed["getModuleName"] = display_name

    # getRawModuleName: keep it in sync with getModuleName if it is still a stub
    raw_pattern = re.compile(
        r"(std::string\s+(?:\w+::)?getRawModuleName\s*\(\)\s*\{)\s*(?://\s*Binary function:[^\n]*\n\s*)?return[^;]+;\s*\}",
        re.MULTILINE | re.DOTALL,
    )
    if raw_pattern.search(text):
        text, n = raw_pattern.subn(
            r'\1\n\treturn getModuleName();\n}',
            text,
            count=1,
        )
        if n:
            changed["getRawModuleName"] = "getModuleName()"

    # getTooltip: replace // Binary function: stub with a literal
    tooltip_pattern = re.compile(
        r"(std::string\s+(?:\w+::)?getTooltip\s*\(\)\s*\{)\s*(?://\s*Binary function:[^\n]*\n\s*)?(return\s+\"[^\"]*\"\s*;)\s*\}",
        re.MULTILINE | re.DOTALL,
    )
    if tooltip_pattern.search(text):
        if tooltip_desc:
            repl = rf'\1\n\t// Manifest tooltip\n\treturn "{escape_cstr(tooltip_desc)}";\n}}'
            text, n = tooltip_pattern.subn(repl, text, count=1)
        else:
            # No tooltip in manifest; clear the stub to an empty string.
            repl = r'\1\n\t// No manifest description\n\treturn "";\n}'
            text, n = tooltip_pattern.subn(repl, text, count=1)
        if n:
            changed["getTooltip"] = tooltip_desc if tooltip_desc else "(empty)"

    if text != original and not dry_run:
        fp.write_text(text)
    return changed


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--dry-run", action="store_true")
    args = parser.parse_args()

    by_file = load_manifests()
    total = {}
    for fp in sorted(SRC.glob("*.cpp")):
        changed = process_file(fp, by_file, args.dry_run)
        if changed:
            if args.dry_run:
                print(f"[DRY] {fp.name}: {changed}")
            else:
                print(f"{fp.name}: {changed}")
            for k in changed:
                total[k] = total.get(k, 0) + 1

    print("\nSummary:", total)


if __name__ == "__main__":
    main()
