#!/usr/bin/env python3
"""Apply automated fixes for common RetDec artifacts that prevent compilation:

1. Replace *NULL = expr; with ((void)(expr)); to avoid void assignment errors.
2. Replace 'break;' statements that are not inside a loop/switch with 'return 0;'.
3. Remove stub labels that duplicate existing labels.
"""

import re
from pathlib import Path

ROOT = Path(__file__).parent.parent.resolve()
SRC_DIR = ROOT / "src"

FUNC_START_RE = re.compile(r'^(?:int64_t|int32_t|void)\s+(?:func|function)_[0-9a-zA-Z_]+\([^)]*\)\s*\{')


def is_loop_block_header(line):
    """Return True if the text leading up to a '{' belongs to for/while/switch/do."""
    # remove C++-style comments and whitespace, keep last part before {
    line = re.sub(r'//.*', '', line)
    # match do/while/for/switch as the last control keyword before the brace
    return re.search(r'\b(do|for|while|switch)\b[^;{}]*$', line) is not None


def prev_nonblank_line(lines, idx):
    i = idx - 1
    while i >= 0:
        if lines[i].strip():
            return lines[i]
        i -= 1
    return ''


def fix_null_assignments(text):
    return re.sub(r'\*NULL\s*=\s*([^;]+);', r'((void)(\1));', text)


def fix_breaks(text):
    lines = text.splitlines(keepends=True)
    stack = [False]  # in_loop flag for each brace depth; top is current
    prev_line = ''
    out = []
    for i, raw_line in enumerate(lines):
        line = raw_line.rstrip('\n\r')
        stripped = line.strip()
        # detect top-level function starts to reset stack
        if FUNC_START_RE.match(stripped):
            stack = [False]

        # count braces; for each opening brace determine if it starts loop/switch
        open_count = line.count('{')
        close_count = line.count('}')
        # heuristic: if line contains '{' determine if loop/switch
        if open_count > 0:
            # build header text from previous nonblank line + current line up to first {
            header = prev_nonblank_line(lines, i).rstrip('\n\r') + line
            for _ in range(open_count):
                in_loop = is_loop_block_header(header)
                stack.append(in_loop or stack[-1])
        for _ in range(close_count):
            if len(stack) > 1:
                stack.pop()

        # replace invalid break
        if re.match(r'break\s*;', stripped) and not stack[-1]:
            raw_line = re.sub(r'break\s*;', 'return 0;', raw_line)

        out.append(raw_line)
        if stripped:
            prev_line = line
    return ''.join(out)


def dedup_labels(text):
    """Within each function, keep the first definition of a label; remove subsequent duplicates."""
    lines = text.splitlines(keepends=True)
    i = 0
    n = len(lines)
    out_lines = []
    while i < n:
        line = lines[i]
        out_lines.append(line)
        if FUNC_START_RE.match(line.strip()):
            # parse function body to find labels
            start = len(out_lines) - 1
            depth = line.count('{') - line.count('}')
            i += 1
            body = []
            labels_seen = set()
            while i < n and depth > 0:
                l = lines[i]
                depth += l.count('{') - l.count('}')
                m = re.match(r'\s*(lab_0x[0-9a-fA-F_]+)\s*:', l)
                if m:
                    lab = m.group(1)
                    if lab in labels_seen:
                        # drop this line and any immediately following return 0; stub
                        i += 1
                        if i < n and re.match(r'\s*return\s+0\s*;', lines[i].strip()):
                            i += 1
                        continue
                    labels_seen.add(lab)
                body.append(l)
                i += 1
            out_lines.extend(body)
        else:
            i += 1
    return ''.join(out_lines)


def fix_file(path: Path):
    text = path.read_text(encoding="utf-8", errors="replace")
    text = fix_null_assignments(text)
    text = fix_breaks(text)
    text = dedup_labels(text)
    path.write_text(text)


def main():
    for path in SRC_DIR.rglob('*.c'):
        fix_file(path)
    print('Done.')


if __name__ == '__main__':
    main()
