# Nevoy / Oderso Client Method-Porting — Handoff Doc

**Date:** 2026-08-17  
**Current workspace:** `/Users/tl/Desktop/MCBE/Clients/Oderso/oderso_1.26.3X_refactored`  
**Target DLL for parity:** `Oderso/1.26.3X.dll`  
**Decompiled source:** `Oderso/ghidra_decompiled_1.26.3X_new.c`  
**Module source:** `Oderso/Module/Modules/*.h`, `*.cpp`  
**Current TODO count:** 0 across module sources.\n**File index:** `INDEX.md` / `INDEX.json` (1197 files total).\n**Verification:** `VERIFICATION.md` — 0 broken braces, 0 stray `func_0x` calls, 5 legacy TODOs (none in module sources).\n**Naming:** `NAMING_REPORT.md` — 0 critical naming issues, 13 informational notes (missing manifest settings / placeholders).  

---

## 1. Goal
Port every module method body from the decompiled `1.26.3X.dll` binary into the refactored C++ source. Preserve ABI, vtable layout, and in-memory class layout. Where a binary method is too complex to rewrite, call it directly via `g_Data.getModule()->ptrBase + <rva>`.

---

## 2. Quick orientation

| Path | Purpose |
|------|---------|
| `Oderso/Module/Modules/*.h` | Module class headers; MUST match binary layout (add `_binaryPadding` / `field_0x...` as needed). |
| `Oderso/Module/Modules/*.cpp` | Module method bodies; `// TODO` / `// Binary function: func_0x...` mark remaining work. |
| `Horion/Module/Modules/Module.h` | `IModule` base class and vtable order. Currently 32 slots (0 = destructor, 31 = slot_31). |
| `tools/vtable_config.py` | Canonical slot names and signatures used by stub/port scripts. Keep this, `Module.h`, and `.h`/`.cpp` in sync. |
| `Memory/GameData.h` | `g_Data` helpers for game state, options, patching, module manager, etc. |
| `Oderso/1.26.3X.dll` | Target binary. Base `mod->ptrBase` is this module’s load base. |
| `Oderso/ghidra_decompiled_1.26.3X_new.c` | Decompiled C source; search for `func_0x...` here. |
| `LOG.md` | Per-prompt session logbook for the last few days. |
| `README.md` | General project notes. |

---

## 3. `GameData` helpers (already mapped)

All in `Memory/GameData.h`, accessed through global `g_Data`:

```cpp
g_Data.getClientInstance();        // real C_ClientInstance* (or nullptr)
g_Data.getLocalPlayer();           // real C_LocalPlayer*
g_Data.getMinecraft();             // binary Minecraft* from DAT_180840a58
g_Data.getOptions();               // options object from ClientInstance + 0x1d8
g_Data.getModuleManager();         // pointer at DAT_180840a50
g_Data.getUIFlagPtr();             // ModuleManager + 0x1c0
g_Data.getLevel();                 // Minecraft + 0xc58
g_Data.getEntityListEntry(level, typeIndex);  // level + 0x10 + index*8
g_Data.getAttackButtonMask();      // ModuleManager + 0x1d8
g_Data.getAttackButtonFlag();      // DAT_180840f35
g_Data.setOption(optionId, value, f1, f2);  // binary option setter, rva 0x1198e0
g_Data.getObjectAt0x10(obj);       // obj + 0x10
g_Data.getObjectAt0x48(obj);       // obj + 0x48
g_Data.updateClientGlobal();       // sets DAT_180840a60 / DAT_180840a68
g_Data.getModule();                // `SlimModule*` for the game binary (used for `ptrBase`)
g_Data.getSlimMem();               // memory interface
```

**Code patch helpers (static):**
```cpp
GameData::patchToCode(dest, src, size);   // write bytes into executable memory
GameData::patchFromCode(dest, src, size); // read original bytes from executable memory
GameData::nopCode(dest, size);            // fill with 0x90
GameData::allocNearCode(target, size);    // allocate near target for relative jumps
GameData::freeNearCode(p);
```

---

## 4. Direct binary call pattern

This is the bread-and-butter for any method that has not been fully decomposed yet:

