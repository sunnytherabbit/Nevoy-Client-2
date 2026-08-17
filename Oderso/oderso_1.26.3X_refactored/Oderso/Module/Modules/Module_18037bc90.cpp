#include "Module_18037bc90.h"

Module_18037bc90::Module_18037bc90() : IModule(0, Category::CUSTOM, "Sets the overlay image file for the BlockOverlay module") {
	// No settings extracted yet
}

std::string Module_18037bc90::getModuleName() { return "BlockOverlay"; }

std::string Module_18037bc90::getTooltip() {
	// Manifest tooltip
	return "Sets the overlay image file for the BlockOverlay";
}
