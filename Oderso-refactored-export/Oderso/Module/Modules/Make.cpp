#include "Make.h"

Make::Make() : IModule(0, Category::CUSTOM, "Make") {
	registerBoolSetting("Ignore second", &ignoreSecond, false);
	registerBoolSetting("Forward/Backward", &forwardBackward, false);
}

const char* Make::getModuleName() { return "Make"; }
