#include "Module_180341050.h"

Module_180341050::Module_180341050() : IModule(0, Category::COMBAT, "Module_180341050") {
	// No settings extracted yet
}

std::string Module_180341050::getModuleName() { return "Module_180341050"; }
std::string Module_180341050::getTooltip() { 
	// Binary function: func_0x180342ac0
	return "";
}

void Module_180341050::onLoadConfig(void* conf) {
	// Binary function: func_0x180135130
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onLoadConfig(conf);
}

void Module_180341050::onSaveConfig(void* conf) {
	// Binary function: func_0x180135c90
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onSaveConfig(conf);
}

