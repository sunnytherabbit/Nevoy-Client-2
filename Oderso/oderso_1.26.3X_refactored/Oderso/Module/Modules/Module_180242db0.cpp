#include "Module_180242db0.h"

Module_180242db0::Module_180242db0() : IModule(0, Category::CUSTOM, "Module_180242db0") {
	registerBoolSetting("Rainbow", &rainbow, false);
}

std::string Module_180242db0::getModuleName() {
	return "RainbowFog";
}
std::string Module_180242db0::getTooltip() {
	// Manifest tooltip
	return "Rainbow fog";
}

