#include "Module_180404050.h"

Module_180404050::Module_180404050() : IModule(0, Category::CUSTOM, "Module_180404050") {
	// No settings extracted yet
}

std::string Module_180404050::getModuleName() { return "Module_180404050"; }
std::string Module_180404050::getTooltip() {
	// No manifest description
	return "";
}

void Module_180404050::onEnable() {
	// Binary function: func_0x1804045b0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x4045b0)(this);
}

void Module_180404050::onDisable() {
	// Binary function: func_0x180404950
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x404950)(this);
}

