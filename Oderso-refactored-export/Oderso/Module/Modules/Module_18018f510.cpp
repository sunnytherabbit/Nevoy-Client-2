#include "Module_18018f510.h"

Module_18018f510::Module_18018f510() : IModule(0, Category::VISUAL, "Module_18018f510") {
	registerBoolSetting("Always sneak", &alwaysSneak, false);
}

const char* Module_18018f510::getModuleName() { return "Module_18018f510"; }
