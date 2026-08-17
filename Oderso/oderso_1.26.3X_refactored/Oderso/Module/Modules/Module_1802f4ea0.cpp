#include "Module_1802f4ea0.h"

Module_1802f4ea0::Module_1802f4ea0() : IModule(0, Category::CUSTOM, "Module_1802f4ea0") {
	registerBoolSetting("Disable", &disable, false);
	registerBoolSetting("No background", &noBackground, false);
}

std::string Module_1802f4ea0::getModuleName() { return "Module_1802f4ea0"; }
std::string Module_1802f4ea0::getTooltip() { 
	// Binary function: func_0x1802f6290
	return "";
}

void Module_1802f4ea0::onDisable() {
	// Binary function: func_0x180208fa0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x208fa0)(this);
}

void Module_1802f4ea0::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1802f6400
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x2f6400)(this);
}

void Module_1802f4ea0::onLoadConfig(void* conf) {
	// Binary function: func_0x180135130
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onLoadConfig(conf);
}

void Module_1802f4ea0::onSaveConfig(void* conf) {
	// Binary function: func_0x180135c90
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onSaveConfig(conf);
}

