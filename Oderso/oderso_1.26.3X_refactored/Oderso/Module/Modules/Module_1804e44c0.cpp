#include "Module_1804e44c0.h"

Module_1804e44c0::Module_1804e44c0() : IModule(0, Category::CUSTOM, "Creates a panorama at the current location") {
	// No settings extracted yet
}

std::string Module_1804e44c0::getModuleName() { return "Panorama"; }

std::string Module_1804e44c0::getTooltip() {
	return "Creates a panorama at the current location";
}
