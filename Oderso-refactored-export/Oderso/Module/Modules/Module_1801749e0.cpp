#include "Module_1801749e0.h"

Module_1801749e0::Module_1801749e0() : IModule(0, Category::CUSTOM, "Module_1801749e0") {
	registerIntSetting("Radius", &radius, 0, 0, 1);  // TODO: defaults/min/max
	registerBoolSetting("Fixed height", &fixedHeight, false);
	registerFloatSetting("Y positib", &yPositib, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
}

const char* Module_1801749e0::getModuleName() { return "Module_1801749e0"; }
