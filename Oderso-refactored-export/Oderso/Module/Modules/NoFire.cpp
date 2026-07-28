// MANUAL
#include "NoFire.h"

NoFire::NoFire() : IModule(0, Category::VISUAL, "Disables the fire overlay.") {
	registerBoolSetting("NoFire", &noFire, false);
	registerFloatSetting("Height", &height, 1.5f, 0.f, 3.f);
}

const char* NoFire::getModuleName() { return "NoFire"; }

void NoFire::onTick(C_GameMode*) {
	// The fire overlay is hidden by the Actor::isOnFire vtable hook in Memory/Hooks.cpp.
	// This module only exposes the toggle; no per-tick work is needed here.
}
