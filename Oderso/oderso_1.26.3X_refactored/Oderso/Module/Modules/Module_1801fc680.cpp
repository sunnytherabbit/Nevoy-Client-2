#include "Module_1801fc680.h"

Module_1801fc680::Module_1801fc680() : IModule(0, Category::CUSTOM, "Module_1801fc680") {
	registerFloatSetting("Size", &size, 2.f, 0.5f, 2.f);
	registerBoolSetting("Shadow", &shadow, false);
	registerBoolSetting("Rainbow text", &rainbowText, true);
	registerBoolSetting("Simple names", &simpleNames, true);
	registerBoolSetting("Show item", &showItem, true);
}

std::string Module_1801fc680::getModuleName() {
	return "RainbowText";
}
std::string Module_1801fc680::getTooltip() {
	// Manifest tooltip
	return "Rainbow text";
}

void Module_1801fc680::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_1801fc680::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
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

