#include "Module_180219990.h"

Module_180219990::Module_180219990() : IModule(0, Category::CUSTOM, "Module_180219990") {
	registerFloatSetting("Size", &size, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
}

const char* Module_180219990::getModuleName() { return "Module_180219990"; }
