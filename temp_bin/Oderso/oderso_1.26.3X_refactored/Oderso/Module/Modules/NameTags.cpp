#include "NameTags.h"

NameTags::NameTags() : IModule(0, Category::VISUAL, "Displays the name of every user on the server.") {
}

NameTags::~NameTags() {
}

const char* NameTags::getModuleName() { return "NameTags"; }
const char* NameTags::getRawModuleName() {
	// func_0x1801d4de0
	return getModuleName();void NameTags::setKeybind(int key) {
	// func_0x1801d4fa0
	this->keybind = key;void NameTags::onTick(C_GameMode* gameMode) {
	// func_0x18008c310: empty defaultvoid NameTags::onKeyUpdate(int key, bool isDown, bool* cancel) {
	// Binary function: func_0x1801d4fb0
	// TODOvoid NameTags::onEnable() {
	// func_0x18008c310: empty default
}



void NameTags::onDisable() {
	// func_0x18008c310: empty defaultvoid NameTags::onLevelRender() {
	// func_0x18008c310: empty defaultvoid NameTags::onSaveConfig(void* conf) {
	// func_0x18008c310: empty default
}



bool NameTags::isFlashMode() {
	// Binary function: func_0x1801d5d90
	// TODO
	return false;void NameTags::toggle() {
	// Binary function: func_0x18008cb60
	// TODOvoid NameTags::onSendPacket(C_Packet*) {
	// func_0x18008c310: empty default
}



void NameTags::callWhenDisabled(C_Entity* entity) {
	// func_0x18008c310: empty default