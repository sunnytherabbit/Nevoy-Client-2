#include "Module_18024b340.h"

Module_18024b340::Module_18024b340() : IModule(0, Category::CUSTOM, "Module_18024b340") {
	registerBoolSetting("Mobs", &mobs, false);
	registerBoolSetting("Projectiles", &projectiles, false);
	registerBoolSetting("Items", &items, false);
	registerFloatSetting("View dir", &viewDir, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerBoolSetting("Eye", &eye, false);
	registerBoolSetting("Rainbow", &rainbow, false);
	registerBoolSetting("Hit helpPgg", &hitHelppgg, false);
}

const char* Module_18024b340::getModuleName() { return "Module_18024b340"; }
