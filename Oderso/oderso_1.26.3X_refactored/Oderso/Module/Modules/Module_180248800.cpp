#include "Module_180248800.h"

Module_180248800::Module_180248800() : IModule(0, Category::CUSTOM, "Module_180248800") {
	registerIntSetting("Health", &health, 0, 0, 1);  // TODO: defaults/min/max
	registerBoolSetting("Fade col", &fadeCol, false);
}

const char* Module_180248800::getModuleName() { return "Module_180248800"; }