```cpp
void MyModule::onEnable() {
    auto mod = g_Data.getModule();
    if (mod == nullptr) return;
    using FuncT = void(*)(void*);            // add extra params as needed
    reinterpret_cast<FuncT>(mod->ptrBase + 0x<rva>)(this);
}
```

Common variants:
```cpp
// lifecycle with no args
using FuncT = void(*)(void*);

// onPreRender / onPostRender
using FuncT = void(*)(void*, void*);

// toggle
using FuncT = void(*)(void*, void*);       // (this, event)

// onAttack
using FuncT = void(*)(void*, int, char, bool*);

// slot_27 / slot_31
using FuncT = void(*)(void*, int, char, bool*);

// slot_30
using FuncT = void(*)(void*, int, char, bool*);
```

Always null-check `mod` and any pointer arguments before calling.

---

## 5. IModule vtable / signature map

`Horion/Module/Modules/Module.h` has the current base. `tools/vtable_config.py` has the canonical list:

| Slot | Name | Signature |
|------|------|-----------|
| 0 | destructor | (none) |
| 1 | getModuleName | `std::string` |
| 2 | getRawModuleName | `std::string` |
| 3 | getTooltip | `std::string` |
| 4 | getKeybind | `int` |
| 5 | setKeybind | `void setKeybind(int)` |
| 6 | allowAutoStart | `bool` |
| 7 | onTick | `void onTick(C_GameMode*)` |
| 8 | onPreRender | `void onPreRender(C_MinecraftUIRenderContext*)` |
| 9 | onKeyUpdate | `void onKeyUpdate(int, bool, bool* = nullptr)` |
| 10 | onAttack | `void onAttack(int, bool, bool* = nullptr)` |
| 11 | onEnable | `void` |
| 12 | onDisable | `void` |
| 13 | onPostRender | `void onPostRender(C_MinecraftUIRenderContext*)` |
| 14 | onLevelRender | `void` |
| 15 | slot_15 | `void` |
| 16 | slot_16 | `void` |
| 17 | onLoadConfig | `void onLoadConfig(void*)` |
| 18 | onSaveConfig | `void onSaveConfig(void*)` |
| 19 | isFlashMode | `bool` |
| 20 | isEnabled | `bool` |
| 21 | setEnabled | `void setEnabled(void* = nullptr, bool* = nullptr)` (binary key handler, **not** the `setEnabled(bool)` helper) |
| 22 | toggle | `void toggle(void* = nullptr, bool* = nullptr)` |
| 23 | onSendPacket | `void onSendPacket(C_Packet*)` |
| 24 | callWhenDisabled | `void callWhenDisabled(C_Entity* = nullptr)` |
| 25 | onMove | `void onMove(C_MoveInputHandler*)` |
| 26 | slot_26 | `void` |
| 27 | slot_27 | `void slot_27(int = 0, char = 0, bool* = nullptr)` |
| 28 | slot_28 | `void` |
| 29 | slot_29 | `void` |
| 30 | slot_30 | `void slot_30(int = 0, char = 0, bool* = nullptr)` |
| 31 | slot_31 | `void slot_31(int = 0, char = 0, bool* = nullptr)` |

**Important:** `setEnabled` and `toggle` have both 2-arg and 3-arg binary overloads. The 2-arg form is `(this, void* event)`; the 3-arg form is `(this, void* event, bool* cancel)`. Several binary `toggle`s are still 2-arg. Match the exact binary function you are porting.

---

## 6. Header layout / ABI rules

- `IModule` size up to `0x80` is used for `keybind`, `enabled`, `ModulePos`, `tooltip`, `settings`, `friendList`, etc.
- Every derived module class layout must match the binary. If a method accesses `this + 0x98`, you must add enough padding so the object is at least that large.
- Padding pattern used successfully:
  ```cpp
  char _binaryPadding[0x60];
  ```
- For `std::vector` fields (e.g. `Module_1801fc680` at `0x108`), add 24 bytes as `void* vector[3] = {};`.
- For `std::function`-style fields, the binary uses 16-byte objects: `vtable` + `callback`/`this`. These are usually built on the stack before calling `func_0x180460100`.

---

## 7. Key unlocked techniques

