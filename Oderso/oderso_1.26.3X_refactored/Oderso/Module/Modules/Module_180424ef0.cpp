#include "Module_180424ef0.h"

Module_180424ef0::Module_180424ef0() : IModule(0, Category::CUSTOM, "Module_180424ef0") {
	// No settings extracted yet
}

std::string Module_180424ef0::getModuleName() { return "Module_180424ef0"; }
std::string Module_180424ef0::getTooltip() { 
	// Binary function: func_0x1804265a0
	return "";
}

void Module_180424ef0::onEnable() {
	// Binary function: func_0x180426730
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x426730)(this);
}

void Module_180424ef0::slot_15() {
	// Binary function: func_0x180427790
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x427790)(this);
}

void Module_180424ef0::onLoadConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onLoadConfig(conf);
}

void Module_180424ef0::onSaveConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onSaveConfig(conf);
}

