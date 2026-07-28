#pragma once

#include <cstdint>
#include <cstddef>
#include <cstring>
#include <cstdlib>
#include <new>
#include <stdexcept>

// Decompiled function-pointer type used by Ghidra's "code *" declarations.
using func_ptr_t = void (*)();

// Minimal Windows API type aliases used by the decompiled DLL.
// These avoid pulling in <windows.h> and clashing with the DLL's own import-thunk definitions.
using HMODULE = void*;
using LPCSTR = const char*;
using LPVOID = void*;
using FARPROC = long long (*)();
using DWORD = unsigned long;
using HRESULT = long;
using LPUNKNOWN = void*;
using BOOL = int;
using HLOCAL = void*;
using SIZE_T = std::size_t;

// Short integer aliases used by Ghidra's decompiler output
using uint = unsigned int;
using ushort = unsigned short;
using byte = unsigned char;

// Ghidra odd-sized "undefinedN" types do not have a direct C/C++ equivalent.
// They are aliased to uint8_t so the mechanical output can be parsed;
// hand-refactored code should use the correct concrete type for the site.
using undefined1 = uint8_t;
using undefined2 = uint16_t;
using undefined3 = uint8_t;
using undefined4 = uint32_t;
using undefined5 = uint8_t;
using undefined6 = uint8_t;
using undefined7 = uint8_t;
using undefined8 = uint64_t;

// Common Windows/CRT opaque handles and structures used in the decompilation.
// Treated as void*/void for compilation; real definitions are in <windows.h>.
#ifndef _FILE_DEFINED
using FILE = void;
using _iobuf = void;
#endif
using LPCVOID = const void*;
using LPINIT_ONCE = void*;
using PTP_WORK = void*;
using PTP_TIMER = void*;
using PTP_IO = void*;
using PTP_POOL = void*;
using PTP_CLEANUP_GROUP = void*;
using LPSECURITY_ATTRIBUTES = void*;
using LPCRITICAL_SECTION = void*;
using LPOVERLAPPED = void*;
using LPBOOL = int*;
using LPDWORD = unsigned long*;
using LPFILETIME = void*;
using _FILETIME = void;
using UINT = unsigned int;
using WCHAR = wchar_t;
using LPSTR = char*;
using _Collvec = void;

namespace std {
    // Pre-declare the MSVC internal function seen in the decompiled output so the
    // auto-generated forward declaration in decls.h is well-formed.
    uint _Random_device(void);
}

#ifndef _MSC_VER
    #define __stdcall
    #define __cdecl
    #define __fastcall
#endif

#if defined(_MSC_VER)
    #define GH_DEBUG_BREAK() __debugbreak()
    #define GH_UNREACHABLE() __assume(0)
#else
    #define GH_DEBUG_BREAK() __builtin_trap()
    #define GH_UNREACHABLE() __builtin_unreachable()
#endif

// swi(N) in Ghidra pseudo-C is the ARM/Thumb "software interrupt" instruction.
// The x64 decompilation uses it as an unreachable trap after throwing/errors.
[[noreturn]] inline func_ptr_t ghidra_swi(int) {
    GH_DEBUG_BREAK();
    GH_UNREACHABLE();
}
#define swi(x) ghidra_swi(x)

// Used in "should never happen" decompiler-generated loops.
[[noreturn]] inline void invalidInstructionException() {
    GH_DEBUG_BREAK();
    GH_UNREACHABLE();
}

// LOCK()/UNLOCK() are Ghidra artifacts around atomic-style stores.
// Preserving exact memory ordering here would require per-site inspection; they are kept as
// compile-safe no-ops for the first mechanical pass.
#define LOCK()
#define UNLOCK()

// Ghidra bit-concatenation helpers.
#define CONCAT44(hi, lo) ((((std::uint64_t)(hi)) << 32) | (std::uint32_t)(lo))
#define CONCAT22(hi, lo) ((((std::uint32_t)(hi)) << 16) | (std::uint16_t)(lo))
#define CONCAT11(hi, lo) ((((std::uint16_t)(hi)) << 8) | (std::uint8_t)(lo))

// Ghidra zero-extension helpers (best-effort placeholders).
#define ZEXT116(x) ((std::uint8_t)(x))
#define ZEXT216(x) ((std::uint16_t)(x))
#define ZEXT416(x) ((std::uint32_t)(x))
#define ZEXT812(x) ((std::uint64_t)(x))
#define ZEXT816(x) ((std::uint64_t)(x))  // 16-byte result is not representable in C++17; placeholder

// Ghidra sub-register extraction helpers.
#define SUB161(x, off)  (*((std::uint8_t*)((std::uint8_t*)&(x) + (off))))
#define SUB162(x, off)  (*((std::uint16_t*)((std::uint8_t*)&(x) + (off) * 2)))
#define SUB164(x, off)  (*((std::uint32_t*)((std::uint8_t*)&(x) + (off) * 4)))
#define SUB168(x, off)  (*((std::uint64_t*)((std::uint8_t*)&(x) + (off) * 8)))
