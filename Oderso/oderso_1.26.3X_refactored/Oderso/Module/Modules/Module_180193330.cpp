#include "Module_180193330.h"

Module_180193330::Module_180193330() : IModule(0, Category::COMBAT, "Module_180193330") {
	// No settings extracted yet
}

std::string Module_180193330::getModuleName() { return "Module_180193330"; }
std::string Module_180193330::getTooltip() {
	// No manifest description
	return "";
}

void Module_180193330::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Kept as direct binary call: complex entity-name hash comparison with heavy TLS string handling.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x193890)(this);
}

void Module_180193330::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_180193330::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

