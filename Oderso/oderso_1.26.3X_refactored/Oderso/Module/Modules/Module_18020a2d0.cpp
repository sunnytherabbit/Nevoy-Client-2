#include "Module_18020a2d0.h"

Module_18020a2d0::Module_18020a2d0() : IModule(0, Category::COMBAT, "Module_18020a2d0") {
	// No settings extracted yet
}

std::string Module_18020a2d0::getModuleName() { return "Module_18020a2d0"; }
std::string Module_18020a2d0::getTooltip() {
	// No manifest description
	return "";
}

void Module_18020a2d0::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Kept as direct binary call: onPreRender does an entity-name lookup with
	// TLS-encrypted strings and unmapped Actor/NameTag helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x20ad80)(this);
}

void Module_18020a2d0::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_18020a2d0::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

