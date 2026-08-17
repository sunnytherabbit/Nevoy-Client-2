#include "Module_1802c0340.h"
#include <cmath>

Module_1802c0340::Module_1802c0340() : IModule(0, Category::CUSTOM, "Module_1802c0340") {
	registerBoolSetting("Disable", &disable, false);
	registerBoolSetting("Invert", &negative, false);
	registerFloatSetting("Multipli", &multipli, 0.008726646f, 0.f, 10.f);
}

std::string Module_1802c0340::getModuleName() { return "Module_1802c0340"; }
std::string Module_1802c0340::getTooltip() {
	// No manifest description
	return "";
}

void Module_1802c0340::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Ported from func_0x1802c1c40: recompute the patched float only when the
	// input value, sign, or disable state changes.
	if ((lastValue == value) && !std::isnan(lastValue) && !std::isnan(value) &&
	    (lastDisable == disable) && (lastNegative == negative))
		return;

	lastValue = value;
	lastDisable = disable;
	lastNegative = negative;

	float result = value * multipli;
	if (negative)
		result = -result;
	float out = disable ? 0.0f : result;

	if (codeBuf != nullptr)
		*codeBuf = out;
}

void Module_1802c0340::onEnable() {
	// Kept as direct binary call: onEnable uses the unmapped code-location
	// scanner (func_0x1802c1a90) and an executable near-allocator
	// (func_0x1800c23c0) that are not ported in the refactored source.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using OnEnableT = void(*)(void*);
	reinterpret_cast<OnEnableT>(mod->ptrBase + 0x2c1980)(this);
}

void Module_1802c0340::onDisable() {
	// Kept as direct binary call: onDisable relies on the same unmapped
	// scanner/allocator helpers used by onEnable.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using OnDisableT = void(*)(void*);
	reinterpret_cast<OnDisableT>(mod->ptrBase + 0x2c1b70)(this);
}
