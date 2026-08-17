// MANUAL
#include "CPS.h"

#include "../../../Horion/DrawUtils.h"
#include "../../../Memory/GameData.h"

CPS::CPS() : IModule(0, Category::VISUAL, "Displays your clicks per second.") {
	// No settings extracted yet
}

std::string CPS::getModuleName() { return "CPS"; }
std::string CPS::getTooltip() { 
	// Binary function: func_0x1802f2510
	return "Displays your clicks per second.";
}

void CPS::onLoadConfig(void* conf) {
	// Binary function: func_0x180135130
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onLoadConfig(conf);
}

void CPS::onSaveConfig(void* conf) {
	// Binary function: func_0x180135c90
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onSaveConfig(conf);
}

