# Defensive Reverse-Engineering Analysis: Nevoy Client v26.32

## Binary Overview
- File: `Nevoy Client v26.32.dll`
- Format: PE32+ (x86-64) DLL
- Image base: `0x180000000`
- Entry point: `0x18026b4f4`
- Compiled with: Microsoft Visual C++ / MSVC linker
- Sections: .text (code), .rdata (constants/pointers), .data (globals), .pdata (unwind)

## High-level behaviour
Native x64 DLL injected into a Minecraft-based process. Hooks `ClientInstance`, `GuiData`, `LevelRenderer`, `LevelRendererPlayer`, loads ~70 cheat modules through a `ModuleManager`, and renders with D3D11/DXGI.

## Imported APIs (attack surface / hook indicators)
- `AcquireSRWLockExclusive`
- `AddVectoredExceptionHandler`
- `AreFileApisANSI`
- `CallWindowProcW`
- `ClientToScreen`
- `ClipCursor`
- `CloseClipboard`
- `CloseHandle`
- `CloseThreadpoolWork`
- `CoCreateInstance`
- `CoInitializeEx`
- `CoUninitialize`
- `CompareStringW`
- `CreateDXGIFactory1`
- `CreateDirectoryW`
- `CreateEventA`
- `CreateFileW`
- `CreateRectRgn`
- `CreateThread`
- `CreateThreadpoolWork`
- `CreateToolhelp32Snapshot`
- `CreateWindowExW`
- `D3D11CreateDeviceAndSwapChain`
- `D3D12SerializeRootSignature`
- `D3DCompile`
- `DecodePointer`
- `DefWindowProcW`
- `DeleteCriticalSection`
- `DeleteObject`
- `DestroyWindow`
- `DisableThreadLibraryCalls`
- `DwmEnableBlurBehindWindow`
- `DwmGetColorizationColor`
- `DwmIsCompositionEnabled`
- `EmptyClipboard`
- `EncodePointer`
- `EnterCriticalSection`
- `EnumSystemLocalesW`
- `ExitProcess`
- `ExitThread`
- `FindClose`
- `FindFirstFileExW`
- `FindFirstFileW`
- `FindNextFileW`
- `FlsAlloc`
- `FlsFree`
- `FlsGetValue`
- `FlsSetValue`
- `FlushFileBuffers`
- `FlushInstructionCache`
- `FormatMessageA`
- `FreeEnvironmentStringsW`
- `FreeLibrary`
- `FreeLibraryAndExitThread`
- `GetACP`
- `GetAsyncKeyState`
- `GetCPInfo`
- `GetCapture`
- `GetClientRect`
- `GetClipboardData`
- `GetCommandLineA`
- `GetCommandLineW`
- `GetConsoleMode`
- `GetConsoleOutputCP`
- `GetCurrentProcess`
- `GetCurrentProcessId`
- `GetCurrentThreadId`
- `GetCursorPos`
- `GetDC`
- `GetDateFormatW`
- `GetDeviceCaps`
- `GetEnvironmentStringsW`
- `GetExitCodeThread`
- `GetFileAttributesExW`
- `GetFileAttributesW`
- `GetFileInformationByHandleEx`
- `GetFileSizeEx`
- `GetFileType`
- `GetForegroundWindow`
- `GetKeyState`
- `GetKeyboardLayout`
- `GetLastError`
- `GetLocaleInfoA`
- `GetLocaleInfoEx`
- `GetLocaleInfoW`
- `GetMessageExtraInfo`
- `GetModuleFileNameA`
- `GetModuleFileNameW`
- `GetModuleHandleA`
- `GetModuleHandleExA`
- `GetModuleHandleExW`
- `GetModuleHandleW`
- `GetNativeSystemInfo`
- `GetOEMCP`
- `GetProcAddress`
- `GetProcessHeap`
- `GetStartupInfoW`
- `GetStdHandle`
- `GetStringTypeW`
- `GetSystemInfo`
- `GetSystemTimeAsFileTime`
- `GetTempPathW`
- `GetThreadContext`
- `GetTimeFormatW`
- `GetTimeZoneInformation`
- `GetUserDefaultLCID`
- `GetUserDefaultUILanguage`
- `GlobalAlloc`
- `GlobalFree`
- `GlobalLock`
- `GlobalUnlock`
- `HeapAlloc`
- `HeapCreate`
- `HeapDestroy`
- `HeapFree`
- `HeapReAlloc`
- `HeapSize`
- `ImmGetContext`
- `ImmReleaseContext`
- `ImmSetCandidateWindow`
- `ImmSetCompositionWindow`
- `InitializeCriticalSection`
- `InitializeCriticalSectionAndSpinCount`
- `InitializeCriticalSectionEx`
- `InitializeSListHead`
- `InterlockedFlushSList`
- `IsBadReadPtr`
- `IsDebuggerPresent`
- `IsProcessorFeaturePresent`
- `IsValidCodePage`
- `IsValidLocale`
- `IsWindowUnicode`
- `K32EnumProcessModules`
- `K32GetModuleFileNameExA`
- `K32GetModuleInformation`
- `LCMapStringEx`
- `LCMapStringW`
- `LeaveCriticalSection`
- `LoadCursorA`
- `LoadLibraryA`
- `LoadLibraryExW`
- `LoadLibraryW`
- `LocalFree`
- `MessageBoxW`
- `MonitorFromWindow`
- `MultiByteToWideChar`
- `OpenClipboard`
- `OpenThread`
- `OutputDebugStringA`
- `PlaySoundA`
- `QueryPerformanceCounter`
- `QueryPerformanceFrequency`
- `RaiseException`
- `ReadConsoleW`
- `ReadFile`
- `RegisterClassExW`
- `ReleaseCapture`
- `ReleaseDC`
- `ReleaseSRWLockExclusive`
- `RemoveVectoredExceptionHandler`
- `ResumeThread`
- `RtlCaptureContext`
- `RtlCaptureStackBackTrace`
- `RtlLookupFunctionEntry`
- `RtlPcToFileHeader`
- `RtlUnwind`
- `RtlUnwindEx`
- `RtlVirtualUnwind`
- `ScreenToClient`
- `SetCapture`
- `SetClipboardData`
- `SetConsoleCtrlHandler`
- `SetCursor`
- `SetCursorPos`
- `SetEndOfFile`
- `SetEnvironmentVariableW`
- `SetFilePointerEx`
- `SetLastError`
- `SetProcessDPIAware`
- `SetStdHandle`
- `SetThreadContext`
- `SetThreadStackGuarantee`
- `SetUnhandledExceptionFilter`
- `SetWindowLongPtrW`
- `ShellExecuteA`
- `ShellExecuteW`
- `ShowCursor`
- `Sleep`
- `SleepConditionVariableSRW`
- `StackWalk64`
- `SubmitThreadpoolWork`
- `SuspendThread`
- `SymFromAddr`
- `SymFunctionTableAccess64`
- `SymGetModuleBase64`
- `SymInitialize`
- `SymSetOptions`
- `TerminateProcess`
- `Thread32First`
- `Thread32Next`
- `TlsAlloc`
- `TlsFree`
- `TlsGetValue`
- `TlsSetValue`
- `TrackMouseEvent`
- `TryAcquireSRWLockExclusive`
- `UnhandledExceptionFilter`
- `UnregisterClassW`
- `VerSetConditionMask`
- `VirtualAlloc`
- `VirtualFree`
- `VirtualProtect`
- `VirtualQuery`
- `WaitForSingleObject`
- `WaitForSingleObjectEx`
- `WaitForThreadpoolWorkCallbacks`
- `WakeAllConditionVariable`
- `WakeConditionVariable`
- `WideCharToMultiByte`
- `WriteConsoleW`
- `WriteFile`

