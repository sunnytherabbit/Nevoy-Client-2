#include "Module_1801e7090.h"

Module_1801e7090::Module_1801e7090() : IModule(0, Category::CUSTOM, "Module_1801e7090") {
	// No settings extracted yet
}

std::string Module_1801e7090::getModuleName() { return "Module_1801e7090"; }
std::string Module_1801e7090::getTooltip() {
	// No manifest description
	return "";
}

void Module_1801e7090::onEnable() {
	// Ported from func_0x1801e75e0: clear the UI/world flag at module-manager + 0x1c0 + 0x18.
	auto flagPtr = g_Data.getUIFlagPtr();
	if (flagPtr != nullptr)
		*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(flagPtr) + 0x18) = 0;
}

void Module_1801e7090::onDisable() {
	// Ported from func_0x1801e7600: restore the UI/world flag.
	auto flagPtr = g_Data.getUIFlagPtr();
	if (flagPtr != nullptr)
		*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(flagPtr) + 0x18) = 1;
}

