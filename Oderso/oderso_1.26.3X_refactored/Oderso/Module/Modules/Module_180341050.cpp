#include "Module_180341050.h"

Module_180341050::Module_180341050() : IModule(0, Category::COMBAT, "Module_180341050") {
	// No settings extracted yet
}

std::string Module_180341050::getModuleName() {
	return "ModTextType";
}
std::string Module_180341050::getTooltip() {
	// Manifest tooltip
	return "Mod text type";
}

void Module_180341050::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_180341050::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

