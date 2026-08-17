#include "Module_1801899c0.h"

Module_1801899c0::Module_1801899c0() : IModule(0, Category::CUSTOM, "Module_1801899c0") {
	// No settings extracted yet
}

std::string Module_1801899c0::getModuleName() { return "Module_1801899c0"; }
std::string Module_1801899c0::getTooltip() {
	// No manifest description
	return "";
}

void Module_1801899c0::onAttack(int attackButton, bool isDown, bool* cancel) {
	// Kept as direct binary call: uses unmapped unordered_map/hash helper func_0x18018a080.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using AttackFunc = void(*)(void*, int, char, bool*);
	reinterpret_cast<AttackFunc>(mod->ptrBase + 0x18a850)(this, attackButton, isDown ? 1 : 0, cancel);
}

void Module_1801899c0::onLoadConfig(void* conf) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using OnLoadT = void(*)(void*, void*);
	reinterpret_cast<OnLoadT>(mod->ptrBase + 0x18aa50)(this, conf);
}

void Module_1801899c0::onSaveConfig(void* conf) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using OnSaveT = void(*)(void*, void*);
	reinterpret_cast<OnSaveT>(mod->ptrBase + 0x18b920)(this, conf);
}

void Module_1801899c0::slot_30(int arg, char mask, bool* cancel) {
	// Kept as direct binary call: uses unmapped unordered_map/hash helper func_0x18018a080.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*, int, char, bool*);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x18a940)(this, arg, mask, cancel);
}

