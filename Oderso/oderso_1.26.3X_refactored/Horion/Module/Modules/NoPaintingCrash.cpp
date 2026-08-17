#include "NoPaintingCrash.h"

NoPaintingCrash::NoPaintingCrash() : IModule(0, Category::MISC, "Fix Painting crash when using mob spawner !") {
}

NoPaintingCrash::~NoPaintingCrash() {
}

std::string NoPaintingCrash::getModuleName() {
	return ("NoPaintingCrash");
}