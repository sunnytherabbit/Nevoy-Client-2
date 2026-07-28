#include "Module_1802039a0.h"

Module_1802039a0::Module_1802039a0() : IModule(0, Category::COMBAT, "Module_1802039a0") {
	registerBoolSetting("Dynamic color", &dynamicColor, false);
}

const char* Module_1802039a0::getModuleName() { return "Module_1802039a0"; }
