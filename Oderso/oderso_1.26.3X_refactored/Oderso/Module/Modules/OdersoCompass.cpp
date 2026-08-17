// MANUAL
#include "OdersoCompass.h"

#include "../../../Horion/DrawUtils.h"
#include "../../../Memory/GameData.h"
#include <cmath>

OdersoCompass::OdersoCompass() : IModule(0, Category::VISUAL, "Displays a compass.") {
	registerFloatSetting("Size", &size, 1.f, 0.1f, 3.f);
}

std::string OdersoCompass::getModuleName() { return "Compass"; }
std::string OdersoCompass::getTooltip() { 
	// Binary function: func_0x180320c20
	return "Displays a compass.";
}

void OdersoCompass::onLoadConfig(void* conf) {
	// Binary function: func_0x180135130
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onLoadConfig(conf);
}

void OdersoCompass::onSaveConfig(void* conf) {
	// Binary function: func_0x180135c90
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onSaveConfig(conf);
}

