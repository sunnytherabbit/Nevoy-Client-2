#include "Module_18024b340.h"

Module_18024b340::Module_18024b340() : IModule(0, Category::CUSTOM, "Module_18024b340") {
	registerBoolSetting("Mobs", &mobs, false);
	registerBoolSetting("Projectiles", &projectiles, false);
	registerBoolSetting("Items", &items, false);
	registerFloatSetting("View dir", &viewDir, 0.f, 0.1f, 5.f);
	registerBoolSetting("Eye", &eye, false);
	registerBoolSetting("Rainbow", &rainbow, false);
	registerBoolSetting("Hit helpPgg", &hitHelppgg, false);
}

std::string Module_18024b340::getModuleName() {
	return "Projectiles";
}
std::string Module_18024b340::getTooltip() {
	// Manifest tooltip
	return "Projectiles";
}

void Module_18024b340::slot_15() {
	// Kept as direct binary call: projectile rendering uses many unmapped helpers and a std::function dispatcher (func_0x180250040).
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x250040)(this);
}

