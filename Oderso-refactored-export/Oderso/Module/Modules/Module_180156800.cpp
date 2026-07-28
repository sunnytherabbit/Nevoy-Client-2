#include "Module_180156800.h"

Module_180156800::Module_180156800() : IModule(0, Category::CUSTOM, "Module_180156800") {
	registerBoolSetting("Color", &color, false);
	registerBoolSetting("Color slots", &colorSlots, false);
	registerEnumSetting("Background color", &backgroundColor, 0);  // TODO: add entries
	registerEnumSetting("Slot col", &slotCol, 0);  // TODO: add entries
	registerBoolSetting("Hold key", &holdKey, false);
}

const char* Module_180156800::getModuleName() { return "Module_180156800"; }
