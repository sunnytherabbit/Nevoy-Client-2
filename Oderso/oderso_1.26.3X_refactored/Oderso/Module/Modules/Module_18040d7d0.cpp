#include "Module_18040d7d0.h"

Module_18040d7d0::Module_18040d7d0() : IModule(0, Category::CUSTOM, "Module_18040d7d0") {
	// No settings extracted yet
}

std::string Module_18040d7d0::getModuleName() { return "Module_18040d7d0"; }
std::string Module_18040d7d0::getTooltip() {
	// No manifest description
	return "";
}

void Module_18040d7d0::onLevelRender() {
	// Kept as direct binary call: complex level-render loop with per-entity text processing and unmapped vtable calls.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using LevelRenderFunc = void(*)(void*);
	reinterpret_cast<LevelRenderFunc>(mod->ptrBase + 0x410570)(this);
}

