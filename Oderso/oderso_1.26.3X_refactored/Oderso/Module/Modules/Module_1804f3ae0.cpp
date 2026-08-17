#include "Module_1804f3ae0.h"

Module_1804f3ae0::Module_1804f3ae0() : IModule(0, Category::CUSTOM, "Shows information about the server you're playing on") {
	// No settings extracted yet
}

std::string Module_1804f3ae0::getModuleName() { return "ServerInfo"; }

std::string Module_1804f3ae0::getTooltip() {
	return "Shows information about the server you're playing on";
}
