#include "Module_1802c5a20.h"

Module_1802c5a20::Module_1802c5a20() : IModule(0, Category::CUSTOM, "Module_1802c5a20") {
	registerBoolSetting("Shadow", &shadow, false);
	registerBoolSetting("Rainbow text", &rainbowText, false);
	registerFloatSetting("Size", &size, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("Size of the mod", &sizeOfTheMod, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("Vertical padding", &verticalPadding, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("Smoothnen", &smoothnen, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("Radius", &radius, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("Animation speed", &animationSpeed, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerBoolSetting("Jump", &jump, false);
	registerFloatSetting("Jump widC", &jumpWidc, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("Jump height", &jumpHeight, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerBoolSetting("Sneak", &sneak, false);
	registerBoolSetting("Mouse", &mouse, false);
	registerBoolSetting("Left CPS", &leftCps, false);
}

const char* Module_1802c5a20::getModuleName() { return "Module_1802c5a20"; }
