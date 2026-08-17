#include "Module_180218db0.h"

Module_180218db0::Module_180218db0() : IModule(0, Category::CUSTOM, "Visually adjusts block lighting when holding a block emitting light (e.g. torch)") {
	// No settings extracted for this module.
}

std::string Module_180218db0::getModuleName() {
	// Binary function: func_0x180219020 -> "DynamicLighting"
	return "DynamicLighting";
}

std::string Module_180218db0::getTooltip() {
	// Binary function: func_0x1802191c0 -> "mod.dynamic_lighting.name"
	// module_manifest has no description, so the binary string is used.
	return "mod.dynamic_lighting.name";
}

void Module_180218db0::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x180219740
	// Complex position tracking / dynamic-light update that relies on several
	// unmapped game internals (ClientInstance -> BlockSource/Dimension vtable
	// chains and the light-update helper func_0x180219390). Kept as a direct
	// binary call.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x219740)(this);
}

void Module_180218db0::onEnable() {
	// Binary function: func_0x180219350
	// The binary resets the cached block position / light state on enable.
	lastPos = 0xfffffe0c00000000;
	lastY = 0;
	lastLight = 0;
	active = false;
	currentLight = 0;
}

void Module_180218db0::onDisable() {
	// Binary function: func_0x180219380
	// Calls the unmapped light-update helper (func_0x180219390). Kept as a
	// direct binary call.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x219380)(this);
}
