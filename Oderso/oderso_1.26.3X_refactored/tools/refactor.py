#!/usr/bin/env python3
"""
Mechanical cleanup pass for Ghidra's Pseudo-C decompilation.

This script:
  * splits ghidra_decompiled_1.26.3X.c into per-function groups,
  * normalizes Ghidra type tokens (undefined* -> uint*_t, etc.),
  * renames generic Ghidra variables by their type prefix,
  * emits a compatibility header (include/oderso/decls.h) with forward
    declarations for all functions and global data symbols.

It is intentionally NOT a semantic refactor: logical names based on usage,
control-flow cleanup, and Ghidra artifacts such as ZEXT/CONCAT/SUB must still
be handled manually or in targeted per-function passes.
"""

import re
import pathlib
import sys
import json
from typing import Dict, List, Tuple

# Paths ----------------------------------------------------------------------
INPUT_FILE = pathlib.Path('/Users/tl/Desktop/MCBE/NEVOY/Nevoy-Client-2/Oderso/ghidra_decompiled_1.26.3X.c')
OUT_DIR = pathlib.Path('/Users/tl/Desktop/MCBE/NEVOY/Nevoy-Client-2/Oderso/oderso_1.26.3X_refactored')
RAW_DIR = OUT_DIR / 'Oderso' / 'Raw'
INCLUDE_DIR = OUT_DIR / 'include' / 'oderso'

GROUP_SIZE = 250

# Functions that have already been hand-refactored elsewhere.  They are
# skipped so the mechanically-cleaned bulk does not duplicate definitions.
SKIP_FUNCTIONS = {
    'func_0x180001050',
    'func_0x180001060',
}

# Type token normalisation ----------------------------------------------------
TYPE_MAP = {
    'undefined8': 'uint64_t',
    'undefined4': 'uint32_t',
    'undefined2': 'uint16_t',
    'undefined': 'uint8_t',
    'ulonglong': 'uint64_t',
    'longlong': 'int64_t',
}

# Exact generic variable-prefix renames.  Prefixes are tried longest-first.
VAR_PREFIXES = [
    # pointer prefixes
    ('pCVar', 'pCStr'),
    ('pcVar', 'fnPtr'),
    ('pFVar', 'pFn'),
    ('pHVar', 'pHnd'),
    ('pWVar', 'pWStr'),
    ('pGVar', 'pGuid'),
    ('pBVar', 'pBool'),
    ('pIVar', 'pInt'),
    ('pLVar', 'pLong'),
    ('pSVar', 'pSize'),
    ('pPVar', 'pPtr'),
    ('pvVar', 'pVoid'),
    ('pauVar', 'pArr16'),
    ('puVar', 'pU64'),
    ('pbVar', 'pU8'),
    ('piVar', 'pInt'),
    ('plVar', 'pLong'),
    ('psVar', 'pSize'),
    ('pfVar', 'pFloat'),
    ('pdVar', 'pDouble'),
    # scalar prefixes
    ('auVar', 'auArr'),
    ('uVar', 'uVal'),
    ('lVar', 'lVal'),
    ('sVar', 'sz'),
    ('iVar', 'iVal'),
    ('cVar', 'ch'),
    ('bVar', 'bFlag'),
    ('fVar', 'fVal'),
    ('dVar', 'dVal'),
]

# Generic pointer-to-type naming for prefixes not in the explicit list
# (e.g. pppuVar -> ptr3_U64_N or ppU64_N for depth 2)
POINTER_TYPECODE_MAP = {
    'u': 'U64',
    'au': 'Arr16',
    'c': 'Char',
    'C': 'CStr',
    's': 'Size',
    'i': 'Int',
    'l': 'Long',
    'f': 'Float',
    'd': 'Double',
    'b': 'Byte',
    'v': 'Void',
    'P': 'Ptr',
    'w': 'WStr',
    'W': 'WStr',
    'I': 'Int',
    'L': 'Long',
    'S': 'Size',
    'F': 'Fn',
    'H': 'Hnd',
    'B': 'Bool',
    'G': 'Guid',
}