### 7.1 Direct `std::function` construction
For methods that feed a callback into `func_0x180460100`:

```cpp
struct BinaryFunctor {
    void* vtable;
    void* callback;
    void* ctx;  // sometimes also stored here
};

BinaryFunctor f;
f.vtable = reinterpret_cast<void*>(mod->ptrBase + 0x<rdata-vtable>);
f.callback = reinterpret_cast<void*>(mod->ptrBase + 0x<callback-rva>);
// f.ctx is often `this`

using Dispatcher = void(*)(void*, void*, void*);
reinterpret_cast<Dispatcher>(mod->ptrBase + 0x460100)(this, &f, ctx);
```

Two known `rdata` vtables:
- `Module_18017c4a0::onPreRender`: vtable at `0x6baca0` (call at `0x1bf610`).
- `Module_18024b340::slot_15`: vtable at `0x6c2d90` (call at `0x2e3c70`).

### 7.2 Shared `onDisable` pattern
Many modules call a single helper (`func_0x180208fa0` or `func_0x18014b7f0`) and then return. These can be ported in one line:

```cpp
using OnDisableT = void(*)(void*);
reinterpret_cast<OnDisableT>(mod->ptrBase + 0x208fa0)(this);
```

### 7.3 Patch lifecycle
Patch methods follow this exact rhythm:
1. `onEnable`: `patchFromCode(savedBytes, target, N)` then `nopCode(target, N)`.
2. `onDisable`: `patchToCode(target, savedBytes, N)`.
3. Some `onPostRender` re-apply patches or read state.

---

## 8. What still needs to be done

### 8.1 Classes of remaining work

1. **TODO: defaults/min/max** — many constructors have placeholder `0.f, 0.f, 1.f` or `false` for `register*Setting`. These need correct default/min/max from the binary constructor.
2. **TODO: add entries** — some `SettingEnum`s need their `addEntry` entries populated.
3. **TODO (no comment)** — method body not yet ported. Usually just needs a direct binary call or full rewrite.
4. **Header layout mismatches** — especially for modules with large state (vectors, patch buffers, many fields) or modules using `this + 0x90`, `0x98`, `0xa0`, `0x108`, `0x160`.
5. **Complex methods** using `func_0x180460100` / `std::function` entity iteration. Two are already ported; pattern is documented above.

### 8.2 Open blockers
- MinGW cross-compile is green (`cmake --build build-mingw` reaches 100% and links `lib1.26.3X.dll`).
- No `// TODO` markers remain in module `.cpp` files.
- Remaining work is **252 `// Binary function:` direct-call stubs across 82 module `.cpp` files** (see 8.3). These should be converted to C++ where the decomp is short/clear; otherwise left as direct calls.
- `IModule` size is locked at `0x80` (`Category` now `unsigned char`); any new derived-module fields must be placed after the base with correct padding.

### 8.3 Files with the most binary-function stubs (top 10)

| File | Stubs | Notes |
|------|-------|-------|
| `SmoothCamera.cpp` | 8 | onEnable/onDisable/onPostRender/onKeyUpdate/slot_27/slot_29/slot_31 |
| `Module_1802ac240.cpp` | 6 | onPreRender/onEnable/onPostRender/onLoad/toggle |
| `Module_1802cfa50.cpp` | 6 | onEnable/onPreRender/onPostRender/onAttack/slot_30 |
| `Module_180360610.cpp` | 6 | onEnable/onDisable/onKeyUpdate/onPostRender/onTick |
| `Module_18017c4a0.cpp` | 5 | onPreRender uses `func_0x180460100` std::function dispatcher |
| `Module_180185460.cpp` | 5 | onPreRender/onEnable/onAttack/onTick/slot_30 |
| `Module_18018f510.cpp` | 5 | onEnable/onDisable/onPostRender/onTick/slot_30 |
| `Module_1801914f0.cpp` | 5 | onPreRender/onEnable/onPostRender/onAttack/slot_30 |
| `Module_1802fc040.cpp` | 5 | onPreRender/onPostRender/onEnable/onAttack/slot_30 |
| `ChunkBorders.cpp` | 4 | onPreRender/onPostRender/onEnable/onDisable |

