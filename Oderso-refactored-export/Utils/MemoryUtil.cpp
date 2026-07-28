#include "Utils/MemoryUtil.h"

#include <cstdlib>
#include <cstring>
#include <new>
#include <stdexcept>

void* heapAllocate(std::size_t size) {
    if (size == 0) {
        size = 1;
    }
    // The original loops a user-installed new-handler; for the refactored source
    // we model this with the standard throwing allocator behaviour.
    if (void* p = std::malloc(size)) {
        return p;
    }
    throw std::bad_alloc();
}

void heapFree(void* ptr) {
    std::free(ptr);
}

void memoryMove(void* dst, const void* src, std::size_t n) {
    std::memmove(dst, src, n);
}

[[noreturn]] void throwStringTooLong() {
    throw std::length_error("string too long");
}

[[noreturn]] void throwVectorTooLong() {
    throw std::length_error("vector too long");
}

[[noreturn]] void throwBadArrayNewLength() {
    throw std::bad_array_new_length();
}
