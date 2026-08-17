#include "Module_1802f4ea0.h"

Module_1802f4ea0::Module_1802f4ea0() : IModule(0, Category::CUSTOM, "Module_1802f4ea0") {
	registerBoolSetting("Disable", &disable, false);
	registerBoolSetting("No background", &noBackground, false);
}

std::string Module_1802f4ea0::getModuleName() {
	return "NoBackground";
}
std::string Module_1802f4ea0::getTooltip() {
	// Manifest tooltip
	return "No background";
}

void Module_1802f4ea0::onDisable() {
	// Kept as direct binary call: restores code patches through unmapped std::function/object helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x208fa0)(this);
}

void Module_1802f4ea0::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Kept as direct binary call: heavy TLS-string UI object setup and render-state toggling.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x2f6400)(this);
}

void Module_1802f4ea0::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_1802f4ea0::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

