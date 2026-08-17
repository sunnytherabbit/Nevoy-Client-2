#include "Module_180156800.h"

Module_180156800::Module_180156800() : IModule(0, Category::CUSTOM, "Displays the contents of a shulker box when hovered") {
	registerBoolSetting("Color", &color, false);
	registerBoolSetting("Color slots", &colorSlots, false);
	registerEnumSetting("Background color", &backgroundColor, 0);  // TODO: add entries
	registerEnumSetting("Slot col", &slotCol, 0);  // TODO: add entries
	registerBoolSetting("Hold key", &holdKey, false);
}

const char* Module_180156800::getModuleName() { return "ShulkerPreview"; }
void Module_180156800::onTick(C_GameMode* gameMode) {
	// func_0x18008c310: empty default
}



void Module_180156800::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// func_0x18008c310: empty default
}



void Module_180156800::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x180163480
	// TODO
}

void Module_180156800::onEnable() {
	// Binary function: func_0x1801607a0
	// TODO
}

void Module_180156800::onDisable() {
	// func_0x18008c310: empty default
}



const char* Module_180156800::getRawModuleName() {
	// func_0x1801d4de0
	return getModuleName();
}



int Module_180156800::getKeybind() {
	// func_0x1801d4f90
	return keybind;
}



void Module_180156800::setKeybind(int key) {
	// func_0x1801d4fa0
	this->keybind = key;
}



bool Module_180156800::allowAutoStart() {
	// func_0x18008cb60: returns true
	return true;
}



void Module_180156800::onKeyUpdate(int key, bool isDown, bool* cancel) {
	// Binary function: func_0x1801d4fb0
	// TODO
}

void Module_180156800::onAttack(int attackButton, bool isDown, bool* cancel) {
	// func_0x18008c310: empty default
}



void Module_180156800::onLevelRender() {
	// func_0x18008c310: empty default
}



void Module_180156800::onMove(C_MoveInputHandler*) {
	// func_0x180088ba0: empty default
}



void Module_180156800::onLoadConfig(void* conf) {
	// func_0x18008c310: empty default
}



void Module_180156800::onSaveConfig(void* conf) {
	// func_0x18008c310: empty default
}



bool Module_180156800::isFlashMode() {
	// Binary function: func_0x1801d5d90
	// TODO
	return false;
}

void Module_180156800::setEnabled(bool enabled) {
	// func_0x1801d8b10
	this->enabled = enabled;
}



void Module_180156800::toggle() {
	// func_0x180088ba0: empty default
}



bool Module_180156800::isEnabled() {
	// func_0x1800ad860
	return this->enabled;
}



void Module_180156800::onSendPacket(C_Packet*) {
	// func_0x18008c310: empty default
}



void Module_180156800::callWhenDisabled(C_Entity* entity) {
	// func_0x18008c310: empty default
}



const char* Module_180156800::getTooltip() {
	// Binary function: func_0x180160610
	// TODO
	return "";
}

