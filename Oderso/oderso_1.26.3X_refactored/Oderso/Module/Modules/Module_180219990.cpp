#include "Module_180219990.h"

Module_180219990::Module_180219990() : IModule(0, Category::CUSTOM, "Module_180219990") {
	registerFloatSetting("Size", &size, 1.f, 0.5f, 2.f);
}

std::string Module_180219990::getModuleName() { return "Module_180219990"; }
std::string Module_180219990::getTooltip() { 
	// Binary function: func_0x18021aee0
	return "";
}

void Module_180219990::onLoadConfig(void* conf) {
	// Binary function: func_0x180135130
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onLoadConfig(conf);
}

void Module_180219990::onSaveConfig(void* conf) {
	// Binary function: func_0x180135c90
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onSaveConfig(conf);
}

