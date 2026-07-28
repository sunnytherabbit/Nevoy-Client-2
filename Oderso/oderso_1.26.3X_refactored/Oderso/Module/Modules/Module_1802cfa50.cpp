#include "Module_1802cfa50.h"

Module_1802cfa50::Module_1802cfa50() : IModule(0, Category::CUSTOM, "Module_1802cfa50") {
	registerIntSetting("Radius", &radius, 0, 0, 1);  // TODO: defaults/min/max
	registerBoolSetting("Lit color", &litColor, false);
	registerBoolSetting("Show light level", &showLightLevel, false);
}

const char* Module_1802cfa50::getModuleName() { return "Module_1802cfa50"; }
