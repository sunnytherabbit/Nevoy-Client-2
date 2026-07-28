#include "Module_18031b4d0.h"

Module_18031b4d0::Module_18031b4d0() : IModule(0, Category::CUSTOM, "Module_18031b4d0") {
	registerBoolSetting("Disable", &disable, false);
	registerFloatSetting("Color", &color, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerBoolSetting("Change height", &changeHeight, false);
}

const char* Module_18031b4d0::getModuleName() { return "Module_18031b4d0"; }
