# Deeper Module Scan Report

This report cross-checks every module found in the DLL against the refactored source.

## Summary
- Total modules in manifest: 126
- Implemented: 10
- Stubs (source present, no behavior): 116
- Missing from source: 0
- Not registered in ModuleManager.cpp: 0
- Top port candidates: 113

## Top port candidates (sorted by estimated impact)
Count: 113

| Class | Name | Category | Status | Settings | Func calls | Strings | Score |
|-------|------|----------|--------|----------|------------|---------|-------|
| `Module_180223cc0` |  | CUSTOM | stub | 15 | 38 | 1 | 22.0 |
| `Module_1802c5a20` |  | CUSTOM | stub | 14 | 45 | 1 | 21.0 |
| `Module_1801380b0` |  | CUSTOM | stub | 10 | 48 | 1 | 17.0 |
| `Module_1801e7620` |  | CUSTOM | stub | 10 | 26 | 1 | 16.2 |
| `Module_180195270` |  | CUSTOM | stub | 11 | 15 | 1 | 15.0 |
| `SkinStealer` | Skin Stealer | VISUAL | stub | 6 | 22 | 1 | 14.4 |
| `Module_1803238c0` |  | CUSTOM | stub | 6 | 33 | 1 | 13.0 |
| `Module_18024b340` |  | CUSTOM | stub | 7 | 24 | 1 | 12.8 |
| `Module_180156800` |  | CUSTOM | stub | 5 | 29 | 1 | 11.8 |
| `Module_18021f300` | &!" | CUSTOM | stub | 5 | 17 | 1 | 11.4 |
| `Module_1801dd4b0` |  | CUSTOM | stub | 4 | 29 | 1 | 10.8 |
| `Module_18032ce60` |  | COMBAT | stub | 5 | 19 | 1 | 10.8 |
| `Module_180331ad0` |  | CUSTOM | stub | 4 | 24 | 1 | 9.8 |
| `Module_1801fc680` |  | CUSTOM | stub | 5 | 15 | 1 | 9.0 |
| `Module_1801749e0` |  | CUSTOM | stub | 3 | 24 | 1 | 8.8 |
| `Module_180178c80` |  | CUSTOM | stub | 5 | 12 | 1 | 8.4 |
| `Module_1802cfa50` |  | CUSTOM | stub | 3 | 21 | 1 | 8.2 |
| `Module_18017c4a0` |  | COMBAT | stub | 1 | 26 | 1 | 8.2 |
| `Module_18031b4d0` |  | CUSTOM | stub | 3 | 20 | 1 | 8.0 |
| `Module_180417c20` |  | CUSTOM | stub | 1 | 29 | 1 | 7.8 |
| `Module_1802c1ee0` |  | CUSTOM | stub | 3 | 18 | 1 | 7.6 |
| `Module_1803138e0` |  | COMBAT | stub | 3 | 13 | 1 | 7.6 |
| `Module_1801a2840` |  | CUSTOM | stub | 3 | 17 | 1 | 7.4 |
| `Module_1801f8fc0` |  | CUSTOM | stub | 3 | 17 | 1 | 7.4 |
| `Make` | Make | CUSTOM | stub | 2 | 11 | 1 | 7.2 |
| `Limits` | Limits C | CUSTOM | stub | 2 | 10 | 1 | 7.0 |
| `Module_180149a30` |  | CUSTOM | stub | 3 | 14 | 1 | 6.8 |
| `Module_18019a5d0` |  | CUSTOM | stub | 3 | 14 | 1 | 6.8 |
| `Module_1802e5290` |  | CUSTOM | stub | 1 | 23 | 1 | 6.6 |
| `Module_180360610` |  | CUSTOM | stub | 1 | 23 | 1 | 6.6 |
| `Module_1802039a0` |  | COMBAT | stub | 1 | 18 | 1 | 6.6 |
| `Module_180248800` |  | CUSTOM | stub | 2 | 15 | 1 | 6.0 |
| `Module_1802c0340` |  | CUSTOM | stub | 2 | 15 | 1 | 6.0 |
| `Module_180185460` |  | CUSTOM | stub | 1 | 20 | 1 | 6.0 |
| `Module_1801f2430` |  | CUSTOM | stub | 2 | 15 | 1 | 6.0 |
| `Module_180130570` |  | CUSTOM | stub | 1 | 18 | 1 | 5.6 |
| `Module_1801edba0` |  | CUSTOM | stub | 2 | 13 | 1 | 5.6 |
| `Module_1802f7580` |  | CUSTOM | stub | 1 | 18 | 1 | 5.6 |
| `Module_1803455d0` |  | CUSTOM | stub | 2 | 13 | 1 | 5.6 |
| `Module_1802079f0` |  | CUSTOM | stub | 2 | 13 | 1 | 5.6 |

