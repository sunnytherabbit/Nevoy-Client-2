#include "Module_1801f8fc0.h"

Module_1801f8fc0::Module_1801f8fc0() : IModule(0, Category::CUSTOM, "Module_1801f8fc0") {
	registerBoolSetting("Disable", &disable, false);
	registerBoolSetting("Always show", &alwaysShow, false);
	registerFloatSetting("Scale", &scale, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
}

const char* Module_1801f8fc0::getModuleName() { return "Module_1801f8fc0"; }
