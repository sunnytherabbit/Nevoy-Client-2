#include "Module_1802bea40.h"

Module_1802bea40::Module_1802bea40() : IModule(0, Category::CUSTOM, "Module_1802bea40") {
	registerBoolSetting("Rainbow", &rainbow, false);
}

const char* Module_1802bea40::getModuleName() { return "Module_1802bea40"; }
