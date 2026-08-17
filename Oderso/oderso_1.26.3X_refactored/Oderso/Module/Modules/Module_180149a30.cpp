#include "Module_180149a30.h"

Module_180149a30::Module_180149a30() : IModule(0, Category::CUSTOM, "Module_180149a30") {
	registerBoolSetting("Disable", &disable, false);
	registerBoolSetting("No background", &noBackground, false);
	registerBoolSetting("No numbe", &noNumbe, false);
}

std::string Module_180149a30::getModuleName() {
	return "NoBackground";
}
std::string Module_180149a30::getTooltip() {
	// Manifest tooltip
	return "No background";
}

void Module_180149a30::onDisable() {
	// Binary function: func_0x18014b7f0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x14b7f0)(this);
}

void Module_180149a30::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x18014b970
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x14b970)(this);
}

void Module_180149a30::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_180149a30::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

