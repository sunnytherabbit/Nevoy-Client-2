#include "Module_1804d8520.h"

Module_1804d8520::Module_1804d8520() : IModule(0, Category::CUSTOM, "Automatically dodge attacks from players") {
	// No settings extracted yet
}

std::string Module_1804d8520::getModuleName() { return "Dodge"; }

std::string Module_1804d8520::getTooltip() {
	// Constructor tooltip fallback
	return "Automatically dodge attacks from players";
}
