#include "Module_1801e52f0.h"

Module_1801e52f0::Module_1801e52f0() : IModule(0, Category::CUSTOM, "Module_1801e52f0") {
	// No settings extracted yet
}

std::string Module_1801e52f0::getModuleName() { return "Module_1801e52f0"; }
std::string Module_1801e52f0::getTooltip() {
	// No manifest description
	return "";
}

void Module_1801e52f0::onEnable() {
	// Binary function: func_0x1801e5810
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x1e5810)(this);
}

