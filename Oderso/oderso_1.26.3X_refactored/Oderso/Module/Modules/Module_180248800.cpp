#include "Module_180248800.h"

Module_180248800::Module_180248800() : IModule(0, Category::CUSTOM, "Module_180248800") {
	registerIntSetting("Health", &health, 2, 1, 20);
	registerBoolSetting("Fade col", &fadeCol, false);
}

std::string Module_180248800::getModuleName() { return "Module_180248800"; }
std::string Module_180248800::getTooltip() {
	// No manifest description
	return "";
}

void Module_180248800::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x18024a500
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x24a500)(this);
}

