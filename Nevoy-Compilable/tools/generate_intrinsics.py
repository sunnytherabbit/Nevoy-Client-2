#!/usr/bin/env python3
"""Generate include/nevoy_intrinsics.h with stub implementations for all
__asm_* pseudo-functions used in the decompiled source."""

import re
from pathlib import Path

ROOT = Path(__file__).parent.parent.resolve()
SRC_DIR = ROOT / "src"
HEADER = ROOT / "include" / "nevoy_intrinsics.h"

# Matches __asm_name(arg, arg, ...)
ASM_CALL_RE = re.compile(r'(__asm_[A-Za-z0-9_]+)\s*\(')


def iter_asm_calls(text):
    """Yield (name, arg_count) for each __asm_NAME call in text."""
    for m in ASM_CALL_RE.finditer(text):
        name = m.group(1)
        start = m.end()
        # find matching close paren
        depth = 1
        i = start
        while i < len(text) and depth > 0:
            if text[i] == '(':
                depth += 1
            elif text[i] == ')':
                depth -= 1
            i += 1
        arg_text = text[start:i-1]
        # count top-level commas
        depth = 0
        count = 0
        for ch in arg_text:
            if ch == '(':
                depth += 1
            elif ch == ')':
                depth -= 1
            elif ch == ',' and depth == 0:
                count += 1
        # empty args means 0 args
        arg_count = count + 1 if arg_text.strip() else 0
        yield name, arg_count


def collect_asm_uses():
    uses = {}
    for path in SRC_DIR.rglob("*.c"):
        text = path.read_text(encoding="utf-8", errors="replace")
        for name, arg_count in iter_asm_calls(text):
            if name not in uses:
                uses[name] = {"max": arg_count, "counts": set()}
            uses[name]["counts"].add(arg_count)
            uses[name]["max"] = max(uses[name]["max"], arg_count)
    return uses


def category(name):
    n = name.lower()
    if 'memcpy' in n:
        return 'memcpy'
    if 'memset' in n:
        return 'memset'
    if 'cpuid' in n:
        return 'cpuid'
    if n in ('__asm_in', '__asm_in_82'):
        return 'in'
    if n in ('__asm_out', '__asm_out_81'):
        return 'out'
    if n in ('__asm_int3', '__asm_int_3'):
        return 'int3'
    if n == '__asm_int' or n == '__asm_int_80':
        return 'int'
    if 'fnclex' in n:
        return 'fnclex'
    if 'ldmxcsr' in n:
        return 'ldmxcsr'
    if 'stmxcsr' in n:
        return 'stmxcsr'
    if 'rdtsc' in n:
        return 'rdtsc'
    if 'fcomi' in n or 'fucomi' in n or 'comis' in n or 'ucomis' in n:
        return 'compare'
    if 'prefetch' in n:
        return 'prefetch'
    if 'pause' in n:
        return 'pause'
    if 'cli' in n or 'sti' in n:
        return 'void'
    return 'generic'


def signature(name, max_args, cat):
    # Every stub returns int64_t so that calls in return expressions compile.
    # Memory helpers keep pointer/size args for type safety; everything else uses
    # the observed maximum argument count with int64_t parameters.
    if cat == 'memcpy':
        if max_args == 3:
            return f'static inline int64_t {name}(void *dest, const void *src, size_t n) {{ if (n) memmove(dest, src, n); return 0; }}'
        if max_args == 2:
            return f'static inline int64_t {name}(void *dest, const void *src) {{ return 0; }}'
        return f'static inline int64_t {name}(void) {{ return 0; }}'
    if cat == 'memset':
        if max_args == 3:
            return f'static inline int64_t {name}(void *dest, int c, size_t n) {{ if (n) memset(dest, c, n); return 0; }}'
        if max_args == 2:
            return f'static inline int64_t {name}(void *dest, int c) {{ return 0; }}'
        return f'static inline int64_t {name}(void) {{ return 0; }}'
    if cat == 'cpuid':
        if max_args == 1:
            return f'static inline struct cpuid_t {name}(int64_t leaf) {{ (void)leaf; struct cpuid_t r={{0,0,0,0}}; return r; }}'
        return f'static inline int64_t {name}(void) {{ return 0; }}'
    # generic: all int64_t args, return int64_t
    if max_args == 0:
        return f'static inline int64_t {name}(void) {{ return 0; }}'
    if max_args == 1:
        return f'static inline int64_t {name}(int64_t a) {{ (void)a; return 0; }}'
    if max_args == 2:
        return f'static inline int64_t {name}(int64_t a, int64_t b) {{ (void)a; (void)b; return 0; }}'
    if max_args == 3:
        return f'static inline int64_t {name}(int64_t a, int64_t b, int64_t c) {{ (void)a; (void)b; (void)c; return 0; }}'
    if max_args == 4:
        return f'static inline int64_t {name}(int64_t a, int64_t b, int64_t c, int64_t d) {{ (void)a; (void)b; (void)c; (void)d; return 0; }}'
    if max_args == 5:
        return f'static inline int64_t {name}(int64_t a, int64_t b, int64_t c, int64_t d, int64_t e) {{ (void)a; (void)b; (void)c; (void)d; (void)e; return 0; }}'
    return f'static inline int64_t {name}(void) {{ return 0; }}'


def main():
    HEADER.parent.mkdir(parents=True, exist_ok=True)
    print("Collecting __asm_* uses ...")
    uses = collect_asm_uses()
    print(f"Found {len(uses)} distinct __asm_* names.")

    lines = [
        "// Nevoy intrinsics compatibility layer",
        "// Auto-generated stub implementations for RetDec __asm_* pseudo-functions.",
        "#pragma once",
        "",
        "#include <stdint.h>",
        "#include <stddef.h>",
        "#include <string.h>",
        "",
        "struct cpuid_t { int32_t e0; int32_t e1; int32_t e2; int32_t e3; };",
        "",
    ]

    for name in sorted(uses):
        cat = category(name)
        sig = signature(name, uses[name]["max"], cat)
        lines.append(sig)
        lines.append("")

    HEADER.write_text("\n".join(lines))
    print(f"Wrote {HEADER}")


if __name__ == "__main__":
    main()
