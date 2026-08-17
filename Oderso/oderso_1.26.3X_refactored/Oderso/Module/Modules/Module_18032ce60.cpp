#include "Module_18032ce60.h"

Module_18032ce60::Module_18032ce60() : IModule(0, Category::COMBAT, "Module_18032ce60") {
	registerBoolSetting("Show X", &showX, false);
	registerBoolSetting("Show Y", &showY, false);
	registerBoolSetting("Show Z", &showZ, false);
	separator = SettingEnum(this)
		.addEntry(EnumEntry(",", 0))
		.addEntry(EnumEntry(";", 1))
		.addEntry(EnumEntry(":", 2));
	registerEnumSetting("Separator", &separator, 0);
	registerBoolSetting("Decimal", &decimal, false);
}

std::string Module_18032ce60::getModuleName() { return "Module_18032ce60"; }
std::string Module_18032ce60::getTooltip() { 
	// Binary function: func_0x180330240
	return "";
}

void Module_18032ce60::onLoadConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onLoadConfig(conf);
}

void Module_18032ce60::onSaveConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onSaveConfig(conf);
}

