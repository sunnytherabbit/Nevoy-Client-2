#include "Module_180415150.h"

Module_180415150::Module_180415150() : IModule(0, Category::CUSTOM, "Module_180415150") {
	// No settings extracted yet
}

std::string Module_180415150::getModuleName() { return "Module_180415150"; }
std::string Module_180415150::getTooltip() {
	// No manifest description
	return "";
}

void Module_180415150::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Ported from func_0x180415650: sets an options bit while the module is active.
	g_Data.updateClientGlobal();
	auto client = reinterpret_cast<C_ClientInstance*>(g_Data.getClientInstancePtr());
	if (client == nullptr)
		return;

	auto option = getOption_0x18b1887(client);
	if (option != nullptr)
		*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(option) + 0x10) |= 0x80;
}

void Module_180415150::onDisable() {
	// Ported from func_0x1804156f0: clears an options bit when the module is disabled.
	g_Data.updateClientGlobal();
	auto client = reinterpret_cast<C_ClientInstance*>(g_Data.getClientInstancePtr());
	if (client == nullptr)
		return;

	auto option = getOption_0x18b1887(client);
	if (option != nullptr)
		*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(option) + 0x10) &= 0x7f;
}

