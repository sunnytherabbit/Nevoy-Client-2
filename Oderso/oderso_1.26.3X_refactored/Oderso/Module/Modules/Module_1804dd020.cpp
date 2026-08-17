#include "Module_1804dd020.h"

Module_1804dd020::Module_1804dd020() : IModule(0, Category::CUSTOM, "Ejects from the server") {
	// No settings extracted yet
}

std::string Module_1804dd020::getModuleName() { return "Eject"; }

std::string Module_1804dd020::getTooltip() {
	return "Ejects from the server";
}
