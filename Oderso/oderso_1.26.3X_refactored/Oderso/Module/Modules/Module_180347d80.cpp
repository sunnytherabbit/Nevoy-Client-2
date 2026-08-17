#include "Module_180347d80.h"

Module_180347d80::Module_180347d80() : IModule(0, Category::CUSTOM, "Module_180347d80") {
	// No settings extracted yet
}

std::string Module_180347d80::getModuleName() { return "Module_180347d80"; }
std::string Module_180347d80::getTooltip() {
	// No manifest description
	return "";
}

void Module_180347d80::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1803482b0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x3482b0)(this);
}

void Module_180347d80::onEnable() {
	// Binary function: func_0x1803482a0
	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x80) = 0;
}

