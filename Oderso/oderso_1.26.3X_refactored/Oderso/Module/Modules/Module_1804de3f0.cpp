#include "Module_1804de3f0.h"

Module_1804de3f0::Module_1804de3f0() : IModule(0, Category::CUSTOM, "Lists all commands") {
	// No settings extracted yet
}

std::string Module_1804de3f0::getModuleName() { return "Help"; }

std::string Module_1804de3f0::getTooltip() {
	// Constructor tooltip fallback
	return "Lists all commands";
}
