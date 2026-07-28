#include "Module_1801fc680.h"

Module_1801fc680::Module_1801fc680() : IModule(0, Category::CUSTOM, "Module_1801fc680") {
	registerFloatSetting("Size", &size, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerBoolSetting("Shadow", &shadow, false);
	registerBoolSetting("Rainbow text", &rainbowText, false);
	registerBoolSetting("Simple names", &simpleNames, false);
	registerBoolSetting("Show item", &showItem, false);
}

const char* Module_1801fc680::getModuleName() { return "Module_1801fc680"; }
