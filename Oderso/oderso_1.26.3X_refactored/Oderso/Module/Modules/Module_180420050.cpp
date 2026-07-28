#include "Module_180420050.h"

Module_180420050::Module_180420050() : IModule(0, Category::CUSTOM, "Module_180420050") {
	registerFloatSetting("Outline opacity", &outlineOpacity, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
}

const char* Module_180420050::getModuleName() { return "Module_180420050"; }
