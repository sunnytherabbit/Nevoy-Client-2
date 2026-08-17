#include "Module_180388cf0.h"

Module_180388cf0::Module_180388cf0() : IModule(0, Category::CUSTOM, "Unbinds a key from a module") {
	// No settings extracted yet
}

std::string Module_180388cf0::getModuleName() { return "Unbind"; }

std::string Module_180388cf0::getTooltip() {
	return "Unbinds a key from a module";
}
