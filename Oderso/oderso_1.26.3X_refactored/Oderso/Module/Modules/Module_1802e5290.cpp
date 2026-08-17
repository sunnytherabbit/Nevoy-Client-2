#include "Module_1802e5290.h"

Module_1802e5290::Module_1802e5290() : IModule(0, Category::CUSTOM, "Module_1802e5290") {
	registerFloatSetting("Scale", &scale, 2.f, 0.1f, 5.f);
}

std::string Module_1802e5290::getModuleName() {
	return "PauseBaVG";
}
std::string Module_1802e5290::getTooltip() {
	// Manifest tooltip
	return "Pause/BaV~g";
}

void Module_1802e5290::onAttack(int attackButton, bool isDown, bool* cancel) {
	// Binary function: func_0x1802ea290
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using AttackFunc = void(*)(void*, int, char, bool*);
	reinterpret_cast<AttackFunc>(mod->ptrBase + 0x2ea290)(this, attackButton, isDown ? 1 : 0, cancel);
}

void Module_1802e5290::onEnable() {
	// Binary function: func_0x1802e9b10
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)();
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x2e9b10)();
}

void Module_1802e5290::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_1802e5290::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

void Module_1802e5290::slot_30(int arg, char mask, bool* cancel) {
	// Binary function: func_0x1802ea350
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*, int, char, bool*);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x2ea350)(this, arg, mask, cancel);
}

