#include <oderso/compat.h>

// Loader-provided TLS symbols. In a real x64 PE these are filled in by the OS loader.
// Provided here as placeholders so the static library can be compiled standalone.
extern "C" __attribute__((weak)) void* ThreadLocalStoragePointer = nullptr;
extern "C" __attribute__((weak)) unsigned long _tls_index = 0;

// MSVC stack-cookie symbols required by pre-built MSVC-compatible static libraries
// (e.g. minhook) when cross-compiling with MinGW. These are normally provided by
// the MSVC C runtime; provide no-op placeholders here for the linker.
extern "C" uintptr_t __security_cookie = 0;
extern "C" void __security_check_cookie(uintptr_t cookie) {}
extern "C" void __GSHandlerCheck() {}
