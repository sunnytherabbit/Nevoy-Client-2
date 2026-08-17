#include "Module_1802ac240.h"

Module_1802ac240::Module_1802ac240() : IModule(0, Category::CUSTOM, "Module_1802ac240") {
	// No settings extracted yet
}

std::string Module_1802ac240::getModuleName() { return "Module_1802ac240"; }
std::string Module_1802ac240::getRawModuleName() {
	// Binary function: func_0x1802b7cf0
	return getModuleName();
}



std::string Module_1802ac240::getTooltip() { 
	// Binary function: func_0x1802b7e50
	return "";
}

void Module_1802ac240::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1802bae50
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x2bae50)(this);
}

void Module_1802ac240::onEnable() {
	// Binary function: func_0x1802b7fe0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x2b7fe0)(this);
}

void Module_1802ac240::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1802bbec0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x2bbec0)(this);
}

void Module_1802ac240::onLoadConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onLoadConfig(conf);
}

void Module_1802ac240::toggle(void* event, bool* cancel) {
	// Binary function: func_0x1802bc1a0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using ToggleFunc = void(*)(void*, void*);
	reinterpret_cast<ToggleFunc>(mod->ptrBase + 0x2bc1a0)(this, event);
}

