#include "Module_1802f4ea0.h"

Module_1802f4ea0::Module_1802f4ea0() : IModule(0, Category::CUSTOM, "Module_1802f4ea0") {
	registerBoolSetting("Disable", &disable, false);
	registerBoolSetting("No background", &noBackground, false);
}

const char* Module_1802f4ea0::getModuleName() { return "Module_1802f4ea0"; }
