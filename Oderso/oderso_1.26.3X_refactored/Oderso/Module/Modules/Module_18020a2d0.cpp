#include "Module_18020a2d0.h"

Module_18020a2d0::Module_18020a2d0() : IModule(0, Category::COMBAT, "Module_18020a2d0") {
	// No settings extracted yet
}

std::string Module_18020a2d0::getModuleName() { return "Module_18020a2d0"; }
std::string Module_18020a2d0::getTooltip() { 
	// Binary function: func_0x18020abf0
	return "";
}

void Module_18020a2d0::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x18020ad80
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x20ad80)(this);
}

void Module_18020a2d0::onLoadConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onLoadConfig(conf);
}

void Module_18020a2d0::onSaveConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onSaveConfig(conf);
}

