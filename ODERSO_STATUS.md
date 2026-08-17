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
- **`Memory/Hooks.cpp` GameMode TODO resolved:** `GameData::updateGameData` now accepts a `C_Player*`, derives `C_GameMode*` internally, and `Hooks::Player_tickWorld` passes the player through `g_Data`.
- **GameMode vtable indices verified** against `SDK/CGameMode.h` (`startDestroyBlock` [1], `getPickRange` [10], `attack` [14]).
- **ClickGui config persistence added** for per-module `isExpanded` state.
- **BowAimbot stale TODO removed:** the target list is already sorted by distance.
- **New decompilation integrated:** `ghidra_decompiled_1.26.3X.c` is now symlinked to `ghidra_decompiled_1.26.3X_new.c` (28 MB, 969,830 lines, 19,539 functions, 175 failed). The old decomp has been moved to `temp_bin/2026-07-29_cleanup/Oderso/ghidra_decompiled_1.26.3X_old.c` for reversible cleanup.
- **Module vtable extraction fixed:** `extract_module_vtable.py` and `scan_portable_modules.py` now parse Ghidra's `PTR_func_0x<addr>_<table>` and `PTR_LAB_...` vtable labels correctly.
- **52 modules found with portable overridden methods** in the new decomp, listed in `portable_modules_report.md`.
- **Settings defaults and ranges filled in:** `parse_module_settings.py`, `build_full_manifest.py`, and `generate_modules.py` now extract and emit `register...` calls with `min`/`max` values from the constructor decomp; remaining enum entries and exact numeric defaults still need manual review.
- **52 portable modules now have generated .h/.cpp stubs:** `port_modules.py` was rewritten to parse `portable_modules_report.md`, classify decompiled method names (e.g. string `getKeybind` → `getTooltip`), extract constructor member stores, and emit header/source pairs with correct `IModule` overrides and member declarations. All 45 previously unported portable modules have stubs; the 7 manually ported modules are preserved.
- **Simple method bodies auto-ported:** `tools/port_simple_methods.py` translates trivial member-reset functions into C++ assignments; 4 modules (`Module_180156800`, `Module_180218db0`, `Module_180241f60`, `Module_180347d80`) now have working `onPreRender`/`onPostRender`/`onSendPacket` bodies.
- **1 additional manual port:** `Module_1803404a0` `onPreRender` resets its two counter fields.
- **7 high-priority portable modules remain fully implemented:** `Module_180130570`, `Module_18031e130` (COMBAT / "ComboCounter"), `Module_18020d4c0` (MOVEMENT), `Module_18020a2d0` (COMBAT), `Module_180193330` (COMBAT), `Module_180412630` (COMBAT), and `Module_1802ce320` (COMBAT).
- **Module naming complete:** All 52 portable modules now have correct names/tooltips applied. The `func_0x1804c9aa0` subclass modules were decoded manually from TLS constants and embedded copy/XOR functions, and the remaining non-c9aa0 portable modules were decoded from their constructors and `getModuleName` functions. `tools/c9aa0_batch_decoder.py` now produces `tools/c9aa0_decoded.json` with verified name/tooltip entries for all 22 c9aa0 subclass modules.

---

## What is missing / blocking

- **The main blocker is partially resolved:** the new decomp provides 52 modules whose overridden method bodies are present, but the remaining ~64 stub modules still need their method bodies identified or reconstructed.
- **116 of 126 modules are still stubs:** they have a constructor + `getModuleName` but most behavior methods are empty. `deeper_module_scan_report.md` lists 10 implemented, 116 stubs, 0 missing, and 115 porting candidates.
- **Two source TODOs remain outside generated stubs:**
  - `SDK/CEntity.h` — `isSneaking()` and `isSprinting()` return `false` stubs.
  - `Horion/path/JoePathFinder.cpp` — one parkour-jump TODO.
- **GameMode vtable indices verified**, but broader hook signature / vtable verification requires the target game PE and is on hold.
- **UI, rendering, config, and account systems** have not yet been fully reconstructed to parity.
- **No runtime testing** has been performed in game yet.

---

## What needs to be done

1. ~~**Port the 52 portable modules**~~ — all 52 now have `.h/.cpp` files with correct overrides; 7 are fully implemented, 4 have simple reset bodies auto-ported, 1 manually ported, and the remaining 40 have stubs with binary function references.
2. **Port method bodies for the remaining 40 portable stubs** by translating the decompiled `func_0x` functions in `ghidra_decompiled_1.26.3X_new.c`. Complex functions (inventory loops, player-target checks, packet handling, config save/load) require per-module manual translation.
3. **Investigate the remaining ~64 stubs** whose method bodies are not in the new decomp. The 175 failed decomp functions and .rdata/data pointers that did not decompile may account for some of these.
4. **Resolve `SDK/CEntity.h` `isSneaking()` / `isSprinting()`** once the corresponding C_Entity virtual-method offsets are found in the new decomp.
5. **Resolve `Horion/path/JoePathFinder.cpp` parkour-jump TODO** from the decomp path-finding logic.
6. **Verify remaining hook signatures / vtable indices** when the target game PE or game decomp is available.
7. **Rebuild UI, rendering, config, and account systems** to match the original behavior.
8. **Build the DLL on Windows and test in game.**

---

## Oderso folder inventory

| Path | Type | Files | Size | Notes |
|------|------|-------|------|-------|
| `1.26.3X.dll` | Binary | 1 | 8.6 MB | Original target PE32+ x86-64 DLL |
| `ghidra_decompiled_1.26.3X.c` | Decomp | 1 | 28 MB | 969,830 lines, 19,539 functions (symlink to `_new.c`) |
| `ghidra_decompiled_1.26.3X_new.c` | Decomp | 1 | 28 MB | New Ghidra decomp with 19,539 functions |
| `ghidra_decompiled_1.26.3X_old.c` | Decomp | 1 | 17 MB | Previous 16,869-function decomp |
| `failed_functions_summary.txt` | Doc | 1 | 7 KB | 175 addresses Ghidra could not decompile |
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
- **Decompiled function count (new):** 19,539
- **Ghidra decompiler failures:** 175
- **Portable modules found in decomp:** 52
- **TODO/FIXME/XXX markers:** 2 source files (`SDK/CEntity.h`, `Horion/path/JoePathFinder.cpp`) plus generated enum-entry comments
- **Hook TODOs:** 0
- **Commands with stub `execute()`:** 0
- **Script placeholders:** 0
- **Manager orphan symbols:** 0
- **Raw `func_0x` / `DAT_` / `PTR_` refs in source:** 0

---

## Bottom line

The new, more complete decompilation unlocked **52 modules with portable overridden method bodies**, resolved the vtable extraction blocker, and allowed the generated stub constructors to be updated with setting `min`/`max` values. The next immediate step is to port those 52 modules from their decompiled function bodies into the C++ stubs, starting with the high-priority COMBAT/MOVEMENT candidates, while the remaining ~64 stub modules still need their method bodies located or reconstructed.
