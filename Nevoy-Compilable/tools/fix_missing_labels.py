#!/usr/bin/env python3
"""Add stub labels for any goto target that is missing within a function.

This works around a RetDec artifact where some control-flow labels are
referenced but never emitted in the decompiled output."""

import re
from pathlib import Path

ROOT = Path(__file__).parent.parent.resolve()
SRC_DIR = ROOT / "src"

FUNC_START_RE = re.compile(r'^(static\s+)?(?:int64_t|int32_t|void)\s+(func(?:tion|_0x)[^\(]+\([^)]*\)\s*\{)')


def find_functions(lines):
    """Yield (start_line, end_line_exclusive) for top-level functions by brace counting."""
    i = 0
    n = len(lines)
    while i < n:
        m = FUNC_START_RE.match(lines[i])
        if m:
            start = i
            depth = lines[i].count('{') - lines[i].count('}')
            i += 1
            while i < n and depth > 0:
                depth += lines[i].count('{') - lines[i].count('}')
                i += 1
            yield start, i
        else:
            i += 1


def fix_file(path: Path):
    text = path.read_text(encoding="utf-8", errors="replace")
    lines = text.splitlines(keepends=True)
    changed = False
    for start, end in find_functions(lines):
        body = ''.join(lines[start:end])
        gotos = set(re.findall(r'goto\s+(lab_0x[0-9a-fA-F]+)\s*;', body))
        labels = set(re.findall(r'(lab_0x[0-9a-fA-F_]+)\s*:', body))
        if not gotos:
            continue
        missing = gotos - labels
        if not missing:
            continue

        # For each missing goto target, try to find a suffixed label in the same function.
        # e.g. goto lab_0x1234;  ->  lab_0x1234 exists as lab_0x1234_2
        renames = {}
        stubs = set()
        for lab in missing:
            candidates = [l for l in labels if l == lab or l.startswith(lab + '_')]
            if candidates:
                # pick the candidate with the shortest full name
                renames[lab] = min(candidates, key=len)
            else:
                stubs.add(lab)

        # apply renames within this function's text block
        func_lines = lines[start:end]
        for old, new in renames.items():
            pattern = re.compile(rf'goto\s+{re.escape(old)}\s*;')
            for i in range(start, end):
                func_lines[i - start], n = pattern.subn(f'goto {new};', func_lines[i - start])
                if n:
                    changed = True
        # replace block
        lines[start:end] = func_lines

        # add stub labels for any still-missing targets
        if stubs:
            insert_idx = end - 1
            stub_lines = []
            for lab in sorted(stubs):
                stub_lines.append(f'  {lab}: return 0;\n')
            stub_lines.append('\n')
            lines[insert_idx:insert_idx] = stub_lines
            changed = True
    if changed:
        path.write_text(''.join(lines))
        print(f'Fixed {path}')


def main():
    for path in SRC_DIR.rglob('*.c'):
        fix_file(path)
    print('Done.')


if __name__ == '__main__':
    main()
