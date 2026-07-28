#include "Module_180130570.h"

Module_180130570::Module_180130570() : IModule(0, Category::CUSTOM, "Module_180130570") {
	registerIntSetting("Change amount", &changeAmount, 0, 0, 1);  // TODO: defaults/min/max
}

const char* Module_180130570::getModuleName() { return "Module_180130570"; }
