#include "Module_1801d2430.h"

Module_1801d2430::Module_1801d2430() : IModule(0, Category::CUSTOM, "Module_1801d2430") {
	// No settings extracted yet
}

std::string Module_1801d2430::getModuleName() { return "Module_1801d2430"; }
std::string Module_1801d2430::getTooltip() {
	// No manifest description
	return "";
}

void Module_1801d2430::onEnable() {
	// Kept as direct binary call: func_0x1801d29c0 — depends on TLS-initialized globals and unmapped helpers (func_0x180134bf0 / func_0x18011ae00 / func_0x180127220).
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x1d29c0)(this);
}

void Module_1801d2430::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Kept as direct binary call: func_0x1801d2aa0 — entity-effect toggle logic with unmapped game-object helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x1d2aa0)(this);
}

