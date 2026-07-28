#include "Module_1801380b0.h"

Module_1801380b0::Module_1801380b0() : IModule(0, Category::CUSTOM, "Module_1801380b0") {
	registerIntSetting("Opacity", &opacity, 0, 0, 1);  // TODO: defaults/min/max
	registerBoolSetting("Air", &air, false);
	registerBoolSetting("Wrong", &wrong, false);
	registerBoolSetting("Ignore a", &ignoreA, false);
	registerIntSetting("Offset X", &offsetX, 0, 0, 1);  // TODO: defaults/min/max
	registerIntSetting("Offset Y", &offsetY, 0, 0, 1);  // TODO: defaults/min/max
	registerIntSetting("Reset on load", &resetOnLoad, 0, 0, 1);  // TODO: defaults/min/max
	registerIntSetting("Max heigY7", &maxHeigy7, 0, 0, 1);  // TODO: defaults/min/max
	registerIntSetting("Max leng", &maxLeng, 0, 0, 1);  // TODO: defaults/min/max
	registerIntSetting("Rot", &rot, 0, 0, 1);  // TODO: defaults/min/max
}

const char* Module_1801380b0::getModuleName() { return "Module_1801380b0"; }
