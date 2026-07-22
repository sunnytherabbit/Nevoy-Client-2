# Nevoy-Compilable

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

- Decompiled functions: 7628
- Module files: 83
- Core files: 43
- Total source files: 128

## Verification

A quick syntax/object compile check can be done with Clang:

```bash
clang -std=c11 -c \
  -Wno-error=implicit-function-declaration \
  -Wno-error=int-conversion \
  -Wno-error=implicit-int \
  -Wno-error=incompatible-pointer-types \
  -Wno-error=pointer-sign \
  -Isrc -Iinclude \
  src/nevoy.c -o /tmp/nevoy.o
```

This will produce an object file (host-native Mach-O/ELF) without linker
errors. Producing the actual `Nevoy Client v26.32.dll` requires a Windows
toolchain (MSVC or MinGW-w64).

## Notes

This is an automated reconstruction from RetDec output. It preserves the
decompiled logic but may require additional type/Windows SDK fixes before it
compiles cleanly. The source code uses Windows-only APIs (`windows.h`, D3D11,
DXGI, etc.) so it cannot be built natively on non-Windows hosts without a
cross-compiler.
