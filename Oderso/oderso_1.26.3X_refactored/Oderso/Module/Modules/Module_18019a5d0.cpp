#include "Module_18019a5d0.h"

Module_18019a5d0::Module_18019a5d0() : IModule(0, Category::CUSTOM, "Module_18019a5d0") {
	registerFloatSetting("Size", &size, 2.f, 0.5f, 2.f);
	registerBoolSetting("Simple names", &simpleNames, false);
	registerBoolSetting("Show nametag", &showNametag, false);
}

std::string Module_18019a5d0::getModuleName() { return "Module_18019a5d0"; }
std::string Module_18019a5d0::getTooltip() { 
	// Binary function: func_0x18019c630
	return "";
}

void Module_18019a5d0::onLoadConfig(void* conf) {
	// Binary function: func_0x180135130
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onLoadConfig(conf);
}

void Module_18019a5d0::onSaveConfig(void* conf) {
	// Binary function: func_0x180135c90
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onSaveConfig(conf);
}

