#include "Module_180417c20.h"

Module_180417c20::Module_180417c20() : IModule(0, Category::CUSTOM, "Module_180417c20") {
	hotbarTooltips = SettingEnum(this)
		.addEntry(EnumEntry("Off", 0))
		.addEntry(EnumEntry("On", 1))
		.addEntry(EnumEntry("Always", 2));
	registerEnumSetting("Hotbar tooltips", &hotbarTooltips, 0);
}

std::string Module_180417c20::getModuleName() { return "Module_180417c20"; }
std::string Module_180417c20::getTooltip() {
	// No manifest description
	return "";
}

