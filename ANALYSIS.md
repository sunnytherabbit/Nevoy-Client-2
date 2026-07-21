# Defensive Reverse-Engineering Analysis: Nevoy Client v26.32

## Binary Overview
- File: `Nevoy Client v26.32.dll`
- Format: PE32+ (x86-64) DLL
- Image base: `0x180000000`
- Entry point: `0x18026b4f4`
- Compiled with: Microsoft Visual C++ / MSVC linker
- Sections: .text (code), .rdata (constants/pointers), .data (globals), .pdata (unwind)

## High-level Behaviour
This is a native x64 DLL injected into a Minecraft-based game process. It hooks game structures (ClientInstance, GuiData, LevelRenderer, LevelRendererPlayer) and loads cheat modules via a ModuleManager. It uses D3D11/DXGI for rendering overlays and WinMM/PlaySoundA for UI sounds.

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

## Identified Cheat Modules / Hook Functions

| Address | Renamed function | Original | Keywords |
|---------|------------------|----------|----------|
| `0x1800044b0` | `func_0x1800044b0_assets_clickgui` | `function_1800044b0` | assets/clickgui |
| `0x1800153c0` | `func_0x1800153c0_Nevoy_Client` | `function_1800153c0` | Nevoy Client |
| `0x18001b880` | `func_0x18001b880_Nevoy_Client` | `function_18001b880` | Nevoy Client |
| `0x18004ee60` | `func_0x18004ee60_PacketV2` | `function_18004ee60` | PacketV2, [PacketV2] |
| `0x18005ec20` | `func_0x18005ec20_Backtrack` | `function_18005ec20` | Backtrack |
| `0x180063f90` | `func_0x180063f90_Baritone` | `function_180063f90` | Baritone |
| `0x18006f0d0` | `func_0x18006f0d0_GuiData` | `function_18006f0d0` | GuiData, displayClientMessage |
| `0x18006fb70` | `func_0x18006fb70_Baritone` | `function_18006fb70` | Baritone |
| `0x180070350` | `func_0x180070350_ClientInstance` | `function_180070350` | ClientInstance, getBlockSource |
| `0x180070630` | `func_0x180070630_ClientInstance` | `function_180070630` | ClientInstance |
| `0x1800706c0` | `func_0x1800706c0_ClientInstance` | `function_1800706c0` | ClientInstance, getLocalPlayer |
| `0x180074b10` | `func_0x180074b10_ClientInstance` | `function_180074b10` | ClientInstance, [Setup] |
| `0x18008dbb0` | `func_0x18008dbb0_module` | `function_18008dbb0` | module, [ModuleManager] |
| `0x18008f410` | `func_0x18008f410_modules_not_initialized` | `function_18008f410` | modules not initialized, module |
| `0x1800c1c40` | `func_0x1800c1c40_AntiKB` | `function_1800c1c40` | AntiKB |
| `0x1800c2e90` | `func_0x1800c2e90_Backtrack` | `function_1800c2e90` | Backtrack |
| `0x1800c3600` | `func_0x1800c3600_Baritone` | `function_1800c3600` | Baritone |
| `0x1800c44a0` | `func_0x1800c44a0_BlockESP` | `function_1800c44a0` | BlockESP |
| `0x1800c61e0` | `func_0x1800c61e0_Disabler` | `function_1800c61e0` | Disabler |
| `0x1800c6d60` | `func_0x1800c6d60_Flight` | `function_1800c6d60` | Flight |
| `0x1800c7580` | `func_0x1800c7580_FreeCam` | `function_1800c7580` | FreeCam |
| `0x1800c8790` | `func_0x1800c8790_InvMove` | `function_1800c8790` | InvMove |
| `0x1800ccb20` | `func_0x1800ccb20_StorageESP` | `function_1800ccb20` | StorageESP |
| `0x1800cdca0` | `func_0x1800cdca0_lapis` | `function_1800cdca0` | lapis |
| `0x1800ced70` | `func_0x1800ced70_Wallhack` | `function_1800ced70` | Wallhack |
| `0x1800e02a0` | `func_0x1800e02a0_Baritone` | `function_1800e02a0` | Baritone |
| `0x1800ed1d0` | `func_0x1800ed1d0_Baritone` | `function_1800ed1d0` | Baritone |
| `0x1800f0f50` | `func_0x1800f0f50_Baritone` | `function_1800f0f50` | Baritone |
| `0x1800f3f60` | `func_0x1800f3f60_Baritone` | `function_1800f3f60` | Baritone |
| `0x1800f9310` | `func_0x1800f9310_projMatrix` | `function_1800f9310` | projMatrix |
| `0x1800f93c0` | `func_0x1800f93c0_viewMatrix` | `function_1800f93c0` | viewMatrix |
| `0x1800f9470` | `func_0x1800f9470_ClientInstance` | `function_1800f9470` | ClientInstance |
| `0x1800fc5e0` | `func_0x1800fc5e0_Baritone` | `function_1800fc5e0` | Baritone |
| `0x1801019c0` | `func_0x1801019c0_Baritone` | `function_1801019c0` | Baritone |
| `0x1801052e0` | `func_0x1801052e0_BlockESP` | `function_1801052e0` | BlockESP |
| `0x180105a50` | `func_0x180105a50_InvMove` | `function_180105a50` | InvMove, [InvMove] |
| `0x180106480` | `func_0x180106480_StorageESP` | `function_180106480` | StorageESP |
| `0x180106f90` | `func_0x180106f90_BlockESP` | `function_180106f90` | BlockESP |
| `0x1801076e0` | `func_0x1801076e0_InvMove` | `function_1801076e0` | InvMove, [InvMove] |
| `0x180107cc0` | `func_0x180107cc0_StorageESP` | `function_180107cc0` | StorageESP |
| `0x1801080f0` | `func_0x1801080f0_lapis` | `function_1801080f0` | lapis, lapis_ore, minecraft:lapis |
| `0x18010aa80` | `func_0x18010aa80_Baritone` | `function_18010aa80` | Baritone |
| `0x18010c470` | `func_0x18010c470_InvMove` | `function_18010c470` | InvMove, [InvMove] |
| `0x180131ba0` | `func_0x180131ba0_Baritone` | `function_180131ba0` | Baritone |
| `0x180134080` | `func_0x180134080_Baritone` | `function_180134080` | Baritone |
| `0x180134e50` | `func_0x180134e50_Baritone` | `function_180134e50` | Baritone |
| `0x1801383e0` | `func_0x1801383e0_Baritone` | `function_1801383e0` | Baritone |
| `0x18013a1c0` | `func_0x18013a1c0_Baritone` | `function_18013a1c0` | Baritone |
| `0x180152350` | `func_0x180152350_PacketV2` | `function_180152350` | PacketV2 |
| `0x18015d400` | `func_0x18015d400_ClientInstance` | `function_18015d400` | ClientInstance |
| `0x18015d490` | `func_0x18015d490_ClientInstance` | `function_18015d490` | ClientInstance |
| `0x18015d520` | `func_0x18015d520_ClientInstance` | `function_18015d520` | ClientInstance, viewMatrix |
| `0x18015d5b0` | `func_0x18015d5b0_ClientInstance` | `function_18015d5b0` | ClientInstance, getFovX |
| `0x18015d640` | `func_0x18015d640_ClientInstance` | `function_18015d640` | ClientInstance, getFovY |
| `0x18015d6d0` | `func_0x18015d6d0_ClientInstance` | `function_18015d6d0` | ClientInstance, getLevelRenderer |
| `0x18015d760` | `func_0x18015d760_ClientInstance` | `function_18015d760` | ClientInstance, getBlockSource |
| `0x18015dac0` | `func_0x18015dac0_getLevelRenderer` | `function_18015dac0` | getLevelRenderer |
| `0x18015db50` | `func_0x18015db50_cameraPos` | `function_18015db50` | cameraPos |
| `0x18015dbe0` | `func_0x18015dbe0_viewMatrix` | `function_18015dbe0` | viewMatrix |
| `0x18015dc70` | `func_0x18015dc70_projMatrix` | `function_18015dc70` | projMatrix |
| `0x18015dd00` | `func_0x18015dd00_ClientInstance` | `function_18015dd00` | ClientInstance |
| `0x18015de20` | `func_0x18015de20_viewMatrix` | `function_18015de20` | viewMatrix |
| `0x18015deb0` | `func_0x18015deb0_projMatrix` | `function_18015deb0` | projMatrix |
| `0x18015df40` | `func_0x18015df40_GuiData` | `function_18015df40` | GuiData, ScreenSize |
| `0x18015dfd0` | `func_0x18015dfd0_GuiData` | `function_18015dfd0` | GuiData, ScreenSize |
| `0x18015e060` | `func_0x18015e060_GuiData` | `function_18015e060` | GuiData, GuiScale |
| `0x180167fb0` | `func_0x180167fb0_ClientInstance` | `function_180167fb0` | ClientInstance, getLocalPlayer |
| `0x180168190` | `func_0x180168190_renderLevel` | `function_180168190` | renderLevel |
| `0x180168870` | `func_0x180168870_GuiData` | `function_180168870` | GuiData, displayClientMessage |
| `0x180169750` | `func_0x180169750_PacketV2` | `function_180169750` | PacketV2, welcome, goodbye, assets/inject_on, assets/inject_off |
| `0x18016b7c0` | `func_0x18016b7c0_Backtrack` | `function_18016b7c0` | Backtrack |
| `0x180246d40` | `func_0x180246d40_module` | `function_180246d40` | module |
| `0x18024b6f0` | `func_0x18024b6f0_module` | `function_18024b6f0` | module |
| `0x18024dcf0` | `func_0x18024dcf0_module` | `function_18024dcf0` | module |

## Detailed Module Reference
See `CHEATS_AND_MODULES.md` and `wiki/` for a per-module breakdown with strings and inferred purposes.

## Patching Recommendations
1. Integrity-check the game's `ClientInstance`, `LevelRenderer`, `GuiData` vtables for modifications.
2. Scan process memory for the module-name strings / pointer table (`.rdata`) as IOCs.
3. Verify D3D11/DXGI swap-chain and present function pointers; this client likely hooks `Present` for rendering.
4. Monitor `ModuleManager` string references (`[ModuleManager]`, `modules not initialized yet`) and the `PacketV2` logger.
5. Detect injected DLLs via `K32EnumProcessModules` / `GetModuleHandle` checks; the loader searches for local `d3d12.dll` fallbacks.

## Decompiled Source
The full retdec-generated C source is in `decompiled_source.c`. Functions that reference known cheat/hook strings have been renamed to `func_<addr>_<keyword>`. It is approximate pseudo-C and will not compile as-is, but it exposes the function-level logic for patching.