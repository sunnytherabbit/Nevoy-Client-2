#include "Module_180245d30.h"

Module_180245d30::Module_180245d30() : IModule(0, Category::CUSTOM, "Module_180245d30") {
	registerBoolSetting("Rainbow", &rainbow, false);
}

std::string Module_180245d30::getModuleName() { return "Module_180245d30"; }
std::string Module_180245d30::getTooltip() { 
	// Binary function: func_0x180247220
	return "";
}

void Module_180245d30::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1802473b0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x2473b0)(this);
}

