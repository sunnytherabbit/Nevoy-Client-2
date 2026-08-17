# Deeper Module Scan Report

This report cross-checks every module found in the DLL against the refactored source.

## Summary
- Total modules in manifest: 102
- Implemented: 101
- Stubs (source present, no behavior): 1
- Missing from source: 0
- Not registered in ModuleManager.cpp: 0
- Top port candidates: 1

## Top port candidates (sorted by estimated impact)
Count: 1

| Class | Name | Category | Status | Settings | Func calls | Strings | Score |
|-------|------|----------|--------|----------|------------|---------|-------|
| `NameTags` | NameTags | VISUAL | stub | 11 | 31 | 1 | 21.0 |

## Missing from source (no .cpp file)
Count: 0


## Stubs (source present, only constructor + getModuleName)
Count: 1

- `NameTags` — NameTags (VISUAL)

## Not registered in ModuleManager.cpp
Count: 0
- All manifest modules are registered.

## Next steps
1. Pick the top candidates from the score table and port them.
2. For missing modules, generate a new `Module_<addr>.h/.cpp` skeleton and add it to CMakeLists/ModuleManager.
3. For stubs, fill in the relevant `onTick`/`onPostRender`/`onLevelRender`/etc. methods.
4. Re-run this scan after porting to track progress.