#include "SDK/TextHolder.h"
#include "Utils/MemoryUtil.h"

#include <cstdint>
#include <cstring>
#include <cstdlib>

// Oderso-specific entry points seen at the start of the decompilation.
// They are kept as free functions so the rest of the mechanical/raw code
// can still find them by name, while the class itself follows Horion's layout.

uint8_t getByteAtOffset8(const void* object) {
    return static_cast<const uint8_t*>(object)[8];
}

TextHolder* TextHolder_from_cstr(TextHolder* self, const char* src) {
    if (!self)
        return nullptr;

    std::memset(self, 0, sizeof(*self));

    if (!src) {
        self->textLength = 0;
        self->alignedTextLength = 15;
        self->inlineText[0] = '\0';
        return self;
    }

    std::size_t len = std::strlen(src);
    if (static_cast<std::int64_t>(len) < 0)
        throwStringTooLong();

    self->textLength = len;

    if (len < 16) {
        self->alignedTextLength = 15;
        memoryMove(self->inlineText, src, len);
        self->inlineText[len] = '\0';
    } else {
        std::size_t capacity = len | 0xF;
        if (capacity < 0x16)
            capacity = 0x16;
        self->alignedTextLength = capacity;

        std::size_t allocSize = capacity + 1;
        if (capacity + 1 >= 0x1000)
            allocSize = capacity + 0x28;

        char* buffer = static_cast<char*>(heapAllocate(allocSize));

        if (capacity + 1 >= 0x1000) {
            std::uintptr_t raw = reinterpret_cast<std::uintptr_t>(buffer);
            std::uintptr_t aligned = (raw + 0x27) & ~static_cast<std::uintptr_t>(0x1F);
            self->pText = reinterpret_cast<char*>(aligned);
            *reinterpret_cast<char**>(self->pText - 8) = buffer;
        } else {
            self->pText = buffer;
        }

        memoryMove(self->pText, src, len);
        self->pText[len] = '\0';
    }

    return self;
}
