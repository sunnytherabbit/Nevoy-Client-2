#include "Module_1801e7620.h"

Module_1801e7620::Module_1801e7620() : IModule(0, Category::CUSTOM, "Module_1801e7620") {
	registerBoolSetting("Entities", &entities, false);
	registerBoolSetting("Items", &items, false);
	registerBoolSetting("uUM", &uUM, false);
	registerBoolSetting("HUD", &hUD, false);
	registerBoolSetting("Particles", &particles, false);
	registerBoolSetting("Sky", &sky, false);
	registerBoolSetting("Weather", &weather, false);
	registerBoolSetting("PortalOverlay", &portalOverlay, false);
	registerBoolSetting("Fire", &fire, false);
	registerBoolSetting("Lightning", &lightning, false);
}

const char* Module_1801e7620::getModuleName() { return "Module_1801e7620"; }
