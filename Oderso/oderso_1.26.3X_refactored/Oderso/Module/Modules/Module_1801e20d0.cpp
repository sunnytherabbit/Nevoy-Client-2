#include "Module_1801e20d0.h"

Module_1801e20d0::Module_1801e20d0() : IModule(0, Category::CUSTOM, "Module_1801e20d0") {
	// No settings extracted yet
}

std::string Module_1801e20d0::getModuleName() { return "Module_1801e20d0"; }
std::string Module_1801e20d0::getTooltip() { 
	// Binary function: func_0x1801e3610
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
	// Binary function: func_0x1801e3c80
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onLoadConfig(conf);
}

void Module_1801e20d0::onSaveConfig(void* conf) {
	// Binary function: func_0x1801e49b0
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onSaveConfig(conf);
}

