# Oderso 1.26.3X Source Audit Report

This report lists the remaining incomplete/stub code in the refactored source tree.

## 1. Oderso generated module stubs
Count: 61 files have only a constructor + `getModuleName` (no behavior methods).

- `Module_1801380b0.cpp`
- `Module_18014f210.cpp`
- `Module_1801749e0.cpp`
- `Module_180178c80.cpp`
- `Module_18017c4a0.cpp`
- `Module_180185460.cpp`
- `Module_18018d820.cpp`
- `Module_18018f510.cpp`
- `Module_1801914f0.cpp`
- `Module_180195270.cpp`
- `Module_18019a5d0.cpp`
- `Module_1801a0e40.cpp`
- `Module_1801a2840.cpp`
- `Module_1801afdc0.cpp`
- `Module_1801dd4b0.cpp`
- `Module_1801e6000.cpp`
- `Module_1801e7620.cpp`
- `Module_1801edba0.cpp`
- `Module_1801f2430.cpp`
- `Module_1801f8fc0.cpp`
- `Module_1801fc680.cpp`
- `Module_1802039a0.cpp`
- `Module_1802079f0.cpp`
- `Module_18020ca00.cpp`
- `Module_180219990.cpp`
- `Module_18021f300.cpp`
- `Module_180223cc0.cpp`
- `Module_180240430.cpp`
- `Module_180242db0.cpp`
- `Module_180243e70.cpp`
- `Module_1802452c0.cpp`
- `Module_180245d30.cpp`
- `Module_180247570.cpp`
- `Module_180248800.cpp`
- `Module_18024b340.cpp`
- `Module_1802501f0.cpp`
- `Module_1802ac240.cpp`
- `Module_1802bea40.cpp`
- `Module_1802c0340.cpp`
- `Module_1802c1ee0.cpp`
- `Module_1802c5a20.cpp`
- `Module_1802cfa50.cpp`
- `Module_1802e5290.cpp`
- `Module_1802f4ea0.cpp`
- `Module_1802f7580.cpp`
- `Module_1802fb570.cpp`
- `Module_1802fc040.cpp`
- `Module_1803138e0.cpp`
- `Module_18031b4d0.cpp`
- `Module_1803238c0.cpp`
- `Module_18032ce60.cpp`
- `Module_180341050.cpp`
- `Module_1803455d0.cpp`
- `Module_180360610.cpp`
- `Module_180404ac0.cpp`
- `Module_18040d7d0.cpp`
- `Module_180417c20.cpp`
- `Module_18041e380.cpp`
- `Module_180420050.cpp`
- `Module_180424ef0.cpp`
- `Module_180429900.cpp`

