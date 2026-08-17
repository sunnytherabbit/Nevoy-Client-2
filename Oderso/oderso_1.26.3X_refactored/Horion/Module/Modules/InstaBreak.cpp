#include "InstaBreak.h"

InstaBreak::InstaBreak() : IModule(VK_NUMPAD4, Category::WORLD, "Break any block instantly") {
}

InstaBreak::~InstaBreak() {
}

std::string InstaBreak::getModuleName() {
	return ("InstaBreak");
}
