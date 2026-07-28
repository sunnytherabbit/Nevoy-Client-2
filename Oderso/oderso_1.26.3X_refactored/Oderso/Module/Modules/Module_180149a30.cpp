#include "Module_180149a30.h"

Module_180149a30::Module_180149a30() : IModule(0, Category::CUSTOM, "Module_180149a30") {
	registerBoolSetting("Disable", &disable, false);
	registerBoolSetting("No background", &noBackground, false);
	registerBoolSetting("No numbe", &noNumbe, false);
}

const char* Module_180149a30::getModuleName() { return "Module_180149a30"; }
