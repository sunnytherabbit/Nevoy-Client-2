#include "Module_180178c80.h"

Module_180178c80::Module_180178c80() : IModule(0, Category::CUSTOM, "Module_180178c80") {
	registerFloatSetting("uUM", &uUM, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("sE", &sE, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("Multiplier LS X", &multiplierLsX, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("Multiplier LS Y", &multiplierLsY, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("Multiplier RS X", &multiplierRsX, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
}

const char* Module_180178c80::getModuleName() { return "Module_180178c80"; }
