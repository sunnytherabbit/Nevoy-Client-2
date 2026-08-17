#include "Module_180223cc0.h"

Module_180223cc0::Module_180223cc0() : IModule(0, Category::CUSTOM, "Module_180223cc0") {
	registerBoolSetting("Visible", &visible, false);
	registerBoolSetting("Crosshair", &crosshair, false);
	skyBlot = SettingEnum(this)
		.addEntry(EnumEntry("Default", 0))
		.addEntry(EnumEntry("Brightness", 1));
	registerEnumSetting("Sky, BloT", &skyBlot, 0);
	registerBoolSetting("Backgrou", &backgrou, false);
	font = SettingEnum(this)
		.addEntry(EnumEntry("Noto Sans", 0))
		.addEntry(EnumEntry("Mojangles", 1));
	registerEnumSetting("Font", &font, 0);
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

std::string Module_180223cc0::getModuleName() { return "Module_180223cc0"; }
std::string Module_180223cc0::getTooltip() { 
	// Binary function: func_0x18022b570 (TLS-encrypted string); use manifest description.
	return "Rainbow text";
}

bool Module_180223cc0::isEnabled() {
	// Binary function: func_0x180088ba0 (returns 0)
	return false;
}

