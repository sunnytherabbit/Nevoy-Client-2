# Oderso 1.26.3X refactored source

This folder is a C++/C/CMake project scaffold that mirrors the `Borion/Borion-OSS` layout. It is generated from the Ghidra decompilation `ghidra_decompiled_1.26.3X.c` (~18 MB, 16,869 functions).

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
│   └── Raw/          - mechanical first-pass output (68 group files)
├── resources/        - placeholder
└── tools/
    └── refactor.py   - script used to split and clean the decompiled file
```

## What is already clean

* `SDK/TextHolder.{h,cpp}`: a hand-refactored `TextHolder` string class and the decompiled entry points `func_0x180001050` and `func_0x180001060`.
* `include/oderso/compat.h`: portable aliases for Windows API/Ghidra types and macros (`ZEXT`, `CONCAT`, `SUB`, `swi`, `LOCK`/`UNLOCK`, etc.).
* `Utils/compat.cpp`: placeholder definitions for loader symbols (`ThreadLocalStoragePointer`, `_tls_index`).
* `include/oderso/decls.h`: auto-generated forward declarations and `DAT_`/`PTR_` global externs.

## What is a mechanical first pass

`Oderso/Raw/group_*.cpp` contains the bulk of the 16,869 functions. The script `tools/refactor.py` performs only non-semantic cleanup:

* normalizes `undefined`/`undefined4`/`undefined8`/... to `uint8_t`/`uint32_t`/`uint64_t`/...
* renames generic Ghidra variables by type prefix (`uVar1` -> `uVal_1`, `pcVar1` -> `fnPtr_1`, etc.)
* fixes Ghidra's `code *` into `func_ptr_t`
* fixes pointer-to-array return syntax (`uint8_t (*) [16] f(...)` -> `uint8_t (*f(...))[16]`)
* generates `decls.h`

It does **not** perform control-flow cleanup, logical variable naming by usage, or removal of Ghidra artifacts such as `ZEXT`, `CONCAT`, `SUB`, `LOCK`/`UNLOCK`, stack-underscore variables (`_local_*`), etc. Those require per-function manual work.

## Building

The cleaned SDK portion can be compiled standalone:

```bash
g++ -std=c++17 -c SDK/TextHolder.cpp -I. -o /tmp/TextHolder.o
```

A full CMake build (for the hand-cleaned target `Oderso`) works on Windows with MSVC or with a MinGW/Clang cross setup. The raw mechanical files are **not** enabled by default because they still contain Ghidra artifacts. To attempt building them:

```bash
cmake -S . -B build -DBUILD_DECOMPILED_RAW=ON
cmake --build build
```

Expect many compile errors until the artifacts are fixed.

## Next steps

1. Specify which functions or modules you want fully hand-refactored; 16,869 functions is too large to do in one pass.
2. Continue with `func_0x180001110` and the surrounding string / `TextHolder` helpers, or pick a module (Command, Module, Config, etc.) if you can identify address ranges.
3. Use `Oderso/Raw/` as the mechanical starting point and move hand-cleaned files into `Oderso/Module/`, `Oderso/Command/`, `SDK/`, etc. as their purpose becomes clear.

## Assumptions

* `TextHolder` layout follows the Borion/Horion 32-byte small-string object (16-byte union, `textLength`, `alignedTextLength`).
* `func_0x180001060` is the `TextHolder` constructor/setter from a C-string (`TextHolder_from_cstr`).
* `func_0x180001050` returns the byte at offset 8 of the supplied object (`getByteAtOffset8`).
* `func_0x180672de0`, `func_0x180695dd0`, `func_0x1806aa960`, `func_0x18007ba70`, `func_0x18007bba0` are heap allocation, heap free, memory move/copy helpers, and string-error helpers.
* `LOCK()`/`UNLOCK()` are currently no-ops; they were Ghidra artifacts around stores that may need atomic semantics on a per-site basis.
