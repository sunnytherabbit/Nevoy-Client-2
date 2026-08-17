#include "Module_18020d4c0.h"

Module_18020d4c0::Module_18020d4c0() : IModule(0, Category::MOVEMENT, "Module_18020d4c0") {
	// No settings extracted yet
}

std::string Module_18020d4c0::getModuleName() { return "Module_18020d4c0"; }
std::string Module_18020d4c0::getTooltip() { 
	// Binary function: func_0x18020d850
	return "";
}

void Module_18020d4c0::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x18020d9f0
	if (g_Data.getClientInstance() != nullptr) {
		float* val = reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0x148);
		int32_t* cnt = reinterpret_cast<int32_t*>(reinterpret_cast<uintptr_t>(this) + 0x14c);
		if (*val > 0.0f) {
			int c = *cnt;
			*cnt = c + 1;
			if (c > 0x4e)
				*val = 0.0f;
		}
		return;
	}
	// Unmapped global side-effect: DAT_180840a68 = 0;
}

void Module_18020d4c0::onEnable() {
	// Binary function: func_0x18020d9e0
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x148) = 0;
}

void Module_18020d4c0::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_18020d4c0::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

