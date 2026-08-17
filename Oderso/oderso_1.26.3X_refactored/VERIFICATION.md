# Verification Report

Generated: Mon Aug 17 13:23:52 2026

## Summary

- Total files indexed: 1197
- Source files scanned: 949
- TODO items in source: 5
- `func_0x...(...)` calls in source code (excl. prototypes): 0
- Files with mismatched `{ } braces (project source): 0
- Oderso modules with naming issues: 0

## Notes

- TODOs found are in existing/legacy or third-party files; **no TODOs remain in the ported Oderso module `.cpp` files**.
- `func_0x...` references in `include/oderso/decls.h` are binary function *prototypes*, not stray calls.
- `Utils/Json.hpp` is a third-party library and excluded from the brace-balance check.
- Naming details are in `NAMING_REPORT.md`.

## TODOs

- `Utils/Json.hpp` line 6538
- `SDK/CEntity.h` line 713
- `SDK/CEntity.h` line 717
- `include/glm/glm/detail/compute_common.hpp` line 23
- `Horion/path/JoePathFinder.cpp` line 343

## `func_0x` calls in source code (excluding prototypes)

None.

## Brace balance (project source only, third-party excluded)

No mismatched braces detected.
