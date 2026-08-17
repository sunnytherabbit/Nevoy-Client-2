#include "Module_1804e6e10.h"

Module_1804e6e10::Module_1804e6e10() : IModule(0, Category::CUSTOM, "Sends a chat message") {
	// No settings extracted yet
}

std::string Module_1804e6e10::getModuleName() { return "Say"; }

std::string Module_1804e6e10::getTooltip() {
	return "Sends a chat message";
}
