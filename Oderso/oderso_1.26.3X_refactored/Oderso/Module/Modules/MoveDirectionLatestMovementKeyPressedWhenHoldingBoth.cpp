// MANUAL
#include "MoveDirectionLatestMovementKeyPressedWhenHoldingBoth.h"

MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::MoveDirectionLatestMovementKeyPressedWhenHoldingBoth() : IModule(0, Category::CUSTOM, "Makes you move in the direction of the latest movement key pressed when holding both") {
	registerBoolSetting("Ignore second", &ignoreSecond, true);
	registerBoolSetting("uUM", &uUM, true);
}

MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::~MoveDirectionLatestMovementKeyPressedWhenHoldingBoth() {
}

std::string MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::getModuleName() { return "Makes you move in the direction of the latest movement key pressed when holding both"; }
std::string MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::getTooltip() {
	return "Makes you move in the direction of the latest movement key pressed when holding both";
}

