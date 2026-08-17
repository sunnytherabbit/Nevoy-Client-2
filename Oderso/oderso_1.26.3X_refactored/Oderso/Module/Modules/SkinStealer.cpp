#include "SkinStealer.h"

SkinStealer::SkinStealer() : IModule(0, Category::VISUAL, "Steals and copies player skins, capes, and geometry.") {
	registerBoolSetting("Self steT", &selfStet, false);
	registerBoolSetting("Skin", &skin, false);
	registerBoolSetting("Cape", &cape, false);
	registerBoolSetting("Geometry", &geometry, false);
	registerBoolSetting("Copy path", &copyPath, false);
	registerBoolSetting("Clone", &clone, false);
}

std::string SkinStealer::getModuleName() { return "Skin Stealer"; }
std::string SkinStealer::getTooltip() { 
	// Binary function: func_0x180168be0
	return "Steals and copies player skins, capes, and geometry.";
}

void SkinStealer::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x180168d70
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x168d70)(this);
}

