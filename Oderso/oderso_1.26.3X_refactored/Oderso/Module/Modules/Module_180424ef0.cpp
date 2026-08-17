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
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using OnLoadT = void(*)(void*, void*);
	reinterpret_cast<OnLoadT>(mod->ptrBase + 0x428a90)(this, conf);
}

void Module_180424ef0::onSaveConfig(void* conf) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using OnSaveT = void(*)(void*, void*);
	reinterpret_cast<OnSaveT>(mod->ptrBase + 0x429160)(this, conf);
}

