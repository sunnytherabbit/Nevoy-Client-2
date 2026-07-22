#!/usr/bin/env python3
"""
Generate a compilable source tree from the RetDec decompiled_source.c.

Reads:
  ../../decompiled_source.c
  ../../class_to_functions.json
  ../../function_labels.json

Produces a source tree under the current directory with:
  src/runtime_common.c   - common types, structs, prototypes, globals
  src/modules/*.c        - functions grouped by inferred module
  src/core/*.c           - remaining functions grouped by address range
  src/nevoy.c            - amalgamation entry point (includes the above)
  CMakeLists.txt
  README.md
"""

import json
import re
import os
import shutil
from pathlib import Path

ROOT = Path(__file__).parent.parent.resolve()
WORKSPACE = ROOT.parent
DECOMP = WORKSPACE / "decompiled_source.c"
CLASS_MAP_FILE = WORKSPACE / "class_to_functions.json"
LABELS_FILE = WORKSPACE / "function_labels.json"

SRC_DIR = ROOT / "src"
MODULES_DIR = SRC_DIR / "modules"
CORE_DIR = SRC_DIR / "core"
INCLUDE_DIR = ROOT / "include"

ADDRESS_RE = re.compile(r"^// Address range: (0x[0-9a-fA-F]+) - (0x[0-9a-fA-F]+)")
FUNC_SIG_RE = re.compile(r"^(?:static\s+)?(?:\w+\s+)+([A-Za-z_0-9]+)\s*\(")


def clean_dir(d: Path):
    if d.exists():
        shutil.rmtree(d)
    d.mkdir(parents=True, exist_ok=True)


def split_common(lines):
    """Return (prefix_lines, first_func_index, meta_index)."""
    first_func_idx = None
    meta_idx = len(lines)
    for i, line in enumerate(lines):
        if first_func_idx is None and ADDRESS_RE.match(line):
            first_func_idx = i
        if line.startswith("// --------------------- Meta-Information"):
            meta_idx = i
            break
    return lines[:first_func_idx], first_func_idx, meta_idx


def parse_functions(lines, first_idx, meta_idx):
    """Yield dicts for each function definition."""
    i = first_idx
    while i < meta_idx:
        m = ADDRESS_RE.match(lines[i])
        if not m:
            i += 1
            continue
        start_addr, end_addr = m.group(1), m.group(2)
        start_line = i
        j = i + 1
        while j < meta_idx and not ADDRESS_RE.match(lines[j]):
            j += 1
        end_line = j
        body = lines[start_line:end_line]
        name = None
        for l in body:
            fm = FUNC_SIG_RE.match(l)
            if fm:
                name = fm.group(1)
                break
        yield {
            "start_addr": start_addr.lower(),
            "end_addr": end_addr.lower(),
            "start_line": start_line + 1,
            "end_line": end_line,
            "body": body,
            "name": name,
        }
        i = j


def build_module_index(class_map, labels):
    """Return dict start_addr -> module label, and set of mapped addrs."""
    addr_to_module = {}
    for module, entries in class_map.items():
        for e in entries:
            addr = e["address"].lower()
            addr_to_module[addr] = module
    for addr, info in labels.items():
        a = addr.lower()
        label = info.get("label")
        if label and a not in addr_to_module:
            # labels with names like "assets_clickgui" go into a core/label group
            addr_to_module[a] = f"__label__{label}"
    return addr_to_module


def write_runtime_common(lines, first_idx, out_path: Path):
    """Write the common prefix (types, prototypes, globals) to runtime_common.c."""
    common = lines[:first_idx]
    # Ensure it ends with a newline and has pragma once guard? This file is included once.
    text = "".join(common)
    if not text.endswith("\n"):
        text += "\n"
    out_path.write_text(text)


def write_function_files(functions, addr_to_module):
    """Write function bodies to module or core files; return list of relative paths."""
    written = []
    core_groups = {}
    module_groups = {}

    for fn in functions:
        addr = fn["start_addr"]
        module = addr_to_module.get(addr)
        if module:
            if module.startswith("__label__"):
                group = module
            else:
                group = module
            module_groups.setdefault(group, []).append(fn)
        else:
            # Group by upper 5 hex digits of the 32-bit offset to limit file count
            offset = int(addr, 16) & 0xffffffff
            upper = offset >> 16
            group = f"core_0x{upper:04x}"
            core_groups.setdefault(group, []).append(fn)

    # write module files
    for module, fns in sorted(module_groups.items()):
        name = module
        path = MODULES_DIR / f"{name}.c"
        out = ["// Module: {}\n".format(name)]
        for fn in fns:
            out.extend(fn["body"])
            if not fn["body"][-1].endswith("\n"):
                out.append("\n")
        out.append("\n")
        path.write_text("".join(out))
        written.append(Path("src/modules") / f"{name}.c")

    # write core files
    for group, fns in sorted(core_groups.items()):
        path = CORE_DIR / f"{group}.c"
        out = ["// Core group: {}\n".format(group)]
        for fn in fns:
            out.extend(fn["body"])
            if not fn["body"][-1].endswith("\n"):
                out.append("\n")
        out.append("\n")
        path.write_text("".join(out))
        written.append(Path("src/core") / f"{group}.c")

    return written


