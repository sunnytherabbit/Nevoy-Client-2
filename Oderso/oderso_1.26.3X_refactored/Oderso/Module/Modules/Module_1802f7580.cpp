#include "Module_1802f7580.h"

Module_1802f7580::Module_1802f7580() : IModule(0, Category::CUSTOM, "Module_1802f7580") {
	registerBoolSetting("Show grid", &showGrid, false);
}

const char* Module_1802f7580::getModuleName() { return "Module_1802f7580"; }
