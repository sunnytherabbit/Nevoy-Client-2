#include "Module_18019a5d0.h"

Module_18019a5d0::Module_18019a5d0() : IModule(0, Category::CUSTOM, "Module_18019a5d0") {
	registerFloatSetting("Size", &size, 2.f, 0.5f, 2.f);
	registerBoolSetting("Simple names", &simpleNames, false);
	registerBoolSetting("Show nametag", &showNametag, false);
}

std::string Module_18019a5d0::getModuleName() {
	return "SimpleNames";
}
std::string Module_18019a5d0::getTooltip() {
	// Manifest tooltip
	return "Simple names";
}

void Module_18019a5d0::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_18019a5d0::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

