#include "Module_180412630.h"

Module_180412630::Module_180412630() : IModule(0, Category::COMBAT, "Module_180412630") {
	// No settings extracted yet
}

std::string Module_180412630::getModuleName() { return "Module_180412630"; }
std::string Module_180412630::getTooltip() { 
	// Binary function: func_0x180412f50
	return "";
}

void Module_180412630::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1804130e0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x4130e0)(this);
}

void Module_180412630::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_180412630::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