# Token-level text transform -------------------------------------------------
def token_replace(text: str, mapper) -> str:
    """Walk the text token-by-token, preserving strings and C comments."""
    out = []
    i = 0
    n = len(text)
    state = 'code'
    token = []

    while i < n:
        ch = text[i]
        if state == 'code':
            if ch.isalpha() or ch == '_':
                token.append(ch)
                state = 'token'
                i += 1
                continue
            if ch == '/' and i + 1 < n and text[i + 1] == '*':
                out.append('/*')
                state = 'block'
                i += 2
                continue
            if ch == '/' and i + 1 < n and text[i + 1] == '/':
                out.append('//')
                state = 'line'
                i += 2
                continue
            if ch == '"':
                out.append('"')
                state = 'string'
                i += 1
                continue
            if ch == "'":
                out.append("'")
                state = 'char'
                i += 1
                continue
            out.append(ch)
            i += 1
            continue

        if state == 'token':
            if ch.isalnum() or ch == '_':
                token.append(ch)
                i += 1
                continue
            # end of token
            out.append(mapper(''.join(token)))
            token = []
            state = 'code'
            continue

        if state == 'block':
            out.append(ch)
            if ch == '*' and i + 1 < n and text[i + 1] == '/':
                out.append('/')
                state = 'code'
                i += 2
            else:
                i += 1
            continue

        if state == 'line':
            out.append(ch)
            if ch == '\n':
                state = 'code'
            i += 1
            continue

        if state == 'string':
            out.append(ch)
            if ch == '\\' and i + 1 < n:
                out.append(text[i + 1])
                i += 2
                continue
            if ch == '"':
                state = 'code'
            i += 1
            continue

        if state == 'char':
            out.append(ch)
            if ch == '\\' and i + 1 < n:
                out.append(text[i + 1])
                i += 2
                continue
            if ch == "'":
                state = 'code'
            i += 1
            continue

    if token:
        out.append(mapper(''.join(token)))

    return ''.join(out)


def rename_token(tok: str) -> str:
    # type tokens
    try:
        return TYPE_MAP[tok]
    except KeyError:
        pass

    # do not touch known symbol families or control-flow labels
    if (tok.startswith(('func_', 'thunk_', 'DAT_', 'PTR_', 'LAB_', 'Unwind_', 'Catch_',
                        'Catch_All_', 'ThreadLocalStoragePointer', '_tls_index',
                        'local_', 'param_', 'uStack_', 'auStack_', 'fStack_',
                        'DStack_', 'iStack_', '_local_', 'in_stack_', 'auStackY_'))
            or tok == 'ThreadLocalStoragePointer' or tok == '_tls_index'):
        return tok

    # explicit prefix list (longest first)
    for prefix, repl in VAR_PREFIXES:
        if tok.startswith(prefix):
            suffix = tok[len(prefix):]
            if suffix.isdigit():
                return f'{repl}_{suffix}'

    # generic p+<type>Var with arbitrary depth (pppuVar, pppppppuVar, ...)
    m = re.fullmatch(r'(p+)([A-Za-z][A-Za-z]*)Var(\d+)', tok)
    if m:
        depth = len(m.group(1))
        typecode = m.group(2)
        n = m.group(3)
        typename = POINTER_TYPECODE_MAP.get(typecode, typecode)
        if depth == 1:
            return f'p{typename}_{n}'
        return f'ptr{depth}_{typename}_{n}'

    # generic scalar type+Var
    m = re.fullmatch(r'([A-Za-z][A-Za-z]*)Var(\d+)', tok)
    if m:
        typecode = m.group(1)
        n = m.group(2)
        # auVar is handled above explicitly; the generic regex is a fallback
        if typecode == 'u':
            return f'uVal_{n}'
        if typecode == 'l':
            return f'lVal_{n}'
        if typecode == 's':
            return f'sz_{n}'
        if typecode == 'i':
            return f'iVal_{n}'
        if typecode == 'c':
            return f'ch_{n}'
        if typecode == 'b':
            return f'bFlag_{n}'
        if typecode == 'f':
            return f'fVal_{n}'
        if typecode == 'd':
            return f'dVal_{n}'
        if typecode == 'au':
            return f'auArr_{n}'

    return tok


