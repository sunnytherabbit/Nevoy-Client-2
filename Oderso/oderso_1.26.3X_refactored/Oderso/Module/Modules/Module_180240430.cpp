#include "Module_180240430.h"

Module_180240430::Module_180240430() : IModule(0, Category::CUSTOM, "Module_180240430") {
	registerFloatSetting("Reach", &reachValue, 3.f, 0.f, 10.f);
}

std::string Module_180240430::getModuleName() { return "Module_180240430"; }
std::string Module_180240430::getTooltip() {
	// No manifest description
	return "";
}

void Module_180240430::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Ported from func_0x180241330: pushes the configured reach value into the entity-list entry for type 0x32.
	auto level = g_Data.getLevel();
	if (level == nullptr) return;

	auto ent = g_Data.getEntityListEntry(level, 0x32);
	if (ent == nullptr) return;

	// Offsets 0x10 and 0x18 hold bounding-box/range values (two floats, 0.01 and 160, plus the reach setting).
	*reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(ent) + 0x18) = this->reachValue;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(ent) + 0x10) = 0x432000003c23d70a;
}

void Module_180240430::onEnable() {
	// Kept as direct binary call: reach-patch setup requires the binary's lazy global initialisation (func_0x180241090).
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x240ec0)(this);
}

void Module_180240430::onDisable() {
	// Kept as direct binary call: reach-patch restore uses the binary's lazy global initialisation (func_0x180241090).
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x241170)(this);
}

