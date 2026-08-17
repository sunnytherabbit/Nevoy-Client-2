#include "Module_1804e7c10.h"

Module_1804e7c10::Module_1804e7c10() : IModule(0, Category::CUSTOM, "Command to change schematic data for the Schematic module") {
	// No settings extracted yet
}

std::string Module_1804e7c10::getModuleName() { return "Schematic"; }

std::string Module_1804e7c10::getTooltip() {
	return "Command to change schematic data for the Schematic module";
}
