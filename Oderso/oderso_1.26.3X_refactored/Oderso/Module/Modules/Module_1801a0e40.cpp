#include "Module_1801a0e40.h"

Module_1801a0e40::Module_1801a0e40() : IModule(0, Category::CUSTOM, "Module_1801a0e40") {
	// No settings extracted yet
}

std::string Module_1801a0e40::getModuleName() { return "Module_1801a0e40"; }
std::string Module_1801a0e40::getTooltip() {
	// No manifest description
	return "";
}

void Module_1801a0e40::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_1801a0e40::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