Partially implemented generated modules: 52
- `Module_180130570.cpp` implements: selectHeader, onPreRender, onEnable, onAttack
- `Module_180136cd0.cpp` implements: getTooltip, onPreRender
- `Module_180149a30.cpp` implements: getTooltip, onPostRender, onLevelRender, isFlashMode, setEnabled
- `Module_180156800.cpp` implements: getTooltip, onPreRender, onLevelRender
- `Module_180177eb0.cpp` implements: getTooltip
- `Module_180188f20.cpp` implements: getTooltip
- `Module_1801899c0.cpp` implements: getTooltip, onAttack, isFlashMode, setEnabled
- `Module_180193330.cpp` implements: getTooltip, onEnable
- `Module_1801c2930.cpp` implements: getTooltip
- `Module_1801d2430.cpp` implements: getTooltip, onPreRender, onLevelRender
- `Module_1801e20d0.cpp` implements: getTooltip, onPreRender, isFlashMode, setEnabled
- `Module_1801e52f0.cpp` implements: getTooltip, onPreRender
- `Module_1801e7090.cpp` implements: getTooltip, onPreRender, onPostRender
- `Module_1801fbc20.cpp` implements: getTooltip
- `Module_18020a2d0.cpp` implements: getTooltip, onEnable
- `Module_18020d4c0.cpp` implements: getTooltip, onPreRender, onEnable
- `Module_180218db0.cpp` implements: getTooltip, onPreRender, onEnable, onPostRender
- `Module_180241f60.cpp` implements: getTooltip, onPreRender, onSendPacket, callWhenDisabled
- `Module_1802ce320.cpp` implements: getTooltip
- `Module_1802d3fd0.cpp` implements: getTooltip, onPreRender, onPostRender
- `Module_18031e130.cpp` implements: getTooltip, onPreRender, onEnable, callWhenDisabled
- `Module_180331ad0.cpp` implements: getTooltip, onPreRender, onPostRender, onLevelRender, isFlashMode, setEnabled
- `Module_18033b770.cpp` implements: getTooltip, onPreRender, onPostRender, isFlashMode, setEnabled
- `Module_1803404a0.cpp` implements: getTooltip, onPreRender
- `Module_180347d80.cpp` implements: getTooltip, onPreRender, onEnable
- `Module_180371f00.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onEnable, onDisable, onPostRender, onLevelRender, onMove, onSendPacket, onSaveConfig, isFlashMode, isEnabled, setEnabled, toggle, callWhenDisabled
- `Module_180376860.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onEnable, onDisable, onPostRender, onLevelRender, onMove, onSendPacket, onSaveConfig, isFlashMode, isEnabled, setEnabled, toggle, callWhenDisabled
- `Module_18037bc90.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onEnable, onDisable, onPostRender, onLevelRender, onMove, onSendPacket, isEnabled, setEnabled, toggle, callWhenDisabled
- `Module_180380410.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onPostRender, onLevelRender, onMove, onSendPacket, onLoadConfig, onSaveConfig, isEnabled, setEnabled, toggle, callWhenDisabled
- `Module_180380fc0.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onEnable, onDisable, onPostRender, onLevelRender, onMove, callWhenDisabled
- `Module_180388cf0.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onMove, onLoadConfig, onSaveConfig, isFlashMode, isEnabled, setEnabled, toggle, callWhenDisabled
- `Module_18038bc60.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onEnable, onDisable
- `Module_180404050.cpp` implements: getTooltip, onPreRender, onPostRender
- `Module_180412630.cpp` implements: getTooltip, onEnable
- `Module_180415150.cpp` implements: getTooltip, onEnable, onPostRender
- `Module_180415790.cpp` implements: getTooltip, isFlashMode, setEnabled
- `Module_1804168f0.cpp` implements: getTooltip, onPreRender, onPostRender, onLoadConfig
- `Module_1804c9320.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onEnable, onDisable, onPostRender, onLevelRender, onMove, isFlashMode, isEnabled, setEnabled, toggle, callWhenDisabled
- `Module_1804ce890.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onDisable, onPostRender, onMove, onSendPacket, onSaveConfig, isFlashMode, isEnabled, setEnabled, toggle, callWhenDisabled
- `Module_1804cf410.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onEnable, onDisable, onPostRender, onLevelRender, onMove, onSendPacket, onSaveConfig, isFlashMode, isEnabled, setEnabled, toggle, callWhenDisabled
- `Module_1804d6b70.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onEnable, onDisable, onPostRender, onLevelRender, onMove, onSendPacket, onSaveConfig, isFlashMode, isEnabled, setEnabled, toggle, callWhenDisabled
- `Module_1804d8520.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onEnable, onDisable, onPostRender, onLevelRender, onMove, onSendPacket, onSaveConfig, isFlashMode, isEnabled, setEnabled, toggle, callWhenDisabled
- `Module_1804dd020.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onEnable, onDisable, onPostRender, onLevelRender, onMove, onSendPacket, isEnabled, setEnabled, toggle, callWhenDisabled
- `Module_1804de3f0.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onPostRender, onLevelRender, onMove, onSendPacket, onLoadConfig, onSaveConfig, isEnabled, setEnabled, toggle, callWhenDisabled
- `Module_1804df4a0.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onEnable, onDisable, onPostRender, onLevelRender, onMove, onSendPacket, onSaveConfig, isFlashMode, isEnabled, setEnabled, toggle, callWhenDisabled
- `Module_1804e2da0.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onEnable, onDisable, onPostRender, onLevelRender, onMove, onSendPacket, onSaveConfig, isFlashMode, isEnabled, setEnabled, toggle, callWhenDisabled
- `Module_1804e44c0.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onEnable, onDisable, onPostRender, onLevelRender, onMove, onSendPacket, isEnabled, callWhenDisabled
- `Module_1804e5480.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPostRender, onLevelRender, onMove, onSendPacket, onLoadConfig, onSaveConfig, isFlashMode, isEnabled, setEnabled, callWhenDisabled
- `Module_1804e6e10.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onEnable, onDisable, onPostRender, onLevelRender, onMove, onSendPacket, onSaveConfig, isFlashMode, isEnabled, setEnabled, toggle, callWhenDisabled
- `Module_1804e7c10.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onEnable, onDisable, onPostRender, onLevelRender, onMove, onSendPacket, onSaveConfig, isFlashMode, isEnabled, setEnabled, toggle, callWhenDisabled
- `Module_1804f24e0.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick, onPreRender, onAttack, onEnable, onDisable, onPostRender, onLevelRender, onMove
- `Module_1804f3ae0.cpp` implements: getRawModuleName, getKeybind, setKeybind, allowAutoStart, onTick

## 2. Remaining decompiled function references
Count: 0 files reference `func_0x...` symbols.


## 3. Remaining DAT_/PTR_ data references
Count: 0 files.
- None found.

## 4. TODO/FIXME/XXX markers
Count: 41 files.

- `SDK/CEntity.h` (2 markers)
- `Oderso/Module/Modules/Module_1804168f0.cpp` (3 markers)
- `Oderso/Module/Modules/Module_180331ad0.cpp` (4 markers)
- `Oderso/Module/Modules/Module_18037bc90.cpp` (13 markers)
- `Oderso/Module/Modules/Module_180156800.cpp` (1 markers)
- `Oderso/Module/Modules/Module_1804e5480.cpp` (10 markers)
- `Oderso/Module/Modules/Module_180136cd0.cpp` (1 markers)
- `Oderso/Module/Modules/Module_1804df4a0.cpp` (14 markers)
- `Oderso/Module/Modules/Module_180404050.cpp` (2 markers)
- `Oderso/Module/Modules/Module_1801e52f0.cpp` (1 markers)
- `Oderso/Module/Modules/Module_1801d2430.cpp` (2 markers)
- `Oderso/Module/Modules/Module_1801e20d0.cpp` (2 markers)
- `Oderso/Module/Modules/Module_180371f00.cpp` (14 markers)
- `Oderso/Module/Modules/Module_1804e7c10.cpp` (14 markers)
- `Oderso/Module/Modules/Module_1804ce890.cpp` (12 markers)
- `Oderso/Module/Modules/Module_180241f60.cpp` (2 markers)
- `Oderso/Module/Modules/Module_18038bc60.cpp` (4 markers)
- `Oderso/Module/Modules/Module_180388cf0.cpp` (8 markers)
- `Oderso/Module/Modules/Module_180149a30.cpp` (3 markers)
- `Oderso/Module/Modules/Module_180218db0.cpp` (2 markers)
- `Oderso/Module/Modules/Module_180415790.cpp` (1 markers)
- `Oderso/Module/Modules/Module_1804e2da0.cpp` (14 markers)
- `Oderso/Module/Modules/Module_1804d8520.cpp` (14 markers)
- `Oderso/Module/Modules/Module_1801899c0.cpp` (2 markers)
- `Oderso/Module/Modules/Module_1804cf410.cpp` (14 markers)
- `Oderso/Module/Modules/Module_1804e44c0.cpp` (11 markers)
- `Oderso/Module/Modules/Module_1804c9320.cpp` (12 markers)
- `Oderso/Module/Modules/Module_180376860.cpp` (14 markers)
- `Oderso/Module/Modules/Module_18033b770.cpp` (3 markers)
- `Oderso/Module/Modules/Module_1804f3ae0.cpp` (2 markers)
- `Oderso/Module/Modules/Module_180380410.cpp` (13 markers)
- `Oderso/Module/Modules/Module_1804dd020.cpp` (13 markers)
- `Oderso/Module/Modules/Module_1804e6e10.cpp` (14 markers)
- `Oderso/Module/Modules/Module_1801e7090.cpp` (2 markers)
- `Oderso/Module/Modules/Module_180380fc0.cpp` (10 markers)
- `Oderso/Module/Modules/Module_1804d6b70.cpp` (14 markers)
- `Oderso/Module/Modules/Module_180347d80.cpp` (1 markers)
- `Oderso/Module/Modules/Module_1804f24e0.cpp` (9 markers)
- `Oderso/Module/Modules/Module_1804de3f0.cpp` (13 markers)
- `Oderso/Module/Modules/Module_1802d3fd0.cpp` (2 markers)
- `Horion/path/JoePathFinder.cpp` (1 markers)

## 5. Stub commands
Count: 0 commands have trivial `execute()` bodies.

## 6. Stub/incomplete script functions
Count: 0 files.

## 7. Hook issues in Memory/Hooks.cpp
Count: 0 TODO/FIXME comments near hook definitions.

## 8. Manager orphan symbols
Count: 0 symbols used in managers with no .cpp definition.
- None.

## 9. Next recommended steps
1. Port the generated module stubs from their matching decompiled functions.
2. Replace `func_0x` / `DAT_` / `PTR_` references in `Utils/` and `NameTags.h` with typed calls.
3. Fill in stub command `execute()` methods.
4. Complete or remove script function placeholders.
5. Resolve `Memory/Hooks.cpp` TODOs and verify signatures/vtable indices.
6. Runtime test the built `1.26.3X.dll`.