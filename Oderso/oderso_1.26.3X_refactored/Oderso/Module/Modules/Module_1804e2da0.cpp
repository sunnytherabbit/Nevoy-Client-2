#include "Module_1804e2da0.h"

Module_1804e2da0::Module_1804e2da0() : IModule(0, Category::CUSTOM, "Sets the nickname for the Nick module") {
	// No settings extracted yet
}

std::string Module_1804e2da0::getModuleName() { return "Nick"; }

std::string Module_1804e2da0::getTooltip() {
	return "Sets the nickname for the Nick module";
}
