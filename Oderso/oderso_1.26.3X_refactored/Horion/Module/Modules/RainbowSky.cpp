#include "RainbowSky.h"

RainbowSky::RainbowSky() : IModule(0, Category::VISUAL, "Makes your sky look rainbow!") {
}

RainbowSky::~RainbowSky() {
}

std::string RainbowSky::getModuleName() {
	return ("RainbowSky");
}