## Missing from source (no .cpp file)
Count: 0


## Stubs (source present, only constructor + getModuleName)
Count: 116

- `Module_1801fbc20` — unnamed (CUSTOM)
- `Module_1803238c0` — unnamed (CUSTOM)
- `Module_1801d2430` — unnamed (CUSTOM)
- `Module_18020ca00` — unnamed (CUSTOM)
- `Module_180178c80` — unnamed (CUSTOM)
- `Module_1802fb570` — unnamed (CUSTOM)
- `Module_180331ad0` — unnamed (CUSTOM)
- `Module_180218db0` — unnamed (CUSTOM)
- `Module_180247570` — unnamed (CUSTOM)
- `Module_180417c20` — unnamed (CUSTOM)
- `Module_18033b770` — unnamed (CUSTOM)
- `Module_1802501f0` — unnamed (CUSTOM)
- `Module_1801e6000` — unnamed (CUSTOM)
- `Module_180130570` — unnamed (CUSTOM)
- `Module_180156800` — unnamed (CUSTOM)
- `Module_1801afdc0` — unnamed (CUSTOM)
- `Module_18021f300` — &!" (CUSTOM)
- `Module_180241f60` — unnamed (CUSTOM)
- `Module_180248800` — unnamed (CUSTOM)
- `Module_1801c2930` — unnamed (CUSTOM)
- `Module_1801edba0` — unnamed (CUSTOM)
- `Module_180420050` — unnamed (CUSTOM)
- `Module_180424ef0` — unnamed (CUSTOM)
- `Module_1802f7580` — unnamed (CUSTOM)
- `Module_18031b4d0` — unnamed (CUSTOM)
- `Module_1802ac240` — unnamed (CUSTOM)
- `Module_1802cfa50` — unnamed (CUSTOM)
- `Make` — Make (CUSTOM)
- `Module_1801914f0` — unnamed (VISUAL)
- `Module_1804168f0` — unnamed (CUSTOM)
- `Module_1802fc040` — unnamed (CUSTOM)
- `Module_180347d80` — unnamed (CUSTOM)
- `Module_1802c1ee0` — unnamed (CUSTOM)
- `Module_18020a2d0` — unnamed (COMBAT)
- `SkinStealer` — Skin Stealer (VISUAL)
- `Module_18018d820` — unnamed (CUSTOM)
- `Module_18018f510` — unnamed (VISUAL)
- `Module_1802e5290` — unnamed (CUSTOM)
- `Limits` — Limits C (CUSTOM)
- `Module_1803455d0` — unnamed (CUSTOM)
- `Module_180360610` — unnamed (CUSTOM)
- `Module_180240430` — unnamed (CUSTOM)
- `Module_1802452c0` — unnamed (CUSTOM)
- `Module_180245d30` — unnamed (CUSTOM)
- `Module_1801380b0` — unnamed (CUSTOM)
- `Module_1801749e0` — unnamed (CUSTOM)
- `Module_1801899c0` — unnamed (CUSTOM)
- `Module_180193330` — unnamed (COMBAT)
- `Module_18040d7d0` — unnamed (CUSTOM)
- `Module_1803404a0` — unnamed (CUSTOM)
- `Module_1802bea40` — unnamed (CUSTOM)
- `Module_1801e52f0` — unnamed (CUSTOM)
- `Module_18017c4a0` — unnamed (COMBAT)
- `Module_180195270` — unnamed (CUSTOM)
- `Module_1801a2840` — unnamed (CUSTOM)
- `Module_180404050` — unnamed (CUSTOM)
- `Module_180415150` — unnamed (CUSTOM)
- `Module_180242db0` — unnamed (CUSTOM)
- `Module_180243e70` — unnamed (CUSTOM)
- `Module_1801e7090` — unnamed (CUSTOM)
- `Module_1801e7620` — unnamed (CUSTOM)
- `Module_180177eb0` — unnamed (CUSTOM)
- `Module_180188f20` — unnamed (CUSTOM)
- `Module_1802c0340` — unnamed (CUSTOM)
- `Module_1801dd4b0` — unnamed (CUSTOM)
- `Module_180136cd0` — unnamed (CUSTOM)
- `Module_18024b340` — unnamed (CUSTOM)
- `Module_1802d3fd0` — unnamed (CUSTOM)
- `Module_1801fc680` — unnamed (CUSTOM)
- `Module_180223cc0` — unnamed (CUSTOM)
- `Module_180185460` — unnamed (CUSTOM)
- `Module_1801e20d0` — unnamed (CUSTOM)
- `Module_180219990` — unnamed (CUSTOM)
- `Module_18014f210` — unnamed (COMBAT)
- `Module_18031e130` — unnamed (COMBAT)
- `Module_18020d4c0` — unnamed (MOVEMENT)
- `Module_180412630` — unnamed (COMBAT)
- `Module_18032ce60` — unnamed (COMBAT)
- `Module_1801f2430` — unnamed (CUSTOM)
- `Module_1802c5a20` — unnamed (CUSTOM)
- `Module_180149a30` — unnamed (CUSTOM)
- `Module_1801f8fc0` — unnamed (CUSTOM)
- `Module_1801a0e40` — unnamed (CUSTOM)
- `Module_180404ac0` — unnamed (CUSTOM)
- `Module_18041e380` — unnamed (COMBAT)
- `Module_1802ce320` — unnamed (COMBAT)
- `Module_1802079f0` — unnamed (CUSTOM)
- `Module_180429900` — unnamed (CUSTOM)
- `Module_180341050` — unnamed (COMBAT)
- `Module_1803138e0` — unnamed (COMBAT)
- `Module_18019a5d0` — unnamed (CUSTOM)
- `Module_1802f4ea0` — unnamed (CUSTOM)
- `Module_1802039a0` — unnamed (COMBAT)
- `Module_180415790` — unnamed (COMBAT)
- `Module_180371f00` — unnamed (CUSTOM)
- `Module_1804e5480` — unnamed (CUSTOM)
- `Module_1804e7c10` — unnamed (CUSTOM)
- `Module_18037bc90` — unnamed (CUSTOM)
- `Module_180380fc0` — unnamed (CUSTOM)
- `Module_1804ce890` — unnamed (CUSTOM)
- `Module_1804df4a0` — unnamed (CUSTOM)
- `Module_180380410` — unnamed (CUSTOM)
- `Module_1804e44c0` — unnamed (CUSTOM)
- `Module_18038bc60` — unnamed (CUSTOM)
- `Module_1804cf410` — unnamed (CUSTOM)
- `Module_1804d6b70` — unnamed (CUSTOM)
- `Module_180376860` — unnamed (CUSTOM)
- `Module_1804f3ae0` — unnamed (CUSTOM)
- `Module_180388cf0` — unnamed (CUSTOM)
- `Module_1804d8520` — unnamed (CUSTOM)
- `Module_1804dd020` — unnamed (CUSTOM)
- `Module_1804de3f0` — unnamed (CUSTOM)
- `Module_1804c9320` — unnamed (CUSTOM)
- `Module_1804f24e0` — unnamed (CUSTOM)
- `Module_1804e2da0` — unnamed (CUSTOM)
- `Module_1804e6e10` — unnamed (CUSTOM)

## Not registered in ModuleManager.cpp
Count: 0
- All manifest modules are registered.

## Next steps
1. Pick the top candidates from the score table and port them.
2. For missing modules, generate a new `Module_<addr>.h/.cpp` skeleton and add it to CMakeLists/ModuleManager.
3. For stubs, fill in the relevant `onTick`/`onPostRender`/`onLevelRender`/etc. methods.
4. Re-run this scan after porting to track progress.