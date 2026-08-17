# Remaining Work — Oderso 1.26.3X Refactored
This is a snapshot of what is done and what still needs work after the index/verification/naming pass.

## Done
- Complete file index: `INDEX.md` / `INDEX.json` (1197 files, 949 source files).
- Global source verification: `VERIFICATION.md` — 0 `// TODO` in Oderso module sources, 0 stray `func_0x...(...)` calls, 0 broken braces in project source.
- Naming verification: `NAMING_REPORT.md` — 0 critical naming issues; `Module_18021f300` non-printable names fixed.
- All 102 manifest modules are registered in `ModuleManager.cpp`.
- Constructor settings/defaults filled for the vast majority of modules.
- Remaining `onLoadConfig` / `onSaveConfig` placeholders and `getTooltip` TLS-encrypted string TODOs cleared (20 TODOs across 12 files):
  - `onLoadConfig` / `onSaveConfig` now either call the module-specific binary function or fall back to the IModule base serializer where the vtable uses the default `func_0x180135130` / `func_0x180135c90`.
  - `getTooltip` for `Module_180223cc0` now returns the manifest description `"Rainbow text"`; `Module_18021f300` and `Module_180195270` return `""` because their manifests have no description.
- Full MinGW cross-compile build succeeds and links `build-mingw/lib1.26.3X.dll`.

## Notes on the "45 full-stub modules" list
The original list of 45 modules that appeared to have only constructor + `getModuleName` / `getTooltip` is misleading. The deeper module scan (`deeper_module_scan_report.md`) now reports 0 stubs because many of these modules have no binary-overridden IModule behavior methods (their vtables point only to the default `func_0x18008c310` / `func_0x180088ba0` implementations). They are source-complete as constructors and settings; no additional method porting is required unless their vtables show non-default overrides.

## Still to investigate
1. **Runtime parity validation** — the built `lib1.26.3X.dll` needs to be tested in-game against the original `Oderso/1.26.3X.dll`.
2. **MSVC build verification** — the MinGW build is green, but a native Windows/MSVC build may expose ABI or layout differences.
3. **`Module_180156800` vtable flag** — resolved. The vtable extraction script `tools/extract_module_vtable.py` was pointing at a stale/missing decomp dump; switching it to `ghidra_decompiled_1.26.3X_new.c` and regenerating `tools/module_vtables_full.txt` produced 0 skipped modules, leaving `tools/misaligned_modules.txt` empty.
4. **Repository clean-up** — tracked `tools/__pycache__/*.pyc` have been moved to `.trash/` and a root `.gitignore` now hides build, decomp, and Ghidra project artifacts. `temp_bin/` was not present.
