#include "Module_18038bc60.h"

Module_18038bc60::Module_18038bc60() : IModule(0, Category::CUSTOM, "<add|remove|clear|update> <name> [X] [Y] [Z] [red] [green] [blue]") {
}

const char* Module_18038bc60::getModuleName() { return "Waypoints"; }

const char* Module_18038bc60::getRawModuleName() {
	// Binary function: func_0x18042ba20
const char* Module_18038bc60::getModuleName() { return "Waypoints"; }
}

int Module_18038bc60::getKeybind() {
	// Binary function: func_0x18042ba40
	// TODO
	return 0;
	// TODO
}


void Module_18038bc60::setKeybind(int key) {
	// Binary function: func_0x18038c450
	// TODO
}

bool Module_18038bc60::allowAutoStart() {
	// Binary function: func_0x180391f40
	// TODO
	return false;
	// TODO
}


void Module_18038bc60::onTick(C_GameMode* gameMode) {
	// TODO
}

void Module_18038bc60::onEnable() {
	// Binary function: func_0x1801d4df0
	// TODO
}

void Module_18038bc60::onDisable() {
	// Binary function: func_0x1801d4f90
	// TODO
}

void Module_18038bc60::onAttack(int attackButton, bool isDown, bool* cancel) {
	// Binary function: func_0x1801d4de0
	// TODO
}

void Module_18038bc60::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x18044ac60
	// TODO
}

void Module_18038bc60::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1801d4fa0
	// TODO
}

void Module_18038bc60::onLevelRender() {
	// Binary function: func_0x18008cb60
	// TODO
}

void Module_18038bc60::onMove(C_MoveInputHandler*) {
	// func_0x18008c310: empty default
}



void Module_18038bc60::onLoadConfig(void* conf) {
	// func_0x18008c310: empty default
}



void Module_18038bc60::onSaveConfig(void* conf) {
	// func_0x18008c310: empty default
}



bool Module_18038bc60::isFlashMode() {
	// Binary function: func_0x1801d4fb0
	// TODO
	return false;
	// TODO
}


void Module_18038bc60::setEnabled(bool enabled) {
	// func_0x18008c310: empty default
}



void Module_18038bc60::toggle() {
	// func_0x18008c310: empty default
}



bool Module_18038bc60::isEnabled() {
	// Binary function: func_0x18008c310
	// TODO
	return false;
	// TODO
}


void Module_18038bc60::onSendPacket(C_Packet*) {
	// func_0x18008c310: empty default
}



void Module_18038bc60::callWhenDisabled(C_Entity* entity) {
	// func_0x18008c310: empty default
}



void Module_18038bc60::onKeyUpdate(int key, bool isDown, bool* cancel) {
	// Binary function: func_0x1803dcaa0
	// TODO
}

const char* Module_18038bc60::getTooltip() {
	// func_0x18042ba30
	return tooltip.c_str();
}



