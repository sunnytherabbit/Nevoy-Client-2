#include "Module_1802fc040.h"

Module_1802fc040::Module_1802fc040() : IModule(0, Category::CUSTOM, "Module_1802fc040") {
	// No settings extracted yet
}

std::string Module_1802fc040::getModuleName() { return "Module_1802fc040"; }
std::string Module_1802fc040::getTooltip() { 
	// Binary function: func_0x180311c10
	return "";
}

void Module_1802fc040::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x180313170
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x313170)(this);
}

void Module_1802fc040::onEnable() {
	// Binary function: func_0x180311da0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x311da0)(this);
}

void Module_1802fc040::onDisable() {
	// Binary function: func_0x180312f20
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x312f20)(this);
}

void Module_1802fc040::onLoadConfig(void* conf) {
	// Binary function: func_0x1803138b0
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onLoadConfig(conf);
}

