#include "Module_1801f8fc0.h"

Module_1801f8fc0::Module_1801f8fc0() : IModule(0, Category::CUSTOM, "Module_1801f8fc0") {
	registerBoolSetting("Disable", &disable, false);
	registerBoolSetting("Always show", &alwaysShow, false);
	registerFloatSetting("Scale", &scale, 1.f, 0.1f, 5.f);
}

std::string Module_1801f8fc0::getModuleName() {
	return "AlwaysShow";
}
std::string Module_1801f8fc0::getTooltip() {
	// Manifest tooltip
	return "Always show";
}

void Module_1801f8fc0::onDisable() {
	// Binary function: func_0x1801faae0
	auto base = reinterpret_cast<uintptr_t>(this);

	if (*reinterpret_cast<bool*>(base + 0xc5)) {
		auto player = g_Data.getLocalPlayer();
		auto stored = *reinterpret_cast<void**>(base + 0xc8);
		if (player != nullptr && stored != nullptr) {
			uint32_t v1 = *reinterpret_cast<uint32_t*>(base + 0xd4);
			*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(player) + 0x10) = v1;
			uint32_t v2 = *reinterpret_cast<uint32_t*>(base + 0xd8);
			*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(stored) + 0x14) = v2;
			*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(stored) + 0x48) = 0x4170000041700000;
		}
	}

	*reinterpret_cast<uint16_t*>(base + 0xc4) = 0;
	*reinterpret_cast<void**>(base + 0xc8) = nullptr;
}

void Module_1801f8fc0::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1801fabe0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x1fabe0)(this);
}

void Module_1801f8fc0::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_1801f8fc0::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

