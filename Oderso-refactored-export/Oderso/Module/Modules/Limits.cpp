#include "Limits.h"

Limits::Limits() : IModule(0, Category::CUSTOM, "Limits C") {
	registerIntSetting("Limit le", &limitLe, 0, 0, 1);  // TODO: defaults/min/max
	registerBoolSetting("Limit right", &limitRight, false);
}

const char* Limits::getModuleName() { return "Limits C"; }
