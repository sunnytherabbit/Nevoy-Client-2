#include "Module_1801a2840.h"

Module_1801a2840::Module_1801a2840() : IModule(0, Category::CUSTOM, "Module_1801a2840") {
	registerFloatSetting("Size", &size, 2.f, 0.3f, 1.6f);
	registerBoolSetting("Interdimensional", &interdimensional, false);
	registerBoolSetting("Show Coordinates", &showCoordinates, false);
}

std::string Module_1801a2840::getModuleName() { return "Module_1801a2840"; }
std::string Module_1801a2840::getTooltip() {
	// No manifest description
	return "";
}

void Module_1801a2840::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1801a4d00
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x1a4d00)(this);
}

void Module_1801a2840::slot_15() {
	// Binary function: func_0x1801a72d0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x1a72d0)(this);
}

void Module_1801a2840::onLoadConfig(void* conf) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using OnLoadT = void(*)(void*, void*);
	reinterpret_cast<OnLoadT>(mod->ptrBase + 0x1a9500)(this, conf);
}

void Module_1801a2840::onSaveConfig(void* conf) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using OnSaveT = void(*)(void*, void*);
	reinterpret_cast<OnSaveT>(mod->ptrBase + 0x1ad530)(this, conf);
}

