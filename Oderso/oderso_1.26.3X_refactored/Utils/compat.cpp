#include <oderso/compat.h>

// The symbols below are needed only when cross-compiling with MinGW and linking
// against pre-built MSVC-compatible static libraries (e.g. MinHook). MSVC's own
// C runtime / OS loader provide these, so defining them again causes redefinition
// errors.
#ifndef _MSC_VER

// Loader-provided TLS symbols. In a real x64 PE these are filled in by the OS loader.
// Provided here as placeholders so the static library can be compiled standalone.
extern "C" __attribute__((weak)) void* ThreadLocalStoragePointer = nullptr;
extern "C" __attribute__((weak)) unsigned long _tls_index = 0;

// MSVC stack-cookie symbols required by pre-built MSVC-compatible static libraries
// when cross-compiling with MinGW. These are normally provided by the MSVC C runtime.
extern "C" uintptr_t __security_cookie = 0;
extern "C" void __security_check_cookie(uintptr_t cookie) {}
extern "C" void __GSHandlerCheck() {}

#endif
