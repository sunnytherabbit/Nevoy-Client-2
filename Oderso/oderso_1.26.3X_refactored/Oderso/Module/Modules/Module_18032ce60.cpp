#include "Module_18032ce60.h"

Module_18032ce60::Module_18032ce60() : IModule(0, Category::COMBAT, "Module_18032ce60") {
	registerBoolSetting("Show X", &showX, false);
	registerBoolSetting("Show Y", &showY, false);
	registerBoolSetting("Show Z", &showZ, false);
	registerEnumSetting("Separator", &separator, 0);  // TODO: add entries
	registerBoolSetting("Decimal", &decimal, false);
}

const char* Module_18032ce60::getModuleName() { return "Module_18032ce60"; }
