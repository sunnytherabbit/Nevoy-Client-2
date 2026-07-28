#include "Module_1803138e0.h"

Module_1803138e0::Module_1803138e0() : IModule(0, Category::COMBAT, "Module_1803138e0") {
	registerBoolSetting("Seconds", &seconds, false);
	registerBoolSetting("Date", &date, false);
	registerBoolSetting("Full year", &fullYear, false);
}

const char* Module_1803138e0::getModuleName() { return "Module_1803138e0"; }
