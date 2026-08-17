#include "Module_1802ce320.h"

Module_1802ce320::Module_1802ce320() : IModule(0, Category::COMBAT, "Module_1802ce320") {
	// No settings extracted yet
}

std::string Module_1802ce320::getModuleName() {
	return "ModTextType";
}
std::string Module_1802ce320::getTooltip() {
	// Manifest tooltip
	return "Mod text type";
}

void Module_1802ce320::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_1802ce320::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

