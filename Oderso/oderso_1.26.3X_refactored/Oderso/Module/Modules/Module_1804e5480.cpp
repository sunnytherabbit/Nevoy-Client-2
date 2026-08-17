#include "Module_1804e5480.h"

Module_1804e5480::Module_1804e5480() : IModule(0, Category::CUSTOM, "Gives you basic information of each player on the server") {
	// No settings extracted yet
}

std::string Module_1804e5480::getModuleName() { return "PlayerInfo"; }

std::string Module_1804e5480::getTooltip() {
	return "Gives you basic information of each player on the server";
}
