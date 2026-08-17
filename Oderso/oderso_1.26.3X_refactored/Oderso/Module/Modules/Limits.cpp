#include "Limits.h"

Limits::Limits() : IModule(0, Category::CUSTOM, "Limits C") {
	registerIntSetting("Limit le", &limitLe, 132, 1, 1000);
	registerBoolSetting("Limit right", &limitRight, false);
}

std::string Limits::getModuleName() { return "Limits C"; }
std::string Limits::getTooltip() {
	return "Limits C";
}

void Limits::onEnable() {
	// Ported from func_0x1802f4dd0: clear the two 8-byte state counters.
	field_0x90 = 0;
	field_0x98 = 0;
}

