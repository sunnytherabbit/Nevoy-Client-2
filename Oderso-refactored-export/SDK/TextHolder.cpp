#include "TextHolder.h"
#include "Utils/MemoryUtil.h"

#include <cstring>

void GamerTextHolder::copyFrom(TextHolder *copy) {
	deleteText();
	std::memset(this, 0, sizeof(TextHolder));
	textLength = copy->textLength;
	alignedTextLength = copy->alignedTextLength;
	if (copy->textLength < 16) {
		memoryMove(inlineText, copy->inlineText, 16);
	} else {
		size_t size = copy->textLength;

		if (size + 1 >= 0x1000)
			size += 8;

		pText = static_cast<char*>(heapAllocate(size + 1));

		if (size + 1 >= 0x1000) {
			*reinterpret_cast<char**>(pText) = pText;
			pText += 8;
		}

		if (pText != nullptr && copy->pText != nullptr) {
			memoryMove(pText, copy->pText, textLength);
			pText[textLength] = 0;
		}
	}
}

void GamerTextHolder::deleteText() {
	if (textLength >= 16 && pText != nullptr) {
		if (textLength + 1 >= 0x1000) {
			pText = *reinterpret_cast<char**>(pText - 8);
		}
		heapFree(pText);
	}
}
