#include "FastLadder.h"

FastLadder::FastLadder() : IModule(0, Category::MOVEMENT, "Climb up ladders faster") {
	registerFloatSetting("Speed", &this->speed, this->speed, 0.1f, 1.0f);
}

FastLadder::~FastLadder() {
}

std::string FastLadder::getModuleName() {
	return ("FastLadder");
}
