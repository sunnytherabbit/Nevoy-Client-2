#include "Module_180243e70.h"

Module_180243e70::Module_180243e70() : IModule(0, Category::CUSTOM, "Module_180243e70") {
	registerBoolSetting("Hold", &hold, false);
}

const char* Module_180243e70::getModuleName() { return "Module_180243e70"; }
