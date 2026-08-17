# AGENTS.md — Oderso / Nevoy Client project context

## Workspace root

The canonical workspace root is `/Users/tl/Desktop/MCBE/Clients`. This directory contains the `Nevoy-Client-2` repository. Use this path for all commands and analysis.

The older path `/Users/tl/Desktop/MCBE/NEVOY/Nevoy-Client-2` is no longer current.

## Repository branches

Relevant branches in this repo:

- `main`
- `NEGAGLIENT`
- `devin/nevoy-decompilation`

## Active source

The active refactored source tree is:

```
Oderso/oderso_1.26.3X_refactored/
```

Target DLL for parity: `Oderso/1.26.3X.dll`.

## Current porting checkpoint

- **TODO stubs:** 0 across module sources (127 files total).
- **Recent work:**
  - Cleared the easier `defaults/min/max` setting TODOs across 18 modules using `parse_module_settings.py` + manifest cross-check.
  - Populated enum `addEntry` lists for `Module_180156800` (Background/Slot colors), `Module_180223cc0` (Sky & Font), `Module_1803238c0` (Button layout), `Module_18032ce60` (Separator), and `Module_180417c20` (Hotbar tooltips).
  - Fixed `Module_180130570` header layout so `changeAmount` is at the binary offset (`0xa4`) and set `Change amount` to `1, 1, 10`; added pointer/state fields `field_0x80..field_0xb4`.
  - Refactored `Module_1801f2430` header to match binary layout (`noBackground` 0xd0, `size` 0xd4, `switchPack` 0xd8, `switchDelay` 0xdc, `currentIndex` 0xe0, `selectedIndex` 0xe4) and registered the four binary settings.
  - Ported `Module_180130570` `onPreRender`/`onAttack`/`slot_30` by direct binary call and added `refreshEntityPointers()`/`onEnable()` to resolve the game-object pointer setup.
  - Reconstructed `Module_1801380b0` header so all fields (colors at 0x90/0xa0/0xb0, bools at 0x88/0x89/0x8d/0x601, ints 0x604-0x6b4) match the binary object layout.
  - Filled all `Module_1801380b0` constructor `registerIntSetting`/`registerBoolSetting` defaults, min, and max from the binary constructor and field initializers.
  - Finalised `Module_1801380b0` min/max parity (`Opacity` 0–0xFF, `Offset X/Y/Z` 0–1, `Max width/height/length` 1–1, `X/Y/Z` ±30000000, `Rot` 0–270) and added missing offset `static_asserts` (offsetY/Z, y/z).
  - Fixed global MinGW build blockers (`FuncHook` function pointer casts, `windows.foundation.h` IReference<boolean> redefinition, `__int64`, `getTooltip` declarations, UWP `__uuidof`/runtime linking, MinHook GS-cookie stubs in `compat.cpp`).
  - Cleared the final 20 `// TODO` markers across 12 module `.cpp` files: ported `onLoadConfig`/`onSaveConfig` for 8 modules via direct binary call, set `getTooltip` literals for 3 modules, and confirmed the IModule base config methods are sufficient for 2 modules.
- **New blockers:**
  - None. All known module TODOs are resolved; the MinGW cross-compile builds and links `lib1.26.3X.dll`.
- **Validation:** 0 broken braces, 0 stray `func_0x` calls, 0 TODOs in module sources.
- **Index/verification/naming pass:**
  - Indexed the entire refactored tree (`INDEX.md` / `INDEX.json`, 1197 files, 949 source files).
  - Verified the tree (`VERIFICATION.md`): 5 legacy TODOs (none in module sources), 0 stray `func_0x` calls, 0 broken braces in project source.
  - Verified/corrected module naming (`NAMING_REPORT.md`): 0 critical naming issues; fixed `Module_18021f300` non-printable module/setting names.
- **Remaining work:** detailed in `REMAINING_WORK.md`. High level: 0 `// TODO` markers remain in module sources, the MinGW build reaches 100% and produces `build-mingw/lib1.26.3X.dll`. `Module_180156800` is still flagged as invalid vtable in `tools/misaligned_modules.txt` (likely false positive). Next priorities are runtime parity validation, MSVC-specific build verification, and optional cleanup of untracked `__pycache__`/`temp_bin`.

## Agent execution rules

- Run at most **6 subagents in parallel** to avoid platform rate limits and give each agent enough context.
- If the subagent tool is rate-limited, fall back to manual/scripted passes and retry once the limit resets.
- Always verify the MinGW build after any batch of module edits before committing.
