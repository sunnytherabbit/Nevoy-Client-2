#pragma once

#include <cstddef>

// Cleaned equivalents of the low-level helpers that appear throughout the
// 1.26.3X decompilation.

void* heapAllocate(std::size_t size);
void heapFree(void* ptr);

// The original func_0x1806aa960 is a hand-rolled, size-specialised memmove.
// std::memmove provides the same non-destructive copy semantics for both
// overlapping and non-overlapping regions.
void memoryMove(void* dst, const void* src, std::size_t n);

[[noreturn]] void throwStringTooLong();
[[noreturn]] void throwVectorTooLong();
[[noreturn]] void throwBadArrayNewLength();
