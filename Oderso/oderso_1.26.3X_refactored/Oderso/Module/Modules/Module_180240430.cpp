#include "Module_180240430.h"

Module_180240430::Module_180240430() : IModule(0, Category::CUSTOM, "Module_180240430") {
	registerFloatSetting("Reach", &reachValue, 3.f, 0.f, 10.f);
}

std::string Module_180240430::getModuleName() { return "Module_180240430"; }
std::string Module_180240430::getTooltip() { 
	// Binary function: func_0x180240d30
	return "";
}

void Module_180240430::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x180241330
	auto level = g_Data.getLevel();
	if (level == nullptr) return;

	auto ent = g_Data.getEntityListEntry(level, 0x32);
	if (ent == nullptr) return;

	// Offsets 0x10 and 0x18 hold bounding-box/range values (two floats, 0.01 and 160, plus the reach setting).
	*reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(ent) + 0x18) = this->reachValue;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(ent) + 0x10) = 0x432000003c23d70a;
}

void Module_180240430::onEnable() {
	// Binary function: func_0x180240ec0
	auto level = g_Data.getLevel();
	if (level == nullptr) return;

	auto ent = g_Data.getEntityListEntry(level, 0x32);
	if (ent == nullptr) return;

	this->savedReach = *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(ent) + 0x18);

	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	auto target1 = *reinterpret_cast<void**>(base + 0x83fbb8);
	auto target2 = *reinterpret_cast<void**>(base + 0x83fbc8);

	if (target1 != nullptr) {
		g_Data.patchFromCode(reinterpret_cast<void*>(base + 0x83fbd4), target1, 8);
		g_Data.nopCode(target1, 8);
	}

	if (target2 != nullptr) {
		g_Data.patchFromCode(reinterpret_cast<void*>(base + 0x83fbdc), target2, 3);
		g_Data.patchToCode(target2, reinterpret_cast<void*>(base + 0x6edc94), 3);
	}
}

void Module_180240430::onDisable() {
	// Binary function: func_0x180241170
	auto level = g_Data.getLevel();
	if (level == nullptr) return;

	auto ent = g_Data.getEntityListEntry(level, 0x32);
	if (ent == nullptr) return;

	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(ent) + 0x10) = 0x42dc000041f00000;  // 110.0, 30.0

	float value = this->savedReach;
	if (value < 30.0f || value > 110.0f) {
		auto defaultValue = *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(ent) + 0x1c);
		value = defaultValue;
	}
	*reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(ent) + 0x18) = value;

	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	auto target1 = *reinterpret_cast<void**>(base + 0x83fbe0);
	auto target2 = *reinterpret_cast<void**>(base + 0x83fbf0);

	if (target1 != nullptr)
		g_Data.patchToCode(target1, reinterpret_cast<void*>(base + 0x83fbd4), 8);

	if (target2 != nullptr)
		g_Data.patchToCode(target2, reinterpret_cast<void*>(base + 0x83fbdc), 3);
}

