#include "Module_1801afdc0.h"

Module_1801afdc0::Module_1801afdc0() : IModule(0, Category::CUSTOM, "Module_1801afdc0") {
	weather.addEntry(EnumEntry("Default", 0));
	registerEnumSetting("Weather", &weather, 0);

	// No settings extracted yet
}

std::string Module_1801afdc0::getModuleName() { return "Module_1801afdc0"; }
std::string Module_1801afdc0::getTooltip() {
	// No manifest description
	return "";
}

