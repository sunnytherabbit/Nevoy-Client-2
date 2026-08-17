#include "MoveDirectionLatestMovementKeyPressedWhenHoldingBoth.h"

MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::MoveDirectionLatestMovementKeyPressedWhenHoldingBoth() : IModule(0, Category::CUSTOM, "Makes you move in the direction of the latest movement key pressed when holding both") {
	registerBoolSetting("Ignore second", &ignoreSecond, ignoreSecond);
	registerBoolSetting("uUM", &uUM, uUM);
}

const char* MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::getModuleName() { return "Makes you move in the direction of the latest movement key pressed when holding both"; }
void MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::onTick(C_GameMode* gameMode) {
	// func_0x18008c310: empty defaultvoid MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// func_0x18008c310: empty default
}



void MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::onEnable() {
	// func_0x18008c310: empty defaultconst char* MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::getRawModuleName() {
	// func_0x1801d4de0
	return getModuleName();
}



const char* MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::getTooltip() {
	// Binary function: func_0x1801f22a0
	// TODO
	return "";void MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::setKeybind(int key) {
	// func_0x1801d4fa0
	this->keybind = key;void MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::onKeyUpdate(int key, bool isDown, bool* cancel) {
	// Binary function: func_0x1801d4fb0
	// TODOvoid MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::onLevelRender() {
	// func_0x18008c310: empty defaultvoid MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::onSaveConfig(void* conf) {
	// func_0x18008c310: empty default
}



bool MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::isFlashMode() {
	// Binary function: func_0x1801d5d90
	// TODO
	return false;void MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::toggle() {
	// func_0x180088ba0: empty default (return ignored)void MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::onSendPacket(C_Packet*) {
	// func_0x18008c310: empty default
}



void MoveDirectionLatestMovementKeyPressedWhenHoldingBoth::callWhenDisabled(C_Entity* entity) {
	// func_0x18008c310: empty default