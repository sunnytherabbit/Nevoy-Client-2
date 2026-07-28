#include "Module_18017c4a0.h"

Module_18017c4a0::Module_18017c4a0() : IModule(0, Category::COMBAT, "Module_18017c4a0") {
	registerBoolSetting("Stop on event", &stopOnEvent, false);
}

const char* Module_18017c4a0::getModuleName() { return "Module_18017c4a0"; }
