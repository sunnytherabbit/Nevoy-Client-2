#include "Module_180417c20.h"

Module_180417c20::Module_180417c20() : IModule(0, Category::CUSTOM, "Module_180417c20") {
	registerEnumSetting("Hotbar tooltips", &hotbarTooltips, 0);  // TODO: add entries
}

const char* Module_180417c20::getModuleName() { return "Module_180417c20"; }
