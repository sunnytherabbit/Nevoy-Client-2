#include "Module_180404ac0.h"

Module_180404ac0::Module_180404ac0() : IModule(0, Category::CUSTOM, "Module_180404ac0") {
	// No settings extracted yet
}

std::string Module_180404ac0::getModuleName() { return "Module_180404ac0"; }
std::string Module_180404ac0::getTooltip() {
	// No manifest description
	return "";
}

void Module_180404ac0::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_180404ac0::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

