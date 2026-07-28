#include "Module_18019a5d0.h"

Module_18019a5d0::Module_18019a5d0() : IModule(0, Category::CUSTOM, "Module_18019a5d0") {
	registerFloatSetting("Size", &size, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerBoolSetting("Simple names", &simpleNames, false);
	registerBoolSetting("Show nametag", &showNametag, false);
}

const char* Module_18019a5d0::getModuleName() { return "Module_18019a5d0"; }
