#include "Module_1801fc680.h"

Module_1801fc680::Module_1801fc680() : IModule(0, Category::CUSTOM, "Module_1801fc680") {
	registerFloatSetting("Size", &size, 2.f, 0.5f, 2.f);
	registerBoolSetting("Shadow", &shadow, false);
	registerBoolSetting("Rainbow text", &rainbowText, true);
	registerBoolSetting("Simple names", &simpleNames, true);
	registerBoolSetting("Show item", &showItem, true);
}

std::string Module_1801fc680::getModuleName() { return "Module_1801fc680"; }
std::string Module_1801fc680::getTooltip() { 
	// Binary function: func_0x1801ffda0
	return "";
}

void Module_1801fc680::onLoadConfig(void* conf) {
	// Binary function: func_0x180135130
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onLoadConfig(conf);
}

void Module_1801fc680::onSaveConfig(void* conf) {
	// Binary function: func_0x180135c90
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onSaveConfig(conf);
}

void Module_1801fc680::toggle(void* event, bool* cancel) {
	// Binary function: func_0x1801fff40
	if (event == nullptr)
		return;

	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using ToggleFunc = void(*)(void*, void*);
	reinterpret_cast<ToggleFunc>(mod->ptrBase + 0x1fff40)(this, event);
}

