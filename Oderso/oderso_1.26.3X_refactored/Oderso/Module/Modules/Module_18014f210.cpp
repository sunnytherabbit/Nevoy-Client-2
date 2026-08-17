#include "Module_18014f210.h"

Module_18014f210::Module_18014f210() : IModule(0, Category::COMBAT, "Module_18014f210") {
	// No settings extracted yet
}

std::string Module_18014f210::getModuleName() { return "Module_18014f210"; }
std::string Module_18014f210::getTooltip() { 
	// Binary function: func_0x180154e90
	return "";
}

void Module_18014f210::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_18014f210::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

