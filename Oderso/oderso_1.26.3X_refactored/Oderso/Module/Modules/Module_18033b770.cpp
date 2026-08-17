#include "Module_18033b770.h"

Module_18033b770::Module_18033b770() : IModule(0, Category::CUSTOM, "Module_18033b770") {
	// No settings extracted yet
}

std::string Module_18033b770::getModuleName() { return "Module_18033b770"; }
std::string Module_18033b770::getTooltip() { 
	// Binary function: func_0x18033c270
	return "";
}

void Module_18033b770::onEnable() {
	// Binary function: func_0x18033dee0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x33dee0)(this);
}

void Module_18033b770::onDisable() {
	// Binary function: func_0x18033f400
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x33f400)(this);
}

void Module_18033b770::onLoadConfig(void* conf) {
	// Binary function: func_0x18033f540
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onLoadConfig(conf);
}

void Module_18033b770::onSaveConfig(void* conf) {
	// Binary function: func_0x18033fc10
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onSaveConfig(conf);
}

