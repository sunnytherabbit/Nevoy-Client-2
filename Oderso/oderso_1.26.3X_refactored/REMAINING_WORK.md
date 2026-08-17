# Remaining Work — Oderso 1.26.3X Refactored
This is a snapshot of what is done and what still needs work after the index/verification/naming pass.
## Done
- Complete file index: `INDEX.md` / `INDEX.json` (1197 files, 949 source files).
- Global source verification: `VERIFICATION.md` — 0 `// TODO` in Oderso module sources, 0 stray `func_0x...(...)` calls, 0 broken braces in project source.
- Naming verification: `NAMING_REPORT.md` — 0 critical naming issues; `Module_18021f300` non-printable names fixed.
- All 102 manifest modules are registered in `ModuleManager.cpp`.
- 82 of 127 source module files have at least one behavior method ported (direct binary calls or logic).
- Constructor settings/defaults filled for the vast majority of modules.

## To Do
### 1. Full stub modules (no behavior methods)
**45 modules** are still only constructor + `getModuleName` / `getTooltip` / destructor.

**Regular modules (23):**
- `HideUI` (Hide UI)
- `Make` (—)
- `Module_180156800` (—)
- `Module_180177eb0` (—)
- `Module_180178c80` (—)
- `Module_180188f20` (—)
- `Module_180195270` (—)
- `Module_1801afdc0` (—)
- `Module_1801c2930` (—)
- `Module_1801e6000` (—)
- `Module_1801edba0` (—)
- `Module_1801fbc20` (—)
- `Module_18020ca00` (—)
- `Module_18021f300` (&!")
- `Module_180223cc0` (—)
- `Module_180242db0` (—)
- `Module_1802452c0` (—)
- `Module_1802501f0` (—)
- `Module_1802fb570` (—)
- `Module_18031b4d0` (—)
- `Module_180417c20` (—)
- `MoveDirectionLatestMovementKeyPressedWhenHoldingBoth` (Makes you move in the direction of the latest movement key pressed when holding both)
- `NameTags` (NameTags)

**Command modules (22):**
- `Module_180371f00` (CustomCrosshair)
- `Module_180376860` (CustomHitsound)
- `Module_18037bc90` (BlockOverlay)
- `Module_180380410` (SetPrefix)
- `Module_180380fc0` (TextHotkey)
- `Module_180388cf0` (Unbind)
- `Module_18038bc60` (Waypoints)
- `Module_1804c9320` (Bind)
- `Module_1804ce890` (ClearChat)
- `Module_1804cf410` (ConfigManager)
- `Module_1804d6b70` (Coords)
- `Module_1804d8520` (Dodge)
- `Module_1804dd020` (Eject)
- `Module_1804de3f0` (Help)
- `Module_1804df4a0` (HiveStats)
- `Module_1804e2da0` (Nick)
- `Module_1804e44c0` (Panorama)
- `Module_1804e5480` (PlayerInfo)
- `Module_1804e6e10` (Say)
- `Module_1804e7c10` (Schematic)
- `Module_1804f24e0` (Seed)
- `Module_1804f3ae0` (ServerInfo)

### 2. `onLoadConfig` / `onSaveConfig` placeholders
**80 methods** across **41** files are still calling the `IModule` base or empty.
- `CPS.cpp`: onLoadConfig, onSaveConfig
- `ChunkBorders.cpp`: onLoadConfig, onSaveConfig
- `FPS.cpp`: onLoadConfig, onSaveConfig
- `Module_180149a30.cpp`: onLoadConfig, onSaveConfig
- `Module_18014f210.cpp`: onLoadConfig, onSaveConfig
- `Module_18017c4a0.cpp`: onLoadConfig, onSaveConfig
- `Module_1801899c0.cpp`: onLoadConfig, onSaveConfig
- `Module_18018f510.cpp`: onLoadConfig, onSaveConfig
- `Module_1801914f0.cpp`: onLoadConfig, onSaveConfig
- `Module_180193330.cpp`: onLoadConfig, onSaveConfig
- `Module_18019a5d0.cpp`: onLoadConfig, onSaveConfig
- `Module_1801a0e40.cpp`: onLoadConfig, onSaveConfig
- `Module_1801a2840.cpp`: onLoadConfig, onSaveConfig
- `Module_1801e20d0.cpp`: onLoadConfig, onSaveConfig
- `Module_1801f2430.cpp`: onLoadConfig, onSaveConfig
- `Module_1801f8fc0.cpp`: onLoadConfig, onSaveConfig
- `Module_1801fc680.cpp`: onLoadConfig, onSaveConfig
- `Module_1802039a0.cpp`: onLoadConfig, onSaveConfig
- `Module_1802079f0.cpp`: onLoadConfig, onSaveConfig
- `Module_18020a2d0.cpp`: onLoadConfig, onSaveConfig
- `Module_18020d4c0.cpp`: onLoadConfig, onSaveConfig
- `Module_180219990.cpp`: onLoadConfig, onSaveConfig
- `Module_1802ac240.cpp`: onLoadConfig
- `Module_1802ce320.cpp`: onLoadConfig, onSaveConfig
- `Module_1802e5290.cpp`: onLoadConfig, onSaveConfig
- `Module_1802f4ea0.cpp`: onLoadConfig, onSaveConfig
- `Module_1802fc040.cpp`: onLoadConfig
- `Module_1803138e0.cpp`: onLoadConfig, onSaveConfig
- `Module_18031e130.cpp`: onLoadConfig, onSaveConfig
- `Module_18032ce60.cpp`: onLoadConfig, onSaveConfig
- `Module_180331ad0.cpp`: onLoadConfig, onSaveConfig
- `Module_18033b770.cpp`: onLoadConfig, onSaveConfig
- `Module_180341050.cpp`: onLoadConfig, onSaveConfig
- `Module_1803455d0.cpp`: onLoadConfig, onSaveConfig
- `Module_180404ac0.cpp`: onLoadConfig, onSaveConfig
- `Module_180412630.cpp`: onLoadConfig, onSaveConfig
- `Module_180415790.cpp`: onLoadConfig, onSaveConfig
- `Module_18041e380.cpp`: onLoadConfig, onSaveConfig
- `Module_180424ef0.cpp`: onLoadConfig, onSaveConfig
- `Module_180429900.cpp`: onLoadConfig, onSaveConfig
- `OdersoCompass.cpp`: onLoadConfig, onSaveConfig

### 3. Settings / naming clean-up
See `NAMING_REPORT.md` notes. Main items:
- `Module_1801380b0` has a placeholder setting `field_0x601`.
- 13 modules have manifest settings that are not present in source (e.g., `ChunkBorders`, `HideUI`, `NameTags`, `OdersoCompass`, `Module_1802fc040`, etc.).
- Several command module names/decoded strings are still empty or abbreviated.

### 4. Vtable / layout issues
- `Module_180156800` is flagged as `invalid vtable` in `tools/misaligned_modules.txt`.

### 5. Unregistered module
- `Make.cpp` exists in source but is **not** added to `ModuleManager.cpp`.

### 6. Build verification
- `cmake` is not installed in the environment, so the project has not yet been compiled.
- The first build pass would surface any remaining header/missing-include/signature errors.

### 7. Repository clean-up
- Generated `__pycache__` files and `temp_bin/` are untracked and should be moved to a trash folder per the global rule.

## Suggested order
1. Run a build (or install `cmake` and build) to catch compile-time issues.
2. Port the highest-impact full-stub regular modules first (`NameTags`, `Module_180223cc0`, `Module_180195270`, `Module_18021f300`, `HideUI`, etc.).
3. Fill `onLoadConfig` / `onSaveConfig` placeholders in batches.
4. Add missing settings and clean command module names.
5. Investigate `Module_180156800` vtable and `Make` registration.