def write_nevoy_amalgam(rel_paths: list, out_path: Path):
    """Generate nevoy.c that includes runtime_common.c and all function source files.

    This single translation unit avoids multiple-definition problems for globals.
    """
    lines = [
        "// Nevoy Client v26.32 - amalgamated compilable source\n",
        "// Generated from RetDec decompiled_source.c\n",
        "\n",
        '#include "runtime_common.c"\n',
        "\n",
    ]
    for rp in rel_paths:
        # Convert path separators for #include
        inc = str(rp).replace("\\", "/")
        lines.append(f'#include "{inc}"\n')
    out_path.write_text("".join(lines))


def write_cmake():
    txt = """cmake_minimum_required(VERSION 3.16)
project(Nevoy LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

if(NOT WIN32)
    message(WARNING "Nevoy is a Windows DLL. Cross-compilation is required on this host.")
endif()

# The project is built from a single amalgamated translation unit so that
# global variables from the decompiled source are defined exactly once.
add_library(Nevoy SHARED
    src/nevoy.c
)

target_include_directories(Nevoy PRIVATE src include)

# Link Windows APIs and D3D used by the original DLL
target_link_libraries(Nevoy PRIVATE
    kernel32
    user32
    gdi32
    shell32
    ole32
    dxgi
    d3d11
    d3dcompiler
    winmm
    dbghelp
)

set_target_properties(Nevoy PROPERTIES
    PREFIX ""
    OUTPUT_NAME "Nevoy Client v26.32"
    SUFFIX ".dll"
)
"""
    (ROOT / "CMakeLists.txt").write_text(txt)


def write_readme(stats: dict):
    txt = f"""# Nevoy-Compilable

This folder contains an organized, amalgamated source tree generated from
`decompiled_source.c` with the goal of producing a compilable Windows DLL.

## Layout

- `src/runtime_common.c` - RetDec type definitions, structs, function prototypes, and global variables.
- `src/modules/*.c` - Decompiled functions grouped by cheat/hook module (from `class_to_functions.json`).
- `src/core/*.c` - Remaining functions grouped by address range.
- `src/nevoy.c` - Single translation unit that includes all of the above. It is the build target.
- `CMakeLists.txt` - CMake build configuration for a 64-bit Windows DLL.

## Build

### Windows (MSYS2 / MinGW-w64)

```bash
mkdir build && cd build
cmake .. -G "MinGW Makefiles" -DCMAKE_C_COMPILER=x86_64-w64-mingw32-gcc -DCMAKE_CXX_COMPILER=x86_64-w64-mingw32-g++
make
```

### Windows (Visual Studio)

```powershell
mkdir build; cd build
cmake .. -A x64
msbuild Nevoy.vcxproj
```

### Cross-compile from Linux/macOS

Install the MinGW-w64 toolchain, then:

```bash
mkdir build && cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=../mingw-w64-x86_64.cmake
make
```

## Statistics

- Decompiled functions: {stats['total_functions']}
- Module files: {stats['module_files']}
- Core files: {stats['core_files']}
- Total source files: {stats['total_source_files']}

## Notes

This is an automated reconstruction from RetDec output. It preserves the
decompiled logic but may require additional type/Windows SDK fixes before it
compiles cleanly. The source code uses Windows-only APIs (`windows.h`, D3D11,
DXGI, etc.) so it cannot be built natively on non-Windows hosts without a
cross-compiler.
"""
    (ROOT / "README.md").write_text(txt)


def main():
    print("Reading decompiled_source.c ...")
    with open(DECOMP, "r", encoding="utf-8", errors="replace") as f:
        lines = f.readlines()

    print("Locating sections ...")
    common_lines, first_idx, meta_idx = split_common(lines)

    print("Parsing functions ...")
    functions = list(parse_functions(lines, first_idx, meta_idx))

    print(f"Found {len(functions)} functions, common section ends at line {first_idx}.")

    print("Loading mappings ...")
    class_map = json.loads(CLASS_MAP_FILE.read_text())
    labels = json.loads(LABELS_FILE.read_text())
    addr_to_module = build_module_index(class_map, labels)

    print("Preparing output directories ...")
    clean_dir(SRC_DIR)
    clean_dir(MODULES_DIR)
    clean_dir(CORE_DIR)
    clean_dir(INCLUDE_DIR)

    print("Writing runtime_common.c ...")
    write_runtime_common(lines, first_idx, SRC_DIR / "runtime_common.c")

    print("Writing module/core source files ...")
    rel_paths = write_function_files(functions, addr_to_module)

    print("Writing nevoy.c amalgamation ...")
    write_nevoy_amalgam(rel_paths, SRC_DIR / "nevoy.c")

    print("Writing CMakeLists.txt ...")
    write_cmake()

    module_files = len([p for p in rel_paths if p.parts[1] == "modules"])
    core_files = len([p for p in rel_paths if p.parts[1] == "core"])
    stats = {
        "total_functions": len(functions),
        "module_files": module_files,
        "core_files": core_files,
        "total_source_files": len(rel_paths) + 2,  # + runtime_common.c + nevoy.c
    }
    print("Writing README.md ...")
    write_readme(stats)

    print("Done.")


if __name__ == "__main__":
    main()
