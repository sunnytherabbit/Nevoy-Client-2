#include "Module_1802fc040.h"

Module_1802fc040::Module_1802fc040() : IModule(0x4c, Category::CUSTOM, "mod.click_gui.name") {
	// No settings extracted yet
}

std::string Module_1802fc040::getModuleName() { return "ClickGui"; }
std::string Module_1802fc040::getTooltip() { 
	// The binary's func_0x180311c10 returns the i18n key "mod.click_gui.name".
	// IModule stores this key as the tooltip, so return the base value.
	return IModule::getTooltip();
}

void Module_1802fc040::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// func_0x180313170 is not in the provided decomp and is too large/obfuscated
	// to port safely; keep the direct binary call.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*, void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x313170)(this, renderCtx);
}

void Module_1802fc040::onEnable() {
	// func_0x180311da0 is not in the provided decomp and is too large/obfuscated
	// to port safely; keep the direct binary call.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x311da0)(this);
}

void Module_1802fc040::onDisable() {
	// func_0x180312f20 is not in the provided decomp and is too large/obfuscated
	// to port safely; keep the direct binary call.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x312f20)(this);
}

void Module_1802fc040::onLoadConfig(void* conf) {
	// Ported from func_0x1803138b0: load base settings then default keybind to 'L' if unset.
	IModule::onLoadConfig(conf);
	if (this->getKeybind() == 0) this->setKeybind(0x4c);
}

