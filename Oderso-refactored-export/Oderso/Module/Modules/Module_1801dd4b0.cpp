#include "Module_1801dd4b0.h"

Module_1801dd4b0::Module_1801dd4b0() : IModule(0, Category::CUSTOM, "Module_1801dd4b0") {
	registerBoolSetting("Third person", &thirdPerson, false);
	registerBoolSetting("sE", &sE, false);
	registerFloatSetting("Adjust Y offset", &adjustYOffset, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerBoolSetting("No background", &noBackground, false);
}

const char* Module_1801dd4b0::getModuleName() { return "Module_1801dd4b0"; }