def clean_text(text: str) -> str:
    # Ghidra "code *" is a function-pointer type.  Replace it with a single
    # alias before token renaming so the variable renaming can do its job.
    # The trailing space separates the type from the variable name.
    text = re.sub(r'\bcode\b\s*\*', 'func_ptr_t ', text)
    # Ghidra often puts a space between ')' and '[' in array declarators.
    text = re.sub(r'\)\s*\[', ')[', text)
    return token_replace(text, rename_token)


# Block-comment handling ------------------------------------------------------
def strip_block_comments(text: str) -> str:
    """Remove /* ... */ comments (replace with same-length spaces)."""
    return re.sub(r'/\*.*?\*/', lambda m: ' ' * (m.end() - m.start()), text, flags=re.DOTALL)


def extract_block_comments(text: str) -> str:
    """Return just the /* ... */ comments from the text, joined with newlines."""
    comments = re.findall(r'/\*.*?\*/', text, flags=re.DOTALL)
    return '\n'.join(comments)


# Function parsing ------------------------------------------------------------
def split_functions(text: str) -> List[Tuple[str, str, str]]:
    """
    Split the decompilation into (comment_name, header, body) tuples.
    The header is everything before the opening '{'; the body includes the braces.
    """
    parts = re.split(r'(?m)^// Function: ', text)
    functions = []
    for part in parts[1:]:
        lines = part.splitlines()
        comment_name = lines[0].strip()
        rest = '\n'.join(lines[1:])
        header, body = split_header_body(rest)
        if body is not None:
            functions.append((comment_name, header, body))
    return functions


def split_header_body(text: str) -> Tuple[str, str]:
    """
    Find the first '{' outside strings/comments and its matching '}'.
    Return (header, body_with_braces).
    """
    state = 'code'
    first_brace = -1
    i = 0
    n = len(text)
    while i < n:
        ch = text[i]
        if state == 'code':
            if ch == '/' and i + 1 < n:
                if text[i + 1] == '*':
                    state = 'block'
                    i += 2
                    continue
                if text[i + 1] == '/':
                    state = 'line'
                    i += 2
                    continue
            if ch == '"':
                state = 'string'
                i += 1
                continue
            if ch == "'":
                state = 'char'
                i += 1
                continue
            if ch == '{':
                first_brace = i
                break
            i += 1
            continue
        if state == 'block':
            if ch == '*' and i + 1 < n and text[i + 1] == '/':
                state = 'code'
                i += 2
            else:
                i += 1
            continue
        if state == 'line':
            if ch == '\n':
                state = 'code'
            i += 1
            continue
        if state == 'string':
            if ch == '\\' and i + 1 < n:
                i += 2
                continue
            if ch == '"':
                state = 'code'
            i += 1
            continue
        if state == 'char':
            if ch == '\\' and i + 1 < n:
                i += 2
                continue
            if ch == "'":
                state = 'code'
            i += 1
            continue

    if first_brace == -1:
        return text, ''

    depth = 1
    body_end = -1
    i = first_brace + 1
    while i < n:
        ch = text[i]
        if state == 'code':
            if ch == '/' and i + 1 < n:
                if text[i + 1] == '*':
                    state = 'block'
                    i += 2
                    continue
                if text[i + 1] == '/':
                    state = 'line'
                    i += 2
                    continue
            if ch == '"':
                state = 'string'
                i += 1
                continue
            if ch == "'":
                state = 'char'
                i += 1
                continue
            if ch == '{':
                depth += 1
                i += 1
                continue
            if ch == '}':
                depth -= 1
                if depth == 0:
                    body_end = i
                    break
                i += 1
                continue
            i += 1
            continue
        if state == 'block':
            if ch == '*' and i + 1 < n and text[i + 1] == '/':
                state = 'code'
                i += 2
            else:
                i += 1
            continue
        if state == 'line':
            if ch == '\n':
                state = 'code'
            i += 1
            continue
        if state == 'string':
            if ch == '\\' and i + 1 < n:
                i += 2
                continue
            if ch == '"':
                state = 'code'
            i += 1
            continue
        if state == 'char':
            if ch == '\\' and i + 1 < n:
                i += 2
                continue
            if ch == "'":
                state = 'code'
            i += 1
            continue

    if body_end == -1:
        return text, ''

    return text[:first_brace], text[first_brace:body_end + 1]


