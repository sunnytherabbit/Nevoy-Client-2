#include "Module_1802079f0.h"

Module_1802079f0::Module_1802079f0() : IModule(0, Category::CUSTOM, "Module_1802079f0") {
	registerBoolSetting("Disable", &disable, false);
	registerBoolSetting("No background", &noBackground, false);
}

const char* Module_1802079f0::getModuleName() { return "Module_1802079f0"; }
