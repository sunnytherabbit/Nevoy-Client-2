#include "Module_18018d820.h"

Module_18018d820::Module_18018d820() : IModule(0, Category::CUSTOM, "Module_18018d820") {
	registerIntSetting("sE", &sE, 3, 0, 100);
	registerIntSetting("Time", &timeSetting, 0x1770, 0, 24000);
}

std::string Module_18018d820::getModuleName() {
	return "TargetTime";
}
std::string Module_18018d820::getTooltip() {
	// Manifest tooltip
	return "Target time";
}

void Module_18018d820::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Ported from func_0x18018f3b0: advances targetTime by sE when running, or re-syncs it from the client world time.
	if (this->running && this->targetTime != -1) {
		this->targetTime += this->sE;
		return;
	}

	g_Data.updateClientGlobal();
	this->targetTime = getClientWorldTime(g_Data.getClientInstance());
}

void Module_18018d820::onEnable() {
	// Ported from func_0x18018f3a0: reset targetTime to -1 (uninitialised).
	this->targetTime = -1;
}

