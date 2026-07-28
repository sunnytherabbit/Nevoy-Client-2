#include "Module_1801a2840.h"

Module_1801a2840::Module_1801a2840() : IModule(0, Category::CUSTOM, "Module_1801a2840") {
	registerFloatSetting("Size", &size, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerBoolSetting("Interdimensional", &interdimensional, false);
	registerBoolSetting("Show Coordinates", &showCoordinates, false);
}

const char* Module_1801a2840::getModuleName() { return "Module_1801a2840"; }