# Signature handling ----------------------------------------------------------
def _find_matching_paren(sig: str, start: int) -> int:
    depth = 1
    i = start + 1
    while i < len(sig) and depth > 0:
        if sig[i] == '(':
            depth += 1
        elif sig[i] == ')':
            depth -= 1
        i += 1
    return i - 1


def extract_signature_info(clean_header: str) -> Tuple[str, str, str]:
    """
    From a cleaned header (no block comments) extract:
        (return_type, function_name, params_text_with_parens)
    Return ('', '', '') if the signature cannot be parsed.

    This is more robust than a regex because Ghidra likes to write
    pointer-to-array returns such as "uint8_t (*) [16] func(...)".
    The *last* top-level parenthesis pair whose ')' is at the end of the
    signature is the function parameter list.
    """
    sig = ' '.join(clean_header.split())
    top_level = []
    depth = 0
    stack = []
    for i, ch in enumerate(sig):
        if ch == '(':
            if depth == 0:
                stack.append(i)
            depth += 1
        elif ch == ')':
            depth -= 1
            if depth == 0 and stack:
                start = stack.pop()
                top_level.append((start, i))

    if not top_level:
        return '', '', ''

    # The function parameters are the last top-level pair that ends the string.
    paren_start, paren_end = -1, -1
    for start, end in reversed(top_level):
        if end == len(sig) - 1 or sig[end + 1:].strip() == '':
            paren_start, paren_end = start, end
            break

    if paren_start == -1:
        return '', '', ''

    # Function name is the identifier immediately before paren_start.
    prefix = sig[:paren_start]
    m = re.search(r'([A-Za-z_][A-Za-z0-9_]*)\s*$', prefix)
    if not m:
        return '', '', ''

    func_name = m.group(1)
    return_type = prefix[:m.start()].strip()
    params_text = sig[paren_start:paren_end + 1]

    return return_type, func_name, params_text


def _format_signature_impl(return_type: str, func_name: str, params_text: str) -> str:
    """Build a valid function signature without trailing semicolon."""
    if not return_type:
        return f'/* could not parse signature */ {func_name}{params_text}'

    # Ghidra writes pointer-to-array returns as "TYPE (*) [N] func(params)" or
    # "TYPE (**) [N] func(params)". Convert to the valid C declarator
    # "TYPE (*func(params))[N]" / "TYPE (**func(params))[N]".
    m = re.match(r'^(.*)\(\s*(\*+)\s*\)\s*(\[\s*\d+\s*\])?\s*$', return_type)
    if m:
        before = m.group(1).strip()
        stars = m.group(2)
        array = m.group(3) or ''
        return f'{before} ({stars}{func_name}{params_text}){array}'

    return f'{return_type} {func_name}{params_text}'


def format_signature(return_type: str, func_name: str, params_text: str) -> str:
    """Cleaned definition signature for source files."""
    return _format_signature_impl(return_type, func_name, params_text)


def make_prototype(return_type: str, func_name: str, params_text: str) -> str:
    """Create a valid-ish extern prototype from the cleaned signature pieces."""
    return _format_signature_impl(return_type, func_name, params_text) + ';'


