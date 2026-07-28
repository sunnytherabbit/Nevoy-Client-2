#include "Module_180360610.h"

Module_180360610::Module_180360610() : IModule(0, Category::CUSTOM, "Module_180360610") {
	registerIntSetting("Block radius", &blockRadius, 0, 0, 1);  // TODO: defaults/min/max
}

const char* Module_180360610::getModuleName() { return "Module_180360610"; }
