#include "Limits.h"

Limits::Limits() : IModule(0, Category::CUSTOM, "Limits C") {
	registerIntSetting("Limit le", &limitLe, 132, 1, 1000);
	registerBoolSetting("Limit right", &limitRight, false);
}

std::string Limits::getModuleName() { return "Limits C"; }
std::string Limits::getTooltip() { 
	// Binary function: func_0x1802f4c40
	return "Limits C";
}

void Limits::onEnable() {
	// Binary function: func_0x1802f4dd0
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x90) = 0;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x98) = 0;
}

