#include "Module_180218db0.h"

Module_180218db0::Module_180218db0() : IModule(0, Category::CUSTOM, "Module_180218db0") {
	// No settings extracted yet
}

std::string Module_180218db0::getModuleName() { return "Module_180218db0"; }
std::string Module_180218db0::getTooltip() { 
	// Binary function: func_0x1802191c0
	return "";
}

void Module_180218db0::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x180219740
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x219740)(this);
}

void Module_180218db0::onEnable() {
	// Binary function: func_0x180219350
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x80) = 0xfffffe0c00000000;
	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x88) = 0;
	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x8b) = 0;
}

void Module_180218db0::onDisable() {
	// Binary function: func_0x180219380
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x219380)(this);
}

