#include "Module_1804f24e0.h"

Module_1804f24e0::Module_1804f24e0() : IModule(0, Category::CUSTOM, "Shows you the seed of the world") {
	// No settings extracted yet
}

std::string Module_1804f24e0::getModuleName() { return "Seed"; }

std::string Module_1804f24e0::getTooltip() {
	// Manifest tooltip
	return "Shows you the seed of the world";
}
