#include "Module_180331ad0.h"

Module_180331ad0::Module_180331ad0() : IModule(0, Category::CUSTOM, "Module_180331ad0") {
	registerBoolSetting("crosshair.png", &crosshairPng, false);
	registerBoolSetting("Custom crosshair", &customCrosshair, false);
	registerBoolSetting("Custom color", &customColor, false);
	registerBoolSetting("Hit help", &hitHelp, false);
}

std::string Module_180331ad0::getModuleName() { return "Module_180331ad0"; }
std::string Module_180331ad0::getTooltip() { 
	// Binary function: func_0x180337090
	return "";
}

void Module_180331ad0::onEnable() {
	// Binary function: func_0x180337220
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x337220)(this);
}

void Module_180331ad0::onDisable() {
	// Binary function: func_0x180337f20
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	auto target = *reinterpret_cast<void**>(base + 0x83ff18);
	if (target != nullptr)
		g_Data.patchToCode(target, reinterpret_cast<void*>(base + 0x83ff14), 1);
}

void Module_180331ad0::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x180337fe0
	if (this->crosshairPng == this->lastCrosshairPng)
		return;
	this->lastCrosshairPng = this->crosshairPng;

	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	auto target = *reinterpret_cast<void**>(base + 0x83ff28);
	if (target == nullptr) return;

	void* src;
	if (this->crosshairPng) {
		src = reinterpret_cast<void*>(base + 0x6edc98);
	} else {
		src = reinterpret_cast<void*>(base + 0x83ff14);
	}
	g_Data.patchToCode(target, src, 1);
}

void Module_180331ad0::onLoadConfig(void* conf) {
	// Binary function: func_0x18033a900
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onLoadConfig(conf);
}

void Module_180331ad0::onSaveConfig(void* conf) {
	// Binary function: func_0x18033afd0
	// NOTE: custom logic not yet ported; calling base for now
	IModule::onSaveConfig(conf);
}

