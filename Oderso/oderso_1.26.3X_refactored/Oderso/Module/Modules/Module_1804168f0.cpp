#include "Module_1804168f0.h"

Module_1804168f0::Module_1804168f0() : IModule(0, Category::CUSTOM, "Module_1804168f0") {
	// No settings extracted yet
}

std::string Module_1804168f0::getModuleName() { return "Module_1804168f0"; }
std::string Module_1804168f0::getTooltip() {
	// No manifest description
	return "";
}

void Module_1804168f0::onEnable() {
	// Binary function: func_0x180417760
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x417760)(this);
}

void Module_1804168f0::onDisable() {
	// Binary function: func_0x180417900
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x417900)(this);
}

void Module_1804168f0::slot_15() {
	// Binary function: func_0x180417a80
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x417a80)(this);
}

