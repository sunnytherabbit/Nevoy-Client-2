#include <oderso/compat.h>

// Loader-provided TLS symbols. In a real x64 PE these are filled in by the OS loader.
// Provided here as placeholders so the static library can be compiled standalone.
extern "C" void* ThreadLocalStoragePointer = nullptr;
extern "C" unsigned long _tls_index = 0;
