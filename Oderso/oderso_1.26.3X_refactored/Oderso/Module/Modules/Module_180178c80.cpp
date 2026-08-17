#include "Module_180178c80.h"

Module_180178c80::Module_180178c80() : IModule(0, Category::CUSTOM, "Module_180178c80") {
	registerFloatSetting("uUM", &uUM, 0.f, 0.f, 1.f);
	registerFloatSetting("sE", &sE, 0.f, 0.f, 1.f);
	registerFloatSetting("Multiplier LS X", &multiplierLsX, 1.f, 0.5f, 3.f);
	registerFloatSetting("Multiplier LS Y", &multiplierLsY, 1.f, 0.5f, 3.f);
	registerFloatSetting("Multiplier RS X", &multiplierRsX, 1.f, 0.5f, 3.f);
}

std::string Module_180178c80::getModuleName() { return "Module_180178c80"; }
std::string Module_180178c80::getTooltip() {
	// No manifest description
	return "";
}

