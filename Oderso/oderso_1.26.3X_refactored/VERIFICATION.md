# Verification Report

Generated: Tue Aug 18 09:34:43 2026 AEST

## Summary

- Total files indexed: 1197
- Source files scanned: 949
- Oderso module `.cpp` files: 127
- TODO items in module sources: 0
- Legacy/third-party TODO items: 5
- `// Binary function:` comments in module sources: 0
- `func_0x...(...)` calls in source code (excl. prototypes): 0
- `func_0x...()` prototypes in `include/oderso/decls.h`: 4584
- `func_0x...` references in comments only: present (e.g. `Ported from func_0x...`), not compiled calls
- Files with mismatched `{ }` braces (project source, third-party excluded): 0
- Oderso modules with naming issues: 0
- `onLoadConfig` / `onSaveConfig` placeholder comments cleaned: 80 across 41 files
- `Module_1801380b0` constructor fixed to use valid header fields
- `Module_180130570` extra int settings registered
- `Make` module registered in `ModuleManager.cpp`
- Manifest modules: 102
- Modules registered in `ModuleManager.cpp`: 213 total (all 102 manifest modules present)
- `tools/misaligned_modules.txt`: empty
- `tools/module_vtables_full.txt`: 102 vtable entries
- MinGW build: `cmake --build build-mingw --target Oderso` succeeds and links `lib1.26.3X.dll`

## Notes

- The 5 remaining TODOs are in existing/legacy or third-party files; **no TODOs remain in the ported Oderso module `.cpp` files**.
- `func_0x...` references in `include/oderso/decls.h` are binary function *prototypes*, not stray calls.
- `Utils/Json.hpp` is a third-party library and excluded from the brace-balance check.
- `SDK/CEntity.h` contains two `// TODO` stubs (`isSneaking`, `isSprinting`) that return `false`.
- `Horion/path/JoePathFinder.cpp` contains one `// TODO` for larger parkour jump handling.
- `include/glm/glm/detail/compute_common.hpp` and `Utils/Json.hpp` contain third-party `// TODO` notes.
- The MinGW build emits non-fatal warnings (`__declspec(align(8))` ignored, `corrupt .drectve at end of def file`, `offsetof` conditionally-supported); it still reaches `[100%] Built target Oderso` and produces the DLL.
- Naming details are in `NAMING_REPORT.md`.

## TODOs

- `Utils/Json.hpp` line 6538
- `SDK/CEntity.h` line 713
- `SDK/CEntity.h` line 717
- `include/glm/glm/detail/compute_common.hpp` line 23
- `Horion/path/JoePathFinder.cpp` line 343

## `func_0x` calls in source code (excluding prototypes)

None.

## `func_0x` text references in comments

Present as annotations (`// Ported from func_0x...`, `// Kept as direct binary call: ... (func_0x...)`). These are not compiled function calls.

## Brace balance (project source only, third-party excluded)

No mismatched braces detected.
