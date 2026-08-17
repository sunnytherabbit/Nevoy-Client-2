#include "Module_1804ce890.h"

Module_1804ce890::Module_1804ce890() : IModule(0, Category::CUSTOM, "Clears the chat, client-side only") {
	// No settings extracted yet
}

std::string Module_1804ce890::getModuleName() { return "ClearChat"; }

std::string Module_1804ce890::getTooltip() {
	return "Clears the chat, client-side only";
}
