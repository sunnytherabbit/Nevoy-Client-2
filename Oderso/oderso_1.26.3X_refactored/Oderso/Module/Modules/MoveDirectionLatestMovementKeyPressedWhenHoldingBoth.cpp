// MANUAL
#include "MoveDirectionLatestMovementKeyPressedWhenHoldingBoth.h"

MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::MoveDirectionLatestMovementKeyPressedWhenHoldingBoth() : IModule(0, Category::CUSTOM, "Makes you move in the direction of the latest movement key pressed when holding both") {
	registerBoolSetting("Ignore second", &ignoreSecond, ignoreSecond);
	registerBoolSetting("uUM", &uUM, uUM);
}

MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::~MoveDirectionLatestMovementKeyPressedWhenHoldingBoth() {
}

std::string MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::getModuleName() { return "Makes you move in the direction of the latest movement key pressed when holding both"; }
std::string MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::getTooltip() { 
	// Binary function: func_0x1801f22a0
	return "Makes you move in the direction of the latest movement key pressed when holding both";
}

