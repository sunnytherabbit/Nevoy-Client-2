#include "SkinStealer.h"

SkinStealer::SkinStealer() : IModule(0, Category::VISUAL, "Steals and copies player skins, capes, and geometry.") {
	registerBoolSetting("Self steT", &selfStet, false);
	registerBoolSetting("Skin", &skin, false);
	registerBoolSetting("Cape", &cape, false);
	registerBoolSetting("Geometry", &geometry, false);
	registerBoolSetting("Copy path", &copyPath, false);
	registerBoolSetting("Clone", &clone, false);
}

const char* SkinStealer::getModuleName() { return "Skin Stealer"; }
