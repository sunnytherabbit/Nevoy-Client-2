#include "Module_1801e20d0.h"

Module_1801e20d0::Module_1801e20d0() : IModule(0, Category::CUSTOM, "Module_1801e20d0") {
	// No settings extracted yet
}

std::string Module_1801e20d0::getModuleName() { return "Module_1801e20d0"; }
std::string Module_1801e20d0::getTooltip() {
	// No manifest description
	return "";
}

void Module_1801e20d0::onEnable() {
	// Binary function: func_0x1801e3780
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x1e3780)(this);
}

void Module_1801e20d0::onLoadConfig(void* conf) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using OnLoadT = void(*)(void*, void*);
	reinterpret_cast<OnLoadT>(mod->ptrBase + 0x1e3c80)(this, conf);
}

void Module_1801e20d0::onSaveConfig(void* conf) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using OnSaveT = void(*)(void*, void*);
	reinterpret_cast<OnSaveT>(mod->ptrBase + 0x1e49b0)(this, conf);
}

