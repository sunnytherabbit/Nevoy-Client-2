#include "Module_180415150.h"

Module_180415150::Module_180415150() : IModule(0, Category::CUSTOM, "Module_180415150") {
	// No settings extracted yet
}

std::string Module_180415150::getModuleName() { return "Module_180415150"; }
std::string Module_180415150::getTooltip() { 
	// Binary function: func_0x1804154c0
	return "";
}

void Module_180415150::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x180415650
	auto client = g_Data.getClientInstance();
	if (client == nullptr) {
		// Unmapped global side-effect: DAT_180840a68 = 0;
		return;
	}

	auto option = getOption_0x18b1887(client);
	if (option != nullptr)
		*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(option) + 0x10) |= 0x80;
}

void Module_180415150::onDisable() {
	// Binary function: func_0x1804156f0
	auto client = g_Data.getClientInstance();
	if (client == nullptr) {
		// Unmapped global side-effect: DAT_180840a68 = 0;
		return;
	}

	auto option = getOption_0x18b1887(client);
	if (option != nullptr)
		*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(option) + 0x10) &= 0x7f;
}

