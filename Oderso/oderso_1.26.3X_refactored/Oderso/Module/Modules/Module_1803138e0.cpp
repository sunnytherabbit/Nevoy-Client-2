#include "Module_1803138e0.h"

Module_1803138e0::Module_1803138e0() : IModule(0, Category::COMBAT, "Module_1803138e0") {
	registerBoolSetting("Seconds", &seconds, false);
	registerBoolSetting("Date", &date, false);
	registerBoolSetting("Full year", &fullYear, false);
}

std::string Module_1803138e0::getModuleName() { return "Module_1803138e0"; }
std::string Module_1803138e0::getTooltip() { 
	// Binary function: func_0x1803174d0
	return "";
}

void Module_1803138e0::onLoadConfig(void* conf) {
	// Binary function: func_0x180135130
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onLoadConfig(conf);
}

void Module_1803138e0::onSaveConfig(void* conf) {
	// Binary function: func_0x180135c90
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onSaveConfig(conf);
}

