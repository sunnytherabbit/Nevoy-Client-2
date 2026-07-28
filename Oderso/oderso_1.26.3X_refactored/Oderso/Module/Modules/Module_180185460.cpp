#include "Module_180185460.h"

Module_180185460::Module_180185460() : IModule(0, Category::CUSTOM, "Module_180185460") {
	registerFloatSetting("Swing speed", &swingSpeed, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
}

const char* Module_180185460::getModuleName() { return "Module_180185460"; }
