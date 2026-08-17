#include "Module_1801edba0.h"

Module_1801edba0::Module_1801edba0() : IModule(0, Category::CUSTOM, "Module_1801edba0") {
	registerBoolSetting("Shadow", &shadow, false);
	registerBoolSetting("Rainbow text", &rainbowText, false);
}

std::string Module_1801edba0::getModuleName() { return "Module_1801edba0"; }
std::string Module_1801edba0::getTooltip() { 
	// Binary function: func_0x1801f0980
	return "";
}

