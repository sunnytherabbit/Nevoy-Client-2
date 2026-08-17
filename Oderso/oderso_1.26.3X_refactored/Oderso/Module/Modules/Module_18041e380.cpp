#include "Module_18041e380.h"

Module_18041e380::Module_18041e380() : IModule(0, Category::COMBAT, "Module_18041e380") {
	// No settings extracted yet
}

std::string Module_18041e380::getModuleName() { return "Module_18041e380"; }
std::string Module_18041e380::getTooltip() { 
	// Binary function: func_0x18041f170
	return "";
}

void Module_18041e380::onLoadConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onLoadConfig(conf);
}

void Module_18041e380::onSaveConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onSaveConfig(conf);
}

