#include "Module_1801914f0.h"

Module_1801914f0::Module_1801914f0() : IModule(0, Category::VISUAL, "Module_1801914f0") {
	registerBoolSetting("Always sprint", &alwaysSprint, false);
}

const char* Module_1801914f0::getModuleName() { return "Module_1801914f0"; }
