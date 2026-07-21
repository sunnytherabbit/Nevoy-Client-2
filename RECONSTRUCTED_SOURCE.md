# Reconstructed Source Layout (Pseudocode)

This is a clean, human-readable reconstruction of how the `Nevoy Client v26.32.dll` source code is likely organized. It is **pseudocode / header stubs only** and is **not compilable** — it cannot reproduce the original binary.

## Project structure

```
src/
  Client/
    NevoyClient.hpp/.cpp       # DLL entry, renderer setup
    ModuleManager.hpp/.cpp       # loads/unloads modules, config dump
  Module/
    Module.hpp/.cpp              # base class
    <ModuleName>.hpp/.cpp        # one file per cheat module (~70)
  Hook/
    Hook.hpp/.cpp                # hook base / dispatcher
    ClientInstanceHooks.hpp/.cpp
    LevelRendererHooks.hpp/.cpp
    PacketHooks.hpp/.cpp
  GUI/
    ClickGUIMod.hpp/.cpp         # in-game settings UI
  Rendering/
    D3D11Renderer.hpp/.cpp       # overlay rendering
```

## `Module.hpp` (base class)

```cpp
#pragma once
#include <string>
#include <cstdint>

class ClientInstance;
class LevelRenderer;
class GuiData;
class ScreenView;

class Module {
public:
    Module(const std::string& name, int keybind = 0);
    virtual ~Module() = default;

    virtual void onEnable();
    virtual void onDisable();
    virtual void onTick(ClientInstance* ci);
    virtual void onRender(ScreenView* screen);
    virtual void onPacketReceive(/* Packet* */);
    virtual void onPacketSend(/* Packet* */);

    std::string name;
    int keybind = 0;       // e.g. GetAsyncKeyState keycode
    bool enabled = false;
};
```

## `ModuleManager.hpp`

```cpp
#pragma once
#include <vector>
#include <memory>
#include "Module/Module.hpp"

class ModuleManager {
public:
    void init();        // construct and register all modules
    void shutdown();    // [ModuleManager] Shutting down modules...
    void dumpConfig();  // prints MODULES CONFIG DUMP
    std::vector<std::unique_ptr<Module>> modules;
};
```

## Cheat module declarations

