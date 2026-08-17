#include "Module_1803404a0.h"

Module_1803404a0::Module_1803404a0() : IModule(0, Category::CUSTOM, "Module_1803404a0") {
	// No settings extracted yet
}

std::string Module_1803404a0::getModuleName() { return "Module_1803404a0"; }
std::string Module_1803404a0::getTooltip() {
	// No manifest description
	return "";
}

void Module_1803404a0::onEnable() {
	// Binary function: func_0x180340f80
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x88) = 0;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x90) = 0;
}

