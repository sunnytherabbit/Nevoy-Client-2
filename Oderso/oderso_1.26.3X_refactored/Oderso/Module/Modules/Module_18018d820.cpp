#include "Module_18018d820.h"

Module_18018d820::Module_18018d820() : IModule(0, Category::CUSTOM, "Module_18018d820") {
	registerIntSetting("sE", &sE, 0, 0, 1);  // TODO: defaults/min/max
}

const char* Module_18018d820::getModuleName() { return "Module_18018d820"; }
