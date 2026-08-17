#include "Module_180420050.h"
#include <cmath>

Module_180420050::Module_180420050() : IModule(0, Category::CUSTOM, "Module_180420050") {
	registerFloatSetting("Outline opacity", &outlineOpacity, 1.f, 0.f, 1.f);
}

std::string Module_180420050::getModuleName() { return "Module_180420050"; }
std::string Module_180420050::getTooltip() {
	// No manifest description
	return "";
}

void Module_180420050::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Ported from func_0x180423530; raw offsets retained because the full settings layout for this module is not yet reconstructed.
	float fVar1;
	fVar1 = *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x98);
	if ((fVar1 != *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x9c)) || (std::isnan(fVar1) || std::isnan(*reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x9c)))) {
	*reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x9c) = fVar1;
	*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0xb8) = 1;
}
}

void Module_180420050::onEnable() {
	// Ported from func_0x180423510; raw offsets retained because the full settings layout for this module is not yet reconstructed.
	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x9c) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x98);
	*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0xb8) = 1;
}

