#include "Module_1801899c0.h"

Module_1801899c0::Module_1801899c0() : IModule(0, Category::CUSTOM, "Module_1801899c0") {
	// No settings extracted yet
}

std::string Module_1801899c0::getModuleName() { return "Module_1801899c0"; }
std::string Module_1801899c0::getTooltip() { 
	// Binary function: func_0x180189ef0
	return "";
}

void Module_1801899c0::onAttack(int attackButton, bool isDown, bool* cancel) {
	// Binary function: func_0x18018a850
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using AttackFunc = void(*)(void*, int, char, bool*);
	reinterpret_cast<AttackFunc>(mod->ptrBase + 0x18a850)(this, attackButton, isDown ? 1 : 0, cancel);
}

void Module_1801899c0::onLoadConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onLoadConfig(conf);
}

void Module_1801899c0::onSaveConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onSaveConfig(conf);
}

void Module_1801899c0::slot_30(int arg, char mask, bool* cancel) {
	// Binary function: func_0x18018a940
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*, int, char, bool*);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x18a940)(this, arg, mask, cancel);
}

