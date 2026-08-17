#include "Module_180243e70.h"

Module_180243e70::Module_180243e70() : IModule(0, Category::CUSTOM, "Module_180243e70") {
	registerBoolSetting("Hold", &hold, false);
}

std::string Module_180243e70::getModuleName() {
	return "Perspective";
}
std::string Module_180243e70::getTooltip() {
	// Manifest tooltip
	return "Perspective";
}

void Module_180243e70::onEnable() {
	// Binary function: func_0x1802451a0
	auto player = g_Data.getLocalPlayer();
	if (player == nullptr) {
		// Unmapped global side-effect: DAT_180840a68 = 0;
		return;
	}

	auto pos = player->getPos();
	if (pos != nullptr) {
		this->storedX = pos->x;
		this->storedY = pos->y;
	}
}

bool Module_180243e70::isFlashMode() {
	// Binary function: func_0x1802452b0
	return hold;
}

