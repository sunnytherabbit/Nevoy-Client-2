#include "Module_18021f300.h"

Module_18021f300::Module_18021f300() : IModule(0, Category::CUSTOM, "&!\"") {
	registerBoolSetting("players", &players, false);
	registerBoolSetting("Check fe", &checkFe, false);
	registerFloatSetting("Check he", &checkHe, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("Max hitbox width", &maxHitboxWidth, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("&!\"", &setting, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
}

const char* Module_18021f300::getModuleName() { return "&!\""; }