## Renamed cheat / hook functions

| Address | Function | Label |
|---------|----------|-------|
| `0x1800044b0` | `func_0x1800044b0_assets_clickgui` | `assets_clickgui` |
| `0x1800153c0` | `func_0x1800153c0_Nevoy_Client` | `Nevoy_Client` |
| `0x18001b880` | `func_0x18001b880_Nevoy_Client` | `Nevoy_Client` |
| `0x18004ee60` | `func_0x18004ee60_PacketV2` | `PacketV2` |
| `0x18005ec20` | `func_0x18005ec20_Backtrack` | `Backtrack` |
| `0x180063f90` | `func_0x180063f90_Baritone` | `Baritone` |
| `0x18006f0d0` | `func_0x18006f0d0_GuiData` | `GuiData` |
| `0x18006fb70` | `func_0x18006fb70_Baritone` | `Baritone` |
| `0x180070350` | `func_0x180070350_ClientInstance` | `ClientInstance` |
| `0x180070630` | `func_0x180070630_ClientInstance` | `ClientInstance` |
| `0x1800706c0` | `func_0x1800706c0_ClientInstance` | `ClientInstance` |
| `0x180074b10` | `func_0x180074b10_ClientInstance` | `ClientInstance` |
| `0x18008dbb0` | `func_0x18008dbb0_module` | `module` |
| `0x18008f410` | `func_0x18008f410_modules_not_initialized` | `modules_not_initialized` |
| `0x1800c1050` | `func_0x1800c1050_Aimbot` | `Aimbot` |
| `0x1800c1470` | `func_0x1800c1470_AirJump` | `AirJump` |
| `0x1800c1530` | `func_0x1800c1530_AirPlace` | `AirPlace` |
| `0x1800c1870` | `func_0x1800c1870_Animations` | `Animations` |
| `0x1800c1a10` | `func_0x1800c1a10_AntiBot` | `AntiBot` |
| `0x1800c1b80` | `func_0x1800c1b80_AntiImmobile` | `AntiImmobile` |
| `0x1800c1c40` | `func_0x1800c1c40_AntiKB` | `AntiKB` |
| `0x1800c1e30` | `func_0x1800c1e30_ArrayList` | `ArrayList` |
| `0x1800c2290` | `func_0x1800c2290_AutoClicker` | `AutoClicker` |
| `0x1800c26a0` | `func_0x1800c26a0_AutoFishing` | `AutoFishing` |
| `0x1800c2c10` | `func_0x1800c2c10_AutoTotem` | `AutoTotem` |
| `0x1800c2e90` | `func_0x1800c2e90_Backtrack` | `Backtrack` |
| `0x1800c3600` | `func_0x1800c3600_Baritone` | `Baritone` |
| `0x1800c44a0` | `func_0x1800c44a0_BlockESP` | `BlockESP` |
| `0x1800c4be0` | `func_0x1800c4be0_Breaker` | `Breaker` |
| `0x1800c4fa0` | `func_0x1800c4fa0_ChestStealer` | `ChestStealer` |
| `0x1800c58e0` | `func_0x1800c58e0_Criticals` | `Criticals` |
| `0x1800c5ae0` | `func_0x1800c5ae0_CrystalAura` | `CrystalAura` |
| `0x1800c5ea0` | `func_0x1800c5ea0_DestroyProgress` | `DestroyProgress` |
| `0x1800c6080` | `func_0x1800c6080_DeviceId` | `DeviceId` |
| `0x1800c61e0` | `func_0x1800c61e0_Disabler` | `Disabler` |
| `0x1800c6740` | `func_0x1800c6740_ESP` | `ESP` |
| `0x1800c6b30` | `func_0x1800c6b30_FastEat` | `FastEat` |
| `0x1800c6ca0` | `func_0x1800c6ca0_FastPlace` | `FastPlace` |
| `0x1800c6d60` | `func_0x1800c6d60_Flight` | `Flight` |
| `0x1800c7290` | `func_0x1800c7290_FlySpoof` | `FlySpoof` |
| `0x1800c7580` | `func_0x1800c7580_FreeCam` | `FreeCam` |
| `0x1800c7840` | `func_0x1800c7840_FreeLook` | `FreeLook` |
| `0x1800c7900` | `func_0x1800c7900_FullBright` | `FullBright` |
| `0x1800c7a70` | `func_0x1800c7a70_HitBox` | `HitBox` |
| `0x1800c7d20` | `func_0x1800c7d20_Interface` | `Interface` |
| `0x1800c82d0` | `func_0x1800c82d0_InvManager` | `InvManager` |
| `0x1800c8790` | `func_0x1800c8790_InvMove` | `InvMove` |
| `0x1800c8860` | `func_0x1800c8860_Jesus` | `Jesus` |
| `0x1800c8a50` | `func_0x1800c8a50_KillAura` | `KillAura` |
| `0x1800c9180` | `func_0x1800c9180_MidClick` | `MidClick` |
| `0x1800c9570` | `func_0x1800c9570_NameTags` | `NameTags` |
| `0x1800c9930` | `func_0x1800c9930_NoFall` | `NoFall` |
| `0x1800c99f0` | `func_0x1800c99f0_NoJumpDelay` | `NoJumpDelay` |
| `0x1800c9ab0` | `func_0x1800c9ab0_NoSlow` | `NoSlow` |
| `0x1800c9b70` | `func_0x1800c9b70_Notifications` | `Notifications` |
| `0x1800c9ce0` | `func_0x1800c9ce0_Nuker` | `Nuker` |
| `0x1800ca3f0` | `func_0x1800ca3f0_Phase` | `Phase` |
| `0x1800ca560` | `func_0x1800ca560_Reach` | `Reach` |
| `0x1800ca730` | `func_0x1800ca730_Regen` | `Regen` |
| `0x1800caba0` | `func_0x1800caba0_Scaffold` | `Scaffold` |
| `0x1800cb950` | `func_0x1800cb950_Sneak` | `Sneak` |
| `0x1800cba10` | `func_0x1800cba10_SoundLocation` | `SoundLocation` |
| `0x1800cbd30` | `func_0x1800cbd30_Speed` | `Speed` |
| `0x1800cc170` | `func_0x1800cc170_SpeedMine` | `SpeedMine` |
| `0x1800cc350` | `func_0x1800cc350_Spider` | `Spider` |
| `0x1800cc4c0` | `func_0x1800cc4c0_Sprint` | `Sprint` |
| `0x1800cc580` | `func_0x1800cc580_Statistics` | `Statistics` |
| `0x1800cc9b0` | `func_0x1800cc9b0_Step` | `Step` |
| `0x1800ccb20` | `func_0x1800ccb20_StorageESP` | `StorageESP` |
| `0x1800cd0b0` | `func_0x1800cd0b0_TargetHUD` | `TargetHUD` |
| `0x1800cd4b0` | `func_0x1800cd4b0_TargetStrafe` | `TargetStrafe` |
| `0x1800cda00` | `func_0x1800cda00_ThirdPersonNametag` | `ThirdPersonNametag` |
| `0x1800cdaf0` | `func_0x1800cdaf0_Timer` | `Timer` |
| `0x1800cdca0` | `func_0x1800cdca0_TpMine` | `TpMine` |
| `0x1800ce4c0` | `func_0x1800ce4c0_Tracers` | `Tracers` |
| `0x1800ce8e0` | `func_0x1800ce8e0_TriggerBot` | `TriggerBot` |
| `0x1800ceb10` | `func_0x1800ceb10_Velocity` | `Velocity` |
| `0x1800ced70` | `func_0x1800ced70_Wallhack` | `Wallhack` |
| `0x1800cee30` | `func_0x1800cee30_Zoom` | `Zoom` |
| `0x1800e02a0` | `func_0x1800e02a0_Baritone` | `Baritone` |
| `0x1800ed1d0` | `func_0x1800ed1d0_Baritone` | `Baritone` |
| `0x1800f0f50` | `func_0x1800f0f50_Baritone` | `Baritone` |
| `0x1800f3f60` | `func_0x1800f3f60_Baritone` | `Baritone` |
| `0x1800f9310` | `func_0x1800f9310_projMatrix` | `projMatrix` |
| `0x1800f93c0` | `func_0x1800f93c0_viewMatrix` | `viewMatrix` |
| `0x1800f9470` | `func_0x1800f9470_ClientInstance` | `ClientInstance` |
| `0x1800fa9e0` | `func_0x1800fa9e0_Velocity` | `Velocity` |
| `0x1800fc5e0` | `func_0x1800fc5e0_Baritone` | `Baritone` |
| `0x1801019c0` | `func_0x1801019c0_Baritone` | `Baritone` |
| `0x1801052e0` | `func_0x1801052e0_BlockESP` | `BlockESP` |
| `0x180105a50` | `func_0x180105a50_InvMove` | `InvMove` |
| `0x180106480` | `func_0x180106480_StorageESP` | `StorageESP` |
| `0x180106f90` | `func_0x180106f90_BlockESP` | `BlockESP` |
| `0x1801076e0` | `func_0x1801076e0_InvMove` | `InvMove` |
| `0x180107cc0` | `func_0x180107cc0_StorageESP` | `StorageESP` |
| `0x180107fa0` | `func_0x180107fa0_ThirdPersonNametag` | `ThirdPersonNametag` |
| `0x1801080f0` | `func_0x1801080f0_lapis` | `lapis` |
| `0x18010aa80` | `func_0x18010aa80_Baritone` | `Baritone` |
| `0x18010c470` | `func_0x18010c470_InvMove` | `InvMove` |
| `0x18012c540` | `func_0x18012c540_Statistics` | `Statistics` |
| `0x18012c9e0` | `func_0x18012c9e0_Speed` | `Speed` |
| `0x18012f540` | `func_0x18012f540_Speed` | `Speed` |
| `0x18012f5a0` | `func_0x18012f5a0_Speed` | `Speed` |
| `0x18012fb10` | `func_0x18012fb10_Speed` | `Speed` |
| `0x180130310` | `func_0x180130310_Statistics` | `Statistics` |
| `0x180131ba0` | `func_0x180131ba0_Baritone` | `Baritone` |
| `0x180134080` | `func_0x180134080_Baritone` | `Baritone` |
| `0x180134e50` | `func_0x180134e50_Baritone` | `Baritone` |
| `0x1801383e0` | `func_0x1801383e0_Baritone` | `Baritone` |
| `0x18013a1c0` | `func_0x18013a1c0_Baritone` | `Baritone` |
| `0x180152350` | `func_0x180152350_PacketV2` | `PacketV2` |
| `0x18015d400` | `func_0x18015d400_ClientInstance` | `ClientInstance` |
| `0x18015d490` | `func_0x18015d490_ClientInstance` | `ClientInstance` |
| `0x18015d520` | `func_0x18015d520_ClientInstance` | `ClientInstance` |
| `0x18015d5b0` | `func_0x18015d5b0_ClientInstance` | `ClientInstance` |
| `0x18015d640` | `func_0x18015d640_ClientInstance` | `ClientInstance` |
| `0x18015d6d0` | `func_0x18015d6d0_ClientInstance` | `ClientInstance` |
| `0x18015d760` | `func_0x18015d760_ClientInstance` | `ClientInstance` |
| `0x18015dac0` | `func_0x18015dac0_getLevelRenderer` | `getLevelRenderer` |
| `0x18015db50` | `func_0x18015db50_cameraPos` | `cameraPos` |
| `0x18015dbe0` | `func_0x18015dbe0_viewMatrix` | `viewMatrix` |
| `0x18015dc70` | `func_0x18015dc70_projMatrix` | `projMatrix` |
| `0x18015dd00` | `func_0x18015dd00_ClientInstance` | `ClientInstance` |
| `0x18015de20` | `func_0x18015de20_viewMatrix` | `viewMatrix` |
| `0x18015deb0` | `func_0x18015deb0_projMatrix` | `projMatrix` |
| `0x18015df40` | `func_0x18015df40_GuiData` | `GuiData` |
| `0x18015dfd0` | `func_0x18015dfd0_GuiData` | `GuiData` |
| `0x18015e060` | `func_0x18015e060_GuiData` | `GuiData` |
| `0x180167fb0` | `func_0x180167fb0_ClientInstance` | `ClientInstance` |
| `0x180168190` | `func_0x180168190_renderLevel` | `renderLevel` |
| `0x180168870` | `func_0x180168870_GuiData` | `GuiData` |
| `0x1801694f0` | `func_0x1801694f0_ThirdPersonNametag` | `ThirdPersonNametag` |
| `0x180169750` | `func_0x180169750_PacketV2` | `PacketV2` |
| `0x18016b7c0` | `func_0x18016b7c0_Backtrack` | `Backtrack` |
| `0x180246d40` | `func_0x180246d40_module` | `module` |
| `0x18024b6f0` | `func_0x18024b6f0_module` | `module` |
| `0x18024dcf0` | `func_0x18024dcf0_module` | `module` |

## Detailed references
- `CHEATS_AND_MODULES.md` — per-module breakdown
- `ARCHITECTURE.md` / `wiki/Architecture.md` — inferred class layout
- `function_labels.json` — address -> readable label
- `signature_scanner.py` — IOC scanner

## Patching recommendations
1. Integrity-check `ClientInstance`, `LevelRenderer`, `GuiData` vtables.
2. Scan memory for module-name strings and pointer table in `.rdata`.
3. Verify D3D11/DXGI `Present` and swap-chain pointers for overlay hooks.
4. Monitor `ModuleManager` strings and `PacketV2` logger output.
5. Detect injected DLLs via `K32EnumProcessModules` / `GetModuleHandle`.

## Decompiled source
`decompiled_source.c` is RetDec-generated x64 pseudo-C. Functions with known labels are renamed `func_<addr>_<module>`. It is not compilable and will not reproduce the original DLL.