#include "Module_180136cd0.h"

Module_180136cd0::Module_180136cd0() : IModule(0, Category::CUSTOM, "Module_180136cd0") {
	// No settings extracted yet
}

std::string Module_180136cd0::getModuleName() { return "Module_180136cd0"; }
std::string Module_180136cd0::getTooltip() {
	// No manifest description
	return "";
}

void Module_180136cd0::onEnable() {
	// Binary function: func_0x180137230
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x137230)(this);
}

