#include "Module_18031b4d0.h"

Module_18031b4d0::Module_18031b4d0() : IModule(0, Category::CUSTOM, "Module_18031b4d0") {
	registerBoolSetting("Disable", &disable, false);
	registerFloatSetting("Color", &color, 1.f, 0.f, 1.f);
	registerBoolSetting("Change height", &changeHeight, false);
}

std::string Module_18031b4d0::getModuleName() { return "Module_18031b4d0"; }
std::string Module_18031b4d0::getTooltip() { 
	// Binary function: func_0x18031dde0
	return "";
}

