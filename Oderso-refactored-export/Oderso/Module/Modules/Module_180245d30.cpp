#include "Module_180245d30.h"

Module_180245d30::Module_180245d30() : IModule(0, Category::CUSTOM, "Module_180245d30") {
	registerBoolSetting("Rainbow", &rainbow, false);
}

const char* Module_180245d30::getModuleName() { return "Module_180245d30"; }
