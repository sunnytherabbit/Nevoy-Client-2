#include "Module_1804d6b70.h"

Module_1804d6b70::Module_1804d6b70() : IModule(0, Category::CUSTOM, "Prints your coordinates") {
	// No settings extracted yet
}

std::string Module_1804d6b70::getModuleName() { return "Coords"; }

std::string Module_1804d6b70::getTooltip() {
	// Manifest tooltip
	return "Prints your coordinates";
}
