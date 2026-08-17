#include "Module_18014f210.h"

Module_18014f210::Module_18014f210() : IModule(0, Category::COMBAT, "Module_18014f210") {
	// No settings extracted yet
}

std::string Module_18014f210::getModuleName() {
	return "ModTextType";
}
std::string Module_18014f210::getTooltip() {
	// Manifest tooltip
	return "Mod text type";
}

void Module_18014f210::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_18014f210::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

