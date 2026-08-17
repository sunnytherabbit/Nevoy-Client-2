#include "Module_1802c0340.h"
#include <cmath>

Module_1802c0340::Module_1802c0340() : IModule(0, Category::CUSTOM, "Module_1802c0340") {
	registerBoolSetting("Disable", &disable, false);
	registerFloatSetting("Multipli", &multipli, 0.f, 0.f, 10.f);
}

std::string Module_1802c0340::getModuleName() { return "Module_1802c0340"; }
std::string Module_1802c0340::getTooltip() {
	// No manifest description
	return "";
}

void Module_1802c0340::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1802c1c40
	uint8_t cVar1;
	float fVar2;
	float fVar3;
	fVar2 = *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x84);
	if ((fVar2 != *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x8c)) ||
	    (std::isnan(fVar2) || std::isnan(*reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x8c)))) {
		cVar1 = *reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x80);
	} else {
		cVar1 = *reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x80);
		if ((*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x81) ==
		     *reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x80)) &&
		    (cVar1 = *reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x81),
		     *reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x91) ==
		     *reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x90))) {
			// empty
		}
	}
	*reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x8c) = fVar2;
	*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x81) = cVar1;
	*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x91) = *reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x90);
	fVar2 = fVar2 * *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x84);
	if (*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x90) != '\0') {
		fVar2 = -fVar2;
	}
	fVar3 = 0.0f;
	if (cVar1 == '\0') {
		fVar3 = fVar2;
	}
	**reinterpret_cast<float**>(reinterpret_cast<uintptr_t>(this) + 0x98) = fVar3;
}

void Module_1802c0340::onEnable() {
	// Binary function: func_0x1802c1980
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	*reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x8c) = -1.0f;
	*reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x81) = false;
	*reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x91) = false;

	auto codePtr = *reinterpret_cast<uintptr_t*>(base + 0x83fc40);
	if (codePtr == 0) return;

	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x94) =
	    *reinterpret_cast<uint32_t*>(codePtr);

	auto buf = g_Data.allocNearCode(codePtr, 4);
	if (buf != nullptr)
	    *reinterpret_cast<uint32_t*>(buf) = 0;

	*reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(this) + 0x98) = buf;

	int32_t relOffset = (int32_t)((uintptr_t)buf - codePtr - 4);
	g_Data.patchToCode(reinterpret_cast<void*>(codePtr), &relOffset, 4);
}

void Module_1802c0340::onDisable() {
	// Binary function: func_0x1802c1b70
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	auto codePtr = *reinterpret_cast<uintptr_t*>(base + 0x83fc50);
	if (codePtr == 0) return;

	auto savedCode = *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x94);
	g_Data.patchToCode(reinterpret_cast<void*>(codePtr), &savedCode, 4);

	auto buf = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(this) + 0x98);
	if (buf != nullptr) {
		g_Data.freeNearCode(buf);
		*reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(this) + 0x98) = nullptr;
	}
}

