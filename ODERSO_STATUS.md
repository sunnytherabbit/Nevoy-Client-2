# Oderso 1.26.3X Refactor Status

**Generated:** 2026-07-28
**Project root:** `/Users/tl/Desktop/MCBE/Clients`
**Active source:** `Oderso/oderso_1.26.3X_refactored`
**Target DLL:** `Oderso/1.26.3X.dll`

---

## Goal

Reconstruct a buildable, maintainable source tree for the Oderso Bedrock client DLL (`1.26.3X.dll`) so it can be compiled from C++ source, then fill in the missing module behavior to reach parity with the original DLL and validate it in game.

---

## What has been done

- **Build system works:** `CMakeLists.txt` is in place and the Windows/MSVC build has been verified to succeed in a previous session (this macOS host cannot re-run the Windows build).
- **All 126 Oderso modules have skeletons:** every module from `module_manifest_full.json` has a `.h/.cpp` file (one, `NameTags`, is in `Horion/Module/Modules`) and all are registered in `ModuleManager.cpp`.
- **Constructor metadata extracted:** every module's name, class, category, tooltip, settings, constructor address, and key have been extracted into `tools/module_manifest_full.json` (126 entries).
- **10 modules are already fully implemented:**
  - `CPS`
  - `ChunkBorders`
  - `CrouchSpam`
  - `FPS`
  - `HideUI`
  - `NameTags`
  - `NoFire`
  - `OdersoCompass`
  - `SmoothCamera`
  - `Subtitles`
- **Analysis tooling exists in `tools/`:**
  - `audit_missing_source.py` — source audit
  - `deeper_module_scan.py` — module completeness scan
  - `scan_portable_modules.py` — vtable/decomp cross-check
  - `extract_module_vtable.py` — extract module vtables from the DLL
  - `generate_modules.py` — module skeleton generator
  - `module_manifest_full.json` / `module_hash_map.json` / `function_summary.json`
- **No raw decompiled `func_0x` / `DAT_` / `PTR_` references remain** in the C++ source.
- **Decompiled pseudo-C exists:** `ghidra_decompiled_1.26.3X.c` is 17 MB, ~626,000 lines, and contains 16,869 functions (Ghidra 11.0.3).

---

## What is missing / blocking

- **The main blocker:** `ghidra_decompiled_1.26.3X.c` has the module constructors but **does not contain the actual overridden behavior methods** (`onTick`, `onPostRender`, `onEnable`, `onDisable`, etc.) for the stubs.
  - `scan_portable_modules.py` currently reports **0 portable modules** whose overridden method bodies are present in the decompiled C file.
  - Without those method bodies, the 116 stubs cannot be ported from decompilation.
- **116 of 126 modules are still stubs:** they have a constructor + `getModuleName` but no behavior.
- **1 TODO in `Memory/Hooks.cpp`** about refactoring modules to not use `GameMode`; hook signatures / vtable indices still need broader verification.
- **73 TODO/FIXME/XXX markers across 37 files** remain in the source, mainly in generated module stubs but also in `SDK/CEntity.h`, `Horion/Menu/ClickGui.cpp`, `Horion/path/JoePathFinder.cpp`, `Horion/Module/Modules/BowAimbot.cpp`.
- **UI, rendering, config, and account systems** have not yet been reconstructed to parity.
- **No runtime testing** has been performed in game yet.

---

## What needs to be done

1. **Get the complete function bodies for every method the module vtables point to.**
   - The current `ghidra_decompiled_1.26.3X.c` is incomplete for the `onTick` / `onPostRender` / `onEnable` etc. methods.
   - Options: a fresh full Ghidra headless decompile that exports *every* function, or manually reconstruct the modules from the DLL with x64dbg/IDA.
2. **Port the highest-priority modules first.** Current top candidates from the scan:
   - `Module_180223cc0`
   - `Module_1802c5a20`
   - `Module_1801380b0`
   - `SkinStealer`
   - `Module_1803238c0`
   - `Module_18024b340`
   - `Module_180156800`
3. **Resolve `Memory/Hooks.cpp` TODO** and verify hook signatures / vtable indices.
4. **Work through the 73 TODO/FIXME/XXX markers** in 37 generated stubs and supporting code.
5. **Rebuild UI, rendering, config, and account systems** to match the original behavior.
6. **Build the DLL on Windows and test in game.**

---

## Oderso folder inventory

| Path | Type | Files | Size | Notes |
|------|------|-------|------|-------|
| `1.26.3X.dll` | Binary | 1 | 8.6 MB | Original target PE32+ x86-64 DLL |
| `ghidra_decompiled_1.26.3X.c` | Decomp | 1 | 17 MB | 626,839 lines, 16,869 functions, Ghidra 11.0.3 |
| `GHIDRA_RESULTS_ODERSO.md` | Doc | 1 | 2 KB | Notes from the Ghidra run |
| `oderso_1.26.3X_refactored/` | Source | 1,148 | 15 MB | Active, buildable refactored source tree |
| `raw_decompiled_backup/` | Decomp | 68 | 17 MB | Old grouped raw decompiled C files |
| `Horion/` | Source dump | 879 | 13 MB | Legacy or upstream source copy (not the active build) |
| `Borion/` | Source dump | 879 | 13 MB | Legacy or upstream source copy (not the active build) |

### Active source tree (`oderso_1.26.3X_refactored/`)

| Path | Files | Purpose |
|------|-------|---------|
| `CMakeLists.txt` + build files | - | MSVC/Windows CMake build |
| `Oderso/` | 250 | Oderso modules + helpers (Module, Scripting, Config, Menu, etc.) |
| `Horion/` | 322 | Horion base code (commands, hooks, menu, modules) |
| `SDK/` | 44 | Minecraft Bedrock SDK headers / class stubs |
| `Utils/` | 27 | Shared utilities (Network, Version, etc.) |
| `Memory/` | 7 | Hook engine (`Memory/Hooks.cpp` has 1 TODO) |
| `include/` | 444 | Compatibility / shared headers incl. `glm`, `chakra`, `oderso` |
| `resources/` | 4 | Resource files (`.rc`, manifest) |
| `tools/` | 37 | Python analysis, generation, and audit scripts |
| `minhook/` | 1 | MinHook library |

---

## Key metrics

- **Modules in manifest:** 126
- **Implemented modules:** 10
- **Stub modules:** 116
- **Generated module stubs (audit):** 113
- **Missing modules:** 0
- **Portable modules found in decomp:** 0
- **Decompiled function count:** 16,869
- **TODO/FIXME/XXX markers:** 73 (across 37 files)
- **Hook TODOs:** 1
- **Commands with stub `execute()`:** 0
- **Script placeholders:** 0
- **Manager orphan symbols:** 0
- **Raw `func_0x` / `DAT_` / `PTR_` refs in source:** 0

---

## Bottom line

The source tree is clean and buildable, and all 126 modules exist. The **critical remaining problem is the lack of complete decompiled method bodies**: we have the constructors and settings, but we still need the actual `onTick` / `onPostRender` / `onEnable` / etc. implementations before the remaining 116 stubs can be finished. Once those function bodies are available, the porting pipeline (Python scanners → C++ modules → Windows build → game test) is ready to run.
