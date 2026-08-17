// MANUAL
#include "FPS.h"

#include "../../../Horion/DrawUtils.h"
#include "../../../Memory/GameData.h"

FPS::FPS() : IModule(0, Category::VISUAL, "Displays your current FPS.") {
	// No settings extracted yet
}

std::string FPS::getModuleName() { return "FPS"; }
std::string FPS::getTooltip() { 
	// Binary function: func_0x1802416c0
	return "Displays your current FPS.";
}

void FPS::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void FPS::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

