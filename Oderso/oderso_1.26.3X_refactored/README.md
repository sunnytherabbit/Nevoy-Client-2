# Oderso 1.26.3X refactored source

This folder is a C++/C/CMake project scaffold that mirrors the `Borion/Borion-OSS` layout. It is generated from the Ghidra decompilation `ghidra_decompiled_1.26.3X.c` (~28 MB, 19,539 functions).

## Project layout

```
.
├── CMakeLists.txt
├── README.md
├── .gitignore
├── SDK/              - hand-cleaned SDK classes (TextHolder, etc.)
│   ├── TextHolder.h
│   └── TextHolder.cpp
├── Utils/            - compatibility symbols and helpers
│   └── compat.cpp
├── include/oderso/   - compatibility headers used by both hand-cleaned and raw files
│   ├── compat.h      - type aliases and Ghidra artifact macros
│   └── decls.h       - auto-generated forward declarations / global symbols
├── Oderso/           - Borion-style source tree for logically grouped code
├── resources/        - placeholder
└── tools/            - helper scripts for manifest and decomp analysis
```

## What is already clean

* `SDK/TextHolder.{h,cpp}`: a hand-refactored `TextHolder` string class and the decompiled entry points `func_0x180001050` and `func_0x180001060`.
* `include/oderso/compat.h`: portable aliases for Windows API/Ghidra types and macros (`ZEXT`, `CONCAT`, `SUB`, `swi`, `LOCK`/`UNLOCK`, etc.).
* `Utils/compat.cpp`: placeholder definitions for loader symbols (`ThreadLocalStoragePointer`, `_tls_index`).
* `include/oderso/decls.h`: auto-generated forward declarations and `DAT_`/`PTR_` global externs.

## Mechanical first pass

The previous `Oderso/Raw/group_*.cpp` mechanical split and the `tools/refactor.py` normalization helper have been removed from this tree as part of the decomp cleanup. The current tooling works directly against `ghidra_decompiled_1.26.3X.c` (symlinked to `ghidra_decompiled_1.26.3X_new.c`).

## Building

### MinGW cross-compile (macOS / Linux)

```bash
cd Oderso/oderso_1.26.3X_refactored
cmake -B build-mingw -S . -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_COMPILER=/opt/homebrew/bin/x86_64-w64-mingw32-g++ -DCMAKE_C_COMPILER=/opt/homebrew/bin/x86_64-w64-mingw32-gcc
cmake --build build-mingw --target Oderso -j4
```

The output is `build-mingw/lib1.26.3X.dll`.

Expected non-fatal warnings:
- `__declspec(align(8))` ignored by MinGW
- `corrupt .drectve at end of def file` from the linker
- `offsetof` within non-standard-layout type on some module `static_assert`s

For a completely clean rebuild:

```bash
cmake --build build-mingw --target Oderso --clean-first -j4
```

### MSVC (Windows)

Configure with the Visual Studio generator and build the `Oderso` target. This is not tested in the current MinGW-only environment; it may expose ABI or layout differences.

### Quick SDK test

The cleaned SDK portion can also be compiled standalone:

```bash
g++ -std=c++17 -c SDK/TextHolder.cpp -I. -o /tmp/TextHolder.o
```

## Next steps

1. **Runtime parity validation** — load the built `build-mingw/lib1.26.3X.dll` into the game and compare behavior against the original `Oderso/1.26.3X.dll`.
2. **MSVC build verification** — build the same tree with native Windows/MSVC to catch ABI or layout differences that MinGW may hide.
3. **Legacy SDK stubs** — `SDK/CEntity.h` `isSneaking()` / `isSprinting()` return `false` with `// TODO`; `Horion/path/JoePathFinder.cpp` line 343 has a missing larger-parkour-jump path. These need the correct binary offsets or decomp logic.
4. Continue targeted hand-refactoring from `Oderso/ghidra_decompiled_1.26.3X_new.c` as new modules or bug fixes are needed.

## Assumptions

* `TextHolder` layout follows the Borion/Horion 32-byte small-string object (16-byte union, `textLength`, `alignedTextLength`).
* `func_0x180001060` is the `TextHolder` constructor/setter from a C-string (`TextHolder_from_cstr`).
* `func_0x180001050` returns the byte at offset 8 of the supplied object (`getByteAtOffset8`).
* `func_0x180672de0`, `func_0x180695dd0`, `func_0x1806aa960`, `func_0x18007ba70`, `func_0x18007bba0` are heap allocation, heap free, memory move/copy helpers, and string-error helpers.
* `LOCK()`/`UNLOCK()` are currently no-ops; they were Ghidra artifacts around stores that may need atomic semantics on a per-site basis.
