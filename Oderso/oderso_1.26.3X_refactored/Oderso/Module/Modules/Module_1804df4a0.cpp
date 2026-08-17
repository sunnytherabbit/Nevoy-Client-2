#include "Module_1804df4a0.h"

Module_1804df4a0::Module_1804df4a0() : IModule(0, Category::CUSTOM, "Show Hive game stats") {
	// No settings extracted yet
}

std::string Module_1804df4a0::getModuleName() { return "HiveStats"; }

std::string Module_1804df4a0::getTooltip() {
	return "Show Hive game stats";
}
