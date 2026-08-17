#include "Module_180415790.h"

Module_180415790::Module_180415790() : IModule(0, Category::COMBAT, "Module_180415790") {
	// No settings extracted yet
}

std::string Module_180415790::getModuleName() { return "Module_180415790"; }
std::string Module_180415790::getTooltip() { 
	// Binary function: func_0x180415b40
	return "";
}

void Module_180415790::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_180415790::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

