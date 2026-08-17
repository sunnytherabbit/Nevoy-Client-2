#include "Module_18021f300.h"

Module_18021f300::Module_18021f300() : IModule(0, Category::CUSTOM, "") {
	registerBoolSetting("sE", &players, false);
	registerBoolSetting("Check fe", &checkFe, false);
	registerFloatSetting("Check he", &checkHe, 5.f, 0.f, 25.f);
	registerFloatSetting("Max hitbox width", &maxHitboxWidth, 2.f, 0.1f, 20.f);
	registerFloatSetting("Scale", &setting, 5.f, 0.1f, 20.f);
}

std::string Module_18021f300::getModuleName() { return "Module_18021f300"; }
std::string Module_18021f300::getTooltip() { 
	// Binary function: func_0x1802238d0 (TLS-encrypted string); manifest has no description.
	return "";
}
