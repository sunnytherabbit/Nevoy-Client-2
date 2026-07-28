#include "Module_1802c0340.h"

Module_1802c0340::Module_1802c0340() : IModule(0, Category::CUSTOM, "Module_1802c0340") {
	registerBoolSetting("Disable", &disable, false);
	registerFloatSetting("Multipli", &multipli, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
}

const char* Module_1802c0340::getModuleName() { return "Module_1802c0340"; }
