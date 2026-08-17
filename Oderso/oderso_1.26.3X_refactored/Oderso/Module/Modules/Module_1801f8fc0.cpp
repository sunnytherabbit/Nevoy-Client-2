#include "Module_1801f8fc0.h"

Module_1801f8fc0::Module_1801f8fc0() : IModule(0, Category::CUSTOM, "Module_1801f8fc0") {
	registerBoolSetting("Disable", &disable, false);
	registerBoolSetting("Always show", &alwaysShow, false);
	registerFloatSetting("Scale", &scale, 1.f, 0.1f, 5.f);
}

std::string Module_1801f8fc0::getModuleName() {
	return "AlwaysShow";
}
std::string Module_1801f8fc0::getTooltip() {
	// Manifest tooltip
	return "Always show";
}

void Module_1801f8fc0::onDisable() {
	// Kept as direct binary call: restores player/object UI state through unmapped offset helper func_0x180109090/150.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x1faae0)(this);
}

void Module_1801f8fc0::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Kept as direct binary call: heavy TLS-string UI setup and render-object state management.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x1fabe0)(this);
}

void Module_1801f8fc0::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_1801f8fc0::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