A full file/TODO list is at the bottom of this doc.

### 8.3 Updated blockers
- `Module_180130570` — resolved: `Change amount` setting fixed, game-object pointers refreshed from `Level`/`EntityList` in `onEnable`/`onPreRender`, and all three methods direct-called.
- `Module_1801380b0` — resolved: header re-laid so fields are at binary offsets (`opacity` 0x80, air/wrong/ignoreA/field_0x601, color objects at 0x90/0xa0/0xb0, offset/reset/max fields 0x604-0x648, X/Y/Z/rot 0x6a8-0x6b4); constructor registers all mapped settings with binary defaults.
- `Module_1801f2430` — resolved: header refactored so fields are at binary offsets (`noBackground` 0xd0, `size` 0xd4, `switchPack` 0xd8, `switchDelay` 0xdc, `currentIndex` 0xe0, `selectedIndex` 0xe4); constructor now registers the four settings with sensible defaults.

---

## 9. How to find the next thing to port

1. Run the TODO counter:
   ```bash
   python3 - <<'PY'
   from pathlib import Path; import re
   c = 0
   for fp in sorted(Path('Oderso/Module/Modules').glob('*.cpp')):
       n = len(re.findall(r'//\s*TODO', fp.read_text(errors='ignore')))
       if n: print(f'{fp.name}: {n}')
       c += n
   print('Total:', c)
   PY
   ```

2. Pick a short decompiled function. Use a size filter in `ghidra_decompiled_1.26.3X_new.c`:
   - `onEnable` / `onDisable` under ~40 lines are easy.
   - `toggle` under ~80 lines is usually doable.
   - Avoid `func_0x180460100` (261 lines) — the dispatcher itself is done; call it, don’t rewrite.

3. Search for the method comment in the `.cpp` stub:
   ```cpp
   // Binary function: func_0x180xxxxx
   ```
   Then look up `func_0x180xxxxx` in `ghidra_decompiled_1.26.3X_new.c`.

4. Add the appropriate padding and direct-call the binary. Update the header if the function reads fields past the current class size.

---

## 10. Validation checklist

- [ ] No `// TODO` left in the file you just touched.
- [ ] No unmapped `func_0x` calls in method bodies.
- [ ] Header layout matches binary field offsets (use `offsetof` or static-assert if possible).
- [ ] Method signature matches `tools/vtable_config.py` / `Horion/Module/Modules/Module.h`.
- [ ] `g_Data.getModule()->ptrBase` calls use correct RVAs.
- [ ] Braces and indentation are consistent.
- [ ] `LOG.md` updated with what was ported and the new TODO count.
- [ ] `todo_list` updated if plan changed.

---

## 11. Full remaining TODO inventory

```
Total TODOs: 0
```

---

## 12. Notes for an LLM resuming this task

- **Always run the TODO counter** before and after work and report it.
- **Prefer direct binary calls** over full decompilation for complex logic.
- **When a method uses `this + 0x...` beyond the current header, add `char _binaryPadding[...]` immediately after the last real field** until the offset is reached.
- **Match the exact binary signature.** Many `toggle`/`setEnabled` are 2-arg; `slot_27`/`slot_30`/`slot_31` are 4-arg.
- **If a method is a 261-line `std::function` dispatcher**, do not rewrite it. Build the 16-byte functor and call `func_0x180460100` (see `Module_18017c4a0::onPreRender` for the working pattern).
- **When you are done porting a method, remove the `// TODO` comment** or replace it with the binary function note.
- **Update `LOG.md` with per-prompt actions and the TODO count** so the next session has context.

---

## 13. Useful one-liners

Find all TODOs by file:
```bash
grep -R "// TODO" Oderso/Module/Modules/*.cpp
```

Extract a single decompiled function:
```bash
python3 tools/extract_decomp_func.py 0x180132b00
```

Count TODOs:
```bash
python3 -c "from pathlib import Path; import re; print(sum(len(re.findall(r'//\\s*TODO', p.read_text(errors='ignore'))) for p in Path('Oderso/Module/Modules').glob('*.cpp')))"
```

---

*End of handoff. Resume from this doc and `LOG.md`.*
