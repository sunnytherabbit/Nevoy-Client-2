#include "Module_1802c1ee0.h"

Module_1802c1ee0::Module_1802c1ee0() : IModule(0, Category::CUSTOM, "Module_1802c1ee0") {
	registerFloatSetting("Speed", &speed, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("Y mul", &yMul, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("Z mul", &zMul, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
}

const char* Module_1802c1ee0::getModuleName() { return "Module_1802c1ee0"; }
