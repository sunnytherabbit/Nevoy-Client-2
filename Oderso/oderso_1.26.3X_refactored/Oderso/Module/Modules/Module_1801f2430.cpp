#include "Module_1801f2430.h"

Module_1801f2430::Module_1801f2430() : IModule(0, Category::CUSTOM, "Module_1801f2430") {
	registerFloatSetting("No background", &noBackground, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerBoolSetting("Switch pack", &switchPack, false);
}

const char* Module_1801f2430::getModuleName() { return "Module_1801f2430"; }
