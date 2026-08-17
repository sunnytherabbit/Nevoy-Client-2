#include "Module_1802039a0.h"

Module_1802039a0::Module_1802039a0() : IModule(0, Category::COMBAT, "Module_1802039a0") {
	registerBoolSetting("Dynamic color", &dynamicColor, false);
}

std::string Module_1802039a0::getModuleName() { return "Module_1802039a0"; }
std::string Module_1802039a0::getTooltip() { 
	// Binary function: func_0x180205a30
	return "";
}

void Module_1802039a0::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_1802039a0::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

