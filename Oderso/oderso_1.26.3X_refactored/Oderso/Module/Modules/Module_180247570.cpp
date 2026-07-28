#include "Module_180247570.h"

Module_180247570::Module_180247570() : IModule(0, Category::CUSTOM, "Module_180247570") {
	registerFloatSetting("Scale", &scale, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
}

const char* Module_180247570::getModuleName() { return "Module_180247570"; }
