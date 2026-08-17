// MANUAL
#include "OdersoCompass.h"

#include "../../../Horion/DrawUtils.h"
#include "../../../Memory/GameData.h"
#include <cmath>

OdersoCompass::OdersoCompass() : IModule(0, Category::VISUAL, "Displays a compass.") {
	registerIntSetting("Color", &color, 45, 45, 180);

	registerFloatSetting("Size", &size, 1.f, 0.1f, 3.f);
}

std::string OdersoCompass::getModuleName() { return "Compass"; }
std::string OdersoCompass::getTooltip() { 
	// Binary function: func_0x180320c20
	return "Displays a compass.";
}

void OdersoCompass::onLoadConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onLoadConfig(conf);
}

void OdersoCompass::onSaveConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onSaveConfig(conf);
}

