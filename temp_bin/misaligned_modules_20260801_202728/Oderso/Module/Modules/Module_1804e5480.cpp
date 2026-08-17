#include "Module_1804e5480.h"

Module_1804e5480::Module_1804e5480() : IModule(0, Category::CUSTOM, "Gives you basic information of each player on the server") {
}

const char* Module_1804e5480::getModuleName() { return "PlayerInfo"; }

const char* Module_1804e5480::getRawModuleName() {
	// Binary function: func_0x18042ba20
const char* Module_1804e5480::getModuleName() { return "PlayerInfo"; }
}

int Module_1804e5480::getKeybind() {
	// Binary function: func_0x18042ba40
	// TODO
	return 0;
	// TODO
}


void Module_1804e5480::setKeybind(int key) {
	// Binary function: func_0x1804e5c40
	// TODO
}

bool Module_1804e5480::allowAutoStart() {
	// Binary function: func_0x1801dd460
	// TODO
	return false;
	// TODO
}


void Module_1804e5480::onTick(C_GameMode* gameMode) {
	// Binary function: func_0x180760767
	// TODO
}

void Module_1804e5480::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x180097530
	// TODO
}

void Module_1804e5480::onLevelRender() {
	// Binary function: func_0x18042ba20
	// TODO
}

void Module_1804e5480::onMove(C_MoveInputHandler*) {
	// Binary function: func_0x18042ba30
	// TODO
}

void Module_1804e5480::onSendPacket(C_Packet*) {
	// Binary function: func_0x180097530
	// TODO
}

void Module_1804e5480::onLoadConfig(void* conf) {
	// Binary function: func_0x18042ba30
	// TODO
}

void Module_1804e5480::onSaveConfig(void* conf) {
	// Binary function: func_0x18042ba40
	// TODO
}

bool Module_1804e5480::isFlashMode() {
	// Binary function: func_0x1804e7380
	// TODO
	return false;
	// TODO
}


bool Module_1804e5480::isEnabled() {
	// Binary function: func_0x18044ac30
	// TODO
	return false;
	// TODO
}


void Module_1804e5480::setEnabled(bool enabled) {
	// Binary function: func_0x1801dd460
	// TODO
}

void Module_1804e5480::callWhenDisabled(C_Entity* entity) {
	// Binary function: func_0x18042ba20
	// Implement behaviour from func_0x18042ba20
	// TODO
}
void Module_1804e5480::onKeyUpdate(int key, bool isDown, bool* cancel) {
	// Binary function: func_0x18076012f
	// TODO
}

void Module_1804e5480::onEnable() {
	// TODO
}

void Module_1804e5480::onDisable() {
	// Binary function: func_0x18044ac30
	// TODO
}

void Module_1804e5480::onAttack(int attackButton, bool isDown, bool* cancel) {
	// Binary function: func_0x3
	// TODO
}

void Module_1804e5480::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x3
	// TODO
}

const char* Module_1804e5480::getTooltip() {
	// func_0x18042ba30
	return tooltip.c_str();
}



