#include "Module_1803238c0.h"

Module_1803238c0::Module_1803238c0() : IModule(0, Category::CUSTOM, "Module_1803238c0") {
	registerBoolSetting("Shadow", &shadow, false);
	registerFloatSetting("Size", &size, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("Smoothne6B=", &smoothne6B, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("Radius", &radius, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerBoolSetting("Animation", &animation, false);
	registerEnumSetting("Button layout", &buttonLayout, 0);  // TODO: add entries
}

const char* Module_1803238c0::getModuleName() { return "Module_1803238c0"; }
