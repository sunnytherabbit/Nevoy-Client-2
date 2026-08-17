#include "Module_18018d820.h"

Module_18018d820::Module_18018d820() : IModule(0, Category::CUSTOM, "Module_18018d820") {
	registerIntSetting("sE", &sE, 16, 0, 100);
}

std::string Module_18018d820::getModuleName() {
	return "TargetTime";
}
std::string Module_18018d820::getTooltip() {
	// Manifest tooltip
	return "Target time";
}

void Module_18018d820::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x18018f3b0
	if ((*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x85) == 1) &&
	    (*reinterpret_cast<int32_t*>(reinterpret_cast<uintptr_t>(this) + 0x88) != -1)) {
		*reinterpret_cast<int32_t*>(reinterpret_cast<uintptr_t>(this) + 0x88) +=
		    *reinterpret_cast<int32_t*>(reinterpret_cast<uintptr_t>(this) + 0x80);
		return;
	}

	auto client = g_Data.getClientInstance();
	if (client == nullptr) {
		// Unmapped global side-effect: DAT_180840a68 = 0;
		*reinterpret_cast<int32_t*>(reinterpret_cast<uintptr_t>(this) + 0x88) = -1;
		return;
	}

	*reinterpret_cast<int32_t*>(reinterpret_cast<uintptr_t>(this) + 0x88) = getClientWorldTime(client);
}

void Module_18018d820::onEnable() {
	// Binary function: func_0x18018f3a0
	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x88) = 0xffffffff;
}

