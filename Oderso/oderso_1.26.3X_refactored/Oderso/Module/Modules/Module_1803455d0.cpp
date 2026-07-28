#include "Module_1803455d0.h"

Module_1803455d0::Module_1803455d0() : IModule(0, Category::CUSTOM, "Module_1803455d0") {
	registerBoolSetting("Disable", &disable, false);
	registerBoolSetting("No background", &noBackground, false);
}

const char* Module_1803455d0::getModuleName() { return "Module_1803455d0"; }
