#include "Module_180376860.h"

Module_180376860::Module_180376860() : IModule(0, Category::CUSTOM, "Sets the hit sound audio file path for CustomHitsound") {
	// No settings extracted yet
}

std::string Module_180376860::getModuleName() { return "CustomHitsound"; }

std::string Module_180376860::getTooltip() {
	// Manifest tooltip
	return "Sets the hit sound audio file path for CustomHu";
}