```cpp
class Aimbot : public Module { /* see Aimbot decompiled func(s) */ };
class AirJump : public Module { /* see AirJump decompiled func(s) */ };
class AirPlace : public Module { /* see AirPlace decompiled func(s) */ };
class Animations : public Module { /* see Animations decompiled func(s) */ };
class AntiBot : public Module { /* see AntiBot decompiled func(s) */ };
class AntiImmobile : public Module { /* see AntiImmobile decompiled func(s) */ };
class AntiKB : public Module { /* see AntiKB decompiled func(s) */ };
class AutoClicker : public Module { /* see AutoClicker decompiled func(s) */ };
class AutoFishing : public Module { /* see AutoFishing decompiled func(s) */ };
class AutoTotem : public Module { /* see AutoTotem decompiled func(s) */ };
class Backtrack : public Module { /* see Backtrack decompiled func(s) */ };
class Baritone : public Module { /* see Baritone decompiled func(s) */ };
class BlockESP : public Module { /* see BlockESP decompiled func(s) */ };
class Breaker : public Module { /* see Breaker decompiled func(s) */ };
class ChestStealer : public Module { /* see ChestStealer decompiled func(s) */ };
class Criticals : public Module { /* see Criticals decompiled func(s) */ };
class CrystalAura : public Module { /* see CrystalAura decompiled func(s) */ };
class Disabler : public Module { /* see Disabler decompiled func(s) */ };
class ESP : public Module { /* see ESP decompiled func(s) */ };
class FastEat : public Module { /* see FastEat decompiled func(s) */ };
class FastPlace : public Module { /* see FastPlace decompiled func(s) */ };
class Flight : public Module { /* see Flight decompiled func(s) */ };
class FlySpoof : public Module { /* see FlySpoof decompiled func(s) */ };
class FreeCam : public Module { /* see FreeCam decompiled func(s) */ };
class FreeLook : public Module { /* see FreeLook decompiled func(s) */ };
class FullBright : public Module { /* see FullBright decompiled func(s) */ };
class HitBox : public Module { /* see HitBox decompiled func(s) */ };
class InvManager : public Module { /* see InvManager decompiled func(s) */ };
class InvMove : public Module { /* see InvMove decompiled func(s) */ };
class Jesus : public Module { /* see Jesus decompiled func(s) */ };
class KillAura : public Module { /* see KillAura decompiled func(s) */ };
class MidClick : public Module { /* see MidClick decompiled func(s) */ };
class NameTags : public Module { /* see NameTags decompiled func(s) */ };
class NoFall : public Module { /* see NoFall decompiled func(s) */ };
class NoJumpDelay : public Module { /* see NoJumpDelay decompiled func(s) */ };
class NoSlow : public Module { /* see NoSlow decompiled func(s) */ };
class Notifications : public Module { /* see Notifications decompiled func(s) */ };
class Nuker : public Module { /* see Nuker decompiled func(s) */ };
class Phase : public Module { /* see Phase decompiled func(s) */ };
class Reach : public Module { /* see Reach decompiled func(s) */ };
class Regen : public Module { /* see Regen decompiled func(s) */ };
class Scaffold : public Module { /* see Scaffold decompiled func(s) */ };
class Sneak : public Module { /* see Sneak decompiled func(s) */ };
class Speed : public Module { /* see Speed decompiled func(s) */ };
class SpeedMine : public Module { /* see SpeedMine decompiled func(s) */ };
class Spider : public Module { /* see Spider decompiled func(s) */ };
class Sprint : public Module { /* see Sprint decompiled func(s) */ };
class Step : public Module { /* see Step decompiled func(s) */ };
class StorageESP : public Module { /* see StorageESP decompiled func(s) */ };
class TargetHUD : public Module { /* see TargetHUD decompiled func(s) */ };
class TargetStrafe : public Module { /* see TargetStrafe decompiled func(s) */ };
class ThirdPersonNametag : public Module { /* see ThirdPersonNametag decompiled func(s) */ };
class Timer : public Module { /* see Timer decompiled func(s) */ };
class TpMine : public Module { /* see TpMine decompiled func(s) */ };
class Tracers : public Module { /* see Tracers decompiled func(s) */ };
class TriggerBot : public Module { /* see TriggerBot decompiled func(s) */ };
class Velocity : public Module { /* see Velocity decompiled func(s) */ };
class Wallhack : public Module { /* see Wallhack decompiled func(s) */ };
class Zoom : public Module { /* see Zoom decompiled func(s) */ };
```

## Hook declarations

```cpp
class ApplyTurnDeltaHookHook { /* hook implementation */ };
class BacktrackHookHook { /* hook implementation */ };
class ClientInstanceHook { /* hook implementation */ };
class ContainerScreenControllerTickHookHook { /* hook implementation */ };
class GameModeAttackHookHook { /* hook implementation */ };
class GetFovHookHook { /* hook implementation */ };
class GetGammaHookHook { /* hook implementation */ };
class GetPerspectiveHookHook { /* hook implementation */ };
class GuiDataHook { /* hook implementation */ };
class LevelRendererHook { /* hook implementation */ };
class LevelRendererPlayerHook { /* hook implementation */ };
class MouseInputHookHook { /* hook implementation */ };
class PacketSendHookHook { /* hook implementation */ };
class PacketV2Hook { /* hook implementation */ };
class RaknetTickHookHook { /* hook implementation */ };
class SetupAndRenderHookHook { /* hook implementation */ };
class SoundEnginePlayHookHook { /* hook implementation */ };
```

## Notes
- Each module constructor sets the vtable and module name string (observed in `decompiled_source.c`).
- Settings (sliders, booleans, keybinds) are stored as member fields and serialized in the config dump.
- Rendering is done through a D3D11 swap-chain hook; UI sounds use `PlaySoundA` with `assets/*.wav`.
- Packet-related modules (Backtrack, Disabler, FlySpoof, etc.) install `std::function` callbacks on `PacketSendHook` / `PacketV2` lambdas.