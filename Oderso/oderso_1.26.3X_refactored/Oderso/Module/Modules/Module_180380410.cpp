#include "Module_180380410.h"

Module_180380410::Module_180380410() : IModule(0, Category::CUSTOM, "Set the prefix for client commands") {
	// No settings extracted yet
}

std::string Module_180380410::getModuleName() { return "SetPrefix"; }

std::string Module_180380410::getTooltip() {
	return "Set the prefix for client commands";
}
