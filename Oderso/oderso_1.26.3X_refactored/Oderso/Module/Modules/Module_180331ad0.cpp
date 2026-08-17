#include "Module_180331ad0.h"

Module_180331ad0::Module_180331ad0() : IModule(0, Category::CUSTOM, "Module_180331ad0") {
	registerBoolSetting("crosshair.png", &crosshairPng, false);
	registerBoolSetting("Custom crosshair", &customCrosshair, false);
	registerBoolSetting("Custom color", &customColor, false);
	registerBoolSetting("Hit help", &hitHelp, false);
}

std::string Module_180331ad0::getModuleName() {
	return "CrosshairPng";
}
std::string Module_180331ad0::getTooltip() {
	// Manifest tooltip
	return "crosshair.png";
}

void Module_180331ad0::onEnable() {
	// Kept as direct binary call: TLS-heavy file-path / file-chooser setup with unmapped string helpers (func_0x180337220).
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x337220)(this);
}

void Module_180331ad0::onDisable() {
	// Kept as direct binary call: crosshair patch restore requires the binary's lazy global initialisation (func_0x180337f20).
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x337f20)(this);
}

void Module_180331ad0::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Kept as direct binary call: crosshair patch toggle requires the binary's lazy global initialisation (func_0x180337fe0).
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x337fe0)(this);
}

void Module_180331ad0::onLoadConfig(void* conf) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using OnLoadT = void(*)(void*, void*);
	reinterpret_cast<OnLoadT>(mod->ptrBase + 0x33a900)(this, conf);
}

void Module_180331ad0::onSaveConfig(void* conf) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using OnSaveT = void(*)(void*, void*);
	reinterpret_cast<OnSaveT>(mod->ptrBase + 0x33afd0)(this, conf);
}

