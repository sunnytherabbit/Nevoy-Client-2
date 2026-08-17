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
- **New blockers:**
  - None. All known module TODOs are resolved; the next pass would be a build/compile test or further parity verification.
- **Validation:** 0 broken braces, 0 stray `func_0x` calls, 0 TODOs in module sources.
- **Index/verification/naming pass:**
  - Indexed the entire refactored tree (`INDEX.md` / `INDEX.json`, 1197 files, 949 source files).
  - Verified the tree (`VERIFICATION.md`): 5 legacy TODOs (none in module sources), 0 stray `func_0x` calls, 0 broken braces in project source.
  - Verified/corrected module naming (`NAMING_REPORT.md`): 0 critical naming issues; fixed `Module_18021f300` non-printable module/setting names.
- **Remaining work:** detailed in `REMAINING_WORK.md`. High level: 45 modules are still full stubs, 80 `onLoadConfig`/`onSaveConfig` placeholders, missing settings in 13 modules, `Module_180156800` vtable, `Make` unregistered, no build yet, untracked `__pycache__`/`temp_bin`.
