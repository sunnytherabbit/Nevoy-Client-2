#include "Module_180219990.h"

Module_180219990::Module_180219990() : IModule(0, Category::CUSTOM, "Module_180219990") {
	registerFloatSetting("Size", &size, 1.f, 0.5f, 2.f);
}

std::string Module_180219990::getModuleName() {
	return "NameLevel";
}
std::string Module_180219990::getTooltip() {
	// Manifest tooltip
	return "Name & Level";
}

void Module_180219990::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_180219990::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

