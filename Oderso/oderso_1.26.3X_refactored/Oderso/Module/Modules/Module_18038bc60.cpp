#include "Module_18038bc60.h"

Module_18038bc60::Module_18038bc60() : IModule(0, Category::CUSTOM, "Manage Waypoints") {
	// No settings extracted yet
}

std::string Module_18038bc60::getModuleName() { return "Waypoints"; }

std::string Module_18038bc60::getTooltip() {
	// Manifest tooltip
	return "Manage Waypointss";
}
