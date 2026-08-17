#include "Module_180218db0.h"

Module_180218db0::Module_180218db0() : IModule(0, Category::CUSTOM, "Visually adjusts block lighting when holding a block emitting light (e.g. torch)") {
	// No settings extracted for this module.
}

std::string Module_180218db0::getModuleName() {
	return "DynamicLighting";
}

std::string Module_180218db0::getTooltip() {
	return "mod.dynamic_lighting.name";
}

void Module_180218db0::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Kept as direct binary call: onPreRender tracks the held light-emitting
	// block and updates the in-game light grid through several unmapped
	// ClientInstance / BlockSource / Dimension vtable helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x219740)(this);
}

void Module_180218db0::onEnable() {
	// Ported from func_0x180219350: reset the cached block position / light state.
	lastPos = 0xfffffe0c00000000;
	lastY = 0;
	lastLight = 0;
	active = false;
	currentLight = 0;
}

void Module_180218db0::onDisable() {
	// Kept as direct binary call: onDisable delegates to the unmapped light-update
	// helper (func_0x180219390), which touches game-side light state.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x219380)(this);
}
