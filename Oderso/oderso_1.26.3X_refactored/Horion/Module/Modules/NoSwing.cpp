#include "NoSwing.h"

NoSwing::NoSwing() : IModule(0, Category::PLAYER, "Disable arm swing animation") {
}

NoSwing::~NoSwing() {
}

std::string NoSwing::getModuleName() {
	return ("NoSwing");
}