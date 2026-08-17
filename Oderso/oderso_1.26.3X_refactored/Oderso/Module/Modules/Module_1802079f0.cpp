#include "Module_1802079f0.h"

Module_1802079f0::Module_1802079f0() : IModule(0, Category::CUSTOM, "Module_1802079f0") {
	registerBoolSetting("Disable", &disable, false);
	registerBoolSetting("No background", &noBackground, false);
}

std::string Module_1802079f0::getModuleName() {
	return "NoBackground";
}
std::string Module_1802079f0::getTooltip() {
	// Manifest tooltip
	return "No background";
}

void Module_1802079f0::onDisable() {
	// Binary function: func_0x180208fa0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x208fa0)(this);
}

void Module_1802079f0::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x180209120
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x209120)(this);
}

void Module_1802079f0::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_1802079f0::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

