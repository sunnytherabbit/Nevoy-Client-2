#include "Module_1803455d0.h"

Module_1803455d0::Module_1803455d0() : IModule(0, Category::CUSTOM, "Module_1803455d0") {
	registerBoolSetting("Disable", &disable, false);
	registerBoolSetting("No background", &noBackground, false);
}

std::string Module_1803455d0::getModuleName() {
	return "NoBackground";
}
std::string Module_1803455d0::getTooltip() {
	// Manifest tooltip
	return "No background";
}

void Module_1803455d0::onDisable() {
	// Kept as direct binary call: func_0x180208fa0 — background/option restore with unmapped UI object helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x208fa0)(this);
}

void Module_1803455d0::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Kept as direct binary call: func_0x180346bb0 — UI background removal with TLS strings and unmapped helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x346bb0)(this);
}

void Module_1803455d0::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_1803455d0::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

