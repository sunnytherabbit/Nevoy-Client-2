#include "Module_1802ce320.h"

Module_1802ce320::Module_1802ce320() : IModule(0, Category::COMBAT, "Module_1802ce320") {
	// No settings extracted yet
}

std::string Module_1802ce320::getModuleName() { return "Module_1802ce320"; }
std::string Module_1802ce320::getTooltip() { 
	// Binary function: func_0x1802cec70
	return "";
}

void Module_1802ce320::onLoadConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onLoadConfig(conf);
}

void Module_1802ce320::onSaveConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onSaveConfig(conf);
}

