#include "Module_180223cc0.h"

Module_180223cc0::Module_180223cc0() : IModule(0, Category::CUSTOM, "Module_180223cc0") {
	registerBoolSetting("Visible", &visible, false);
	registerBoolSetting("Crosshair", &crosshair, false);
	registerEnumSetting("Sky, BloT", &skyBlot, 0);  // TODO: add entries
	registerBoolSetting("Backgrou", &backgrou, false);
	registerEnumSetting("Font", &font, 0);  // TODO: add entries
	registerBoolSetting("Shadow", &shadow, false);
	registerBoolSetting("Rainbow text", &rainbowText, false);
	registerBoolSetting("Version", &version, false);
	registerBoolSetting("FPS", &fPS, false);
	registerBoolSetting("World", &world, false);
	registerBoolSetting("Server", &server, false);
	registerBoolSetting("Ping", &ping, false);
	registerBoolSetting("Player", &player, false);
	registerBoolSetting("Item", &item, false);
	registerBoolSetting("Hardware", &hardware, false);
}

const char* Module_180223cc0::getModuleName() { return "Module_180223cc0"; }