# Main -----------------------------------------------------------------------
def main():
    if not INPUT_FILE.exists():
        print(f'Input file not found: {INPUT_FILE}', file=sys.stderr)
        sys.exit(1)

    RAW_DIR.mkdir(parents=True, exist_ok=True)
    INCLUDE_DIR.mkdir(parents=True, exist_ok=True)

    print('Reading decompilation...')
    text = INPUT_FILE.read_text()

    print('Splitting functions...')
    functions = split_functions(text)
    print(f'Found {len(functions)} function blocks.')

    groups: List[List[str]] = []
    prototypes: List[str] = []
    globals_dat: set = set()
    globals_ptr: set = set()
    index: List[Dict] = []

    group_no = 0
    current_group: List[str] = []

    for comment_name, header, body in functions:
        # Determine the original function name from the comment.
        if '::' in comment_name:
            # API import thunk like "API-...DLL::GetProcAddress"
            api_name = comment_name.split('::')[-1]
            # We keep the thunk definition name but prefix it; the internal call
            # will resolve to the real API once declarations are added.
            pass

        # skip hand-refactored functions
        if comment_name in SKIP_FUNCTIONS:
            continue

        warnings = extract_block_comments(header)
        signature = strip_block_comments(header)

        cleaned_header = clean_text(header)
        cleaned_body = clean_text(body)
        cleaned_signature = strip_block_comments(cleaned_header)

        return_type, func_name, params = extract_signature_info(cleaned_signature)

        # collect global symbols
        for m in re.finditer(r'\b(DAT_180[0-9a-fA-F]+)\b', cleaned_body):
            globals_dat.add(m.group(1))
        for m in re.finditer(r'\b(PTR_180[0-9a-fA-F]+)\b', cleaned_body):
            globals_ptr.add(m.group(1))

        # prototype
        if func_name:
            proto = make_prototype(return_type, func_name, params)
            prototypes.append(f'// {comment_name}\n{proto}')

        # rebuild the cleaned header so pointer-to-array return types are
        # syntactically valid C/C++ (e.g. uint8_t (*func(...))[16]).
        if func_name:
            signature_line = format_signature(return_type, func_name, params)
            cleaned_header = (warnings + '\n' + signature_line).strip()

        # build source fragment
        frag = []
        frag.append(f'// {comment_name}')
        if warnings:
            frag.append(warnings)
        frag.append(cleaned_header.strip())
        frag.append(cleaned_body)
        frag.append('')

        current_group.append('\n'.join(frag))

        if len(current_group) >= GROUP_SIZE:
            groups.append(current_group)
            current_group = []

        index.append({
            'original': comment_name,
            'cleaned_name': func_name,
            'group': group_no,
        })

    if current_group:
        groups.append(current_group)

    print(f'Writing {len(groups)} source group files...')
    group_files = []
    for i, group in enumerate(groups):
        path = RAW_DIR / f'group_{i:04d}.cpp'
        content = ['#include <oderso/compat.h>', '#include <oderso/decls.h>', '']
        content.extend(group)
        path.write_text('\n'.join(content))
        group_files.append(f'Oderso/Raw/group_{i:04d}.cpp')

    print('Writing include/oderso/decls.h...')
    decls = ['#pragma once', '#include <oderso/compat.h>', '']
    decls.append('// Function prototypes and global symbols')
    decls.append('extern "C" {')
    decls.append('// Function prototypes (auto-generated, mechanical pass)')
    decls.extend(prototypes)
    decls.append('')
    decls.append('// Global data symbols')
    for dat in sorted(globals_dat):
        decls.append(f'    uint8_t {dat}[];')
    for ptr in sorted(globals_ptr):
        decls.append(f'    void* {ptr};')
    decls.append('')
    decls.append('// TLS loader symbols')
    decls.append('    void* ThreadLocalStoragePointer;')
    decls.append('    unsigned long _tls_index;')
    decls.append('}')
    (INCLUDE_DIR / 'decls.h').write_text('\n'.join(decls))

    print('Writing function index...')
    (OUT_DIR / 'function_index.json').write_text(json.dumps(index, indent=2))

    print('Done.')
    print(f'  Source groups: {len(groups)}')
    print(f'  Prototypes: {len(prototypes)}')
    print(f'  DAT symbols: {len(globals_dat)}')
    print(f'  PTR symbols: {len(globals_ptr)}')


if __name__ == '__main__':
    main()
