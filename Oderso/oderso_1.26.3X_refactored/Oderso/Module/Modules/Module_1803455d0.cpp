#include "Module_1803455d0.h"

Module_1803455d0::Module_1803455d0() : IModule(0, Category::CUSTOM, "Module_1803455d0") {
	registerBoolSetting("Disable", &disable, false);
	registerBoolSetting("No background", &noBackground, false);
}

std::string Module_1803455d0::getModuleName() { return "Module_1803455d0"; }
std::string Module_1803455d0::getTooltip() { 
	// Binary function: func_0x180346a20
	return "";
}

void Module_1803455d0::onDisable() {
	// Binary function: func_0x180208fa0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x208fa0)(this);
}

void Module_1803455d0::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x180346bb0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x346bb0)(this);
}

void Module_1803455d0::onLoadConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onLoadConfig(conf);
}

void Module_1803455d0::onSaveConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onSaveConfig(conf);
}

