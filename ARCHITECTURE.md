# Inferred Architecture / Source Layout

This is a defensive reconstruction of how `Nevoy Client v26.32.dll` is likely organized. It is **not a compilable cheat** — it is a map for detection/patching.

## High-level layout

```text
NevoyClient (injected DLL)
  ├── ModuleManager
  │     ├── Module base class
  │     │     ├── onEnable() / onDisable()
  │     │     ├── onTick()
  │     │     ├── onRender() / onImGuiRender()
  │     │     └── settings (name, keybind, enabled, toggle)
  │     └── Cheat modules (~70 modules, see table below)
  ├── HookManager
  │     ├── ClientInstance hooks (local player, guiData, level, FOV)
  │     ├── LevelRenderer hooks (camera, view/proj, renderLevel)
  │     └── Packet hooks (PacketSendHook, PacketV2 logger)
  ├── D3D11/DXGI overlay renderer
  ├── ClickGUI (in-game settings UI + sound assets)
  └── Config / logging
```

## Inferred class skeleton (pseudocode)

```cpp
// NOT COMPILABLE — defensive pseudocode only
class Module {
public:
    std::string name;
    uint32_t keybind;
    bool enabled = false;
    virtual void onEnable();
    virtual void onDisable();
    virtual void onTick(ClientInstance* ci);
    virtual void onRender();
};

class ModuleManager {
public:
    std::vector<std::unique_ptr<Module>> modules;
    void init();         // "[ModuleManager] {} module(s) charg..."
    void shutdown();     // "[ModuleManager] Shutting down modules..."
    void dumpConfig();   // "MODULES CONFIG DUMP"
};
```

## Module / hook -> decompiled function table

| Component | Decompiled function(s) |
|-----------|--------------------------|
| `Aimbot` | `func_0x1800c1050_Aimbot` |
| `AirJump` | `func_0x1800c1470_AirJump` |
| `AirPlace` | `func_0x1800c1530_AirPlace` |
| `Animations` | `func_0x1800c1870_Animations` |
| `AntiBot` | `func_0x1800c1a10_AntiBot` |
| `AntiImmobile` | `func_0x1800c1b80_AntiImmobile` |
| `AntiKB` | `func_0x1800c1c40_AntiKB` |
| `ArrayList` | `func_0x1800c1e30_ArrayList` |
| `AutoClicker` | `func_0x1800c2290_AutoClicker` |
| `AutoFishing` | `func_0x1800c26a0_AutoFishing` |
| `AutoTotem` | `func_0x1800c2c10_AutoTotem` |
| `Backtrack` | `func_0x1800c2e90_Backtrack` |
| `Baritone` | `func_0x1800c3600_Baritone` |
| `BlockESP` | `func_0x1800c44a0_BlockESP` |
| `Breaker` | `func_0x1800c4be0_Breaker` |
| `ChestStealer` | `func_0x1800c4fa0_ChestStealer` |
| `Criticals` | `func_0x1800c58e0_Criticals` |
| `CrystalAura` | `func_0x1800c5ae0_CrystalAura` |
| `DestroyProgress` | `func_0x1800c5ea0_DestroyProgress` |
| `DeviceId` | `func_0x1800c6080_DeviceId` |
| `Disabler` | `func_0x1800c61e0_Disabler` |
| `ESP` | `func_0x1800c6740_ESP` |
| `FastEat` | `func_0x1800c6b30_FastEat` |
| `FastPlace` | `func_0x1800c6ca0_FastPlace` |
| `Flight` | `func_0x1800c6d60_Flight` |
| `FlySpoof` | `func_0x1800c7290_FlySpoof` |
| `FreeCam` | `func_0x1800c7580_FreeCam` |
| `FreeLook` | `func_0x1800c7840_FreeLook` |
| `FullBright` | `func_0x1800c7900_FullBright` |
| `HitBox` | `func_0x1800c7a70_HitBox` |
| `Interface` | `func_0x1800c7d20_Interface` |
| `InvManager` | `func_0x1800c82d0_InvManager` |
| `InvMove` | `func_0x1800c8790_InvMove` |
| `Jesus` | `func_0x1800c8860_Jesus` |
| `KillAura` | `func_0x1800c8a50_KillAura` |
| `MidClick` | `func_0x1800c9180_MidClick` |
| `NameTags` | `func_0x1800c9570_NameTags` |
| `NoFall` | `func_0x1800c9930_NoFall` |
| `NoJumpDelay` | `func_0x1800c99f0_NoJumpDelay` |
| `NoSlow` | `func_0x1800c9ab0_NoSlow` |
| `Notifications` | `func_0x1800c9b70_Notifications` |
| `Nuker` | `func_0x1800c9ce0_Nuker` |
| `Phase` | `func_0x1800ca3f0_Phase` |
| `Reach` | `func_0x1800ca560_Reach` |
| `Regen` | `func_0x1800ca730_Regen` |
| `Scaffold` | `func_0x1800caba0_Scaffold` |
| `Sneak` | `func_0x1800cb950_Sneak` |
| `SoundLocation` | `func_0x1800cba10_SoundLocation` |
| `Speed` | `func_0x1800cbd30_Speed`, `func_0x18012c9e0_Speed`, `func_0x18012f540_Speed` ... (2 more) |
| `SpeedMine` | `func_0x1800cc170_SpeedMine` |
| `Spider` | `func_0x1800cc350_Spider` |
| `Sprint` | `func_0x1800cc4c0_Sprint` |
| `Statistics` | `func_0x1800cc580_Statistics`, `func_0x18012c540_Statistics`, `func_0x180130310_Statistics` |
| `Step` | `func_0x1800cc9b0_Step` |
| `StorageESP` | `func_0x1800ccb20_StorageESP` |
| `TargetHUD` | `func_0x1800cd0b0_TargetHUD` |
| `TargetStrafe` | `func_0x1800cd4b0_TargetStrafe` |
| `ThirdPersonNametag` | `func_0x1800cda00_ThirdPersonNametag`, `func_0x180107fa0_ThirdPersonNametag`, `func_0x1801694f0_ThirdPersonNametag` |
| `Timer` | `func_0x1800cdaf0_Timer` |
| `TpMine` | `func_0x1800cdca0_TpMine` |
| `Tracers` | `func_0x1800ce4c0_Tracers` |
| `TriggerBot` | `func_0x1800ce8e0_TriggerBot` |
| `Velocity` | `func_0x1800ceb10_Velocity`, `func_0x1800fa9e0_Velocity` |
| `Wallhack` | `func_0x1800ced70_Wallhack` |
| `Zoom` | `func_0x1800cee30_Zoom` |

## Key hook targets
- `ClientInstance::getLocalPlayerIndex()` — local player pointer
- `ClientInstance::getBlockSource()` — world block access (Wallhack/ESP/Nuker/Scaffold)
- `ClientInstance::guiData` / `GuiData::ScreenSize` — HUD/overlay rendering
- `ClientInstance::viewMatrix` / `LevelRendererPlayer::viewMatrix` / `projMatrix` — camera state
- `LevelRenderer::renderLevel` — world rendering hook for ESP/Wallhack
- `GuiData::displayClientMessage()` — in-game chat/status messages
- `PacketSendHook` / `PacketV2` — movement and packet modifications

## APIs used
- `D3D11CreateDeviceAndSwapChain` / `CreateDXGIFactory1` — overlay render
- `GetAsyncKeyState` — keybinds
- `PlaySoundA` — ClickGUI / inject sounds
- `K32EnumProcessModules` / `GetModuleHandle` — loader / injection checks