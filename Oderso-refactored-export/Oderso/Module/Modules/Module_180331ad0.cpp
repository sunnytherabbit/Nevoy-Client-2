#include "Module_180331ad0.h"

Module_180331ad0::Module_180331ad0() : IModule(0, Category::CUSTOM, "Module_180331ad0") {
	registerBoolSetting("crosshair.png", &crosshairPng, false);
	registerBoolSetting("Custom crosshair", &customCrosshair, false);
	registerBoolSetting("Custom color", &customColor, false);
	registerBoolSetting("Hit help", &hitHelp, false);
}

const char* Module_180331ad0::getModuleName() { return "Module_180331ad0"; }
