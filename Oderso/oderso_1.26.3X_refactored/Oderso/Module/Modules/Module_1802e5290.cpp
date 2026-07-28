#include "Module_1802e5290.h"

Module_1802e5290::Module_1802e5290() : IModule(0, Category::CUSTOM, "Module_1802e5290") {
	registerFloatSetting("Scale", &scale, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
}

const char* Module_1802e5290::getModuleName() { return "Module_1802e5290"; }
