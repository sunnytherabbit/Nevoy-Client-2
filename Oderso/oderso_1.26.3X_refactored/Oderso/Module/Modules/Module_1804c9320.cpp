#include "Module_1804c9320.h"

Module_1804c9320::Module_1804c9320() : IModule(0, Category::CUSTOM, "Bind a key to a module") {
	// No settings extracted yet
}

std::string Module_1804c9320::getModuleName() { return "Bind"; }

std::string Module_1804c9320::getTooltip() {
	// Manifest tooltip
	return "Bind a key to a module";
}
