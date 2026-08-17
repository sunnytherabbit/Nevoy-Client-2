#include "Module_1802cfa50.h"

Module_1802cfa50::Module_1802cfa50() : IModule(0, Category::CUSTOM, "Module_1802cfa50") {
	registerIntSetting("Radius", &radius, 3, 2, 20);
	registerBoolSetting("Lit color", &litColor, false);
	registerBoolSetting("Show light level", &showLightLevel, false);
}

std::string Module_1802cfa50::getModuleName() { return "Module_1802cfa50"; }
std::string Module_1802cfa50::getTooltip() { 
	// Binary function: func_0x1802d2850
	return "";
}

void Module_1802cfa50::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1802d2a10
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x2d2a10)(this);
}

void Module_1802cfa50::onEnable() {
	// Binary function: func_0x1802d29e0
	*reinterpret_cast<uint16_t*>(reinterpret_cast<uintptr_t>(this) + 0x98) = 0x101;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x9c) = 0xfffffe0c00000000;
	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0xa4) = 0;
}

void Module_1802cfa50::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1802d3f00
	if (g_Data.getClientInstance() != nullptr)
		return;
	// Unmapped global side-effect: DAT_180840a68 = 0;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x9c) = 0xfffffe0c00000000;
	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0xa4) = 0;
	if (*reinterpret_cast<int64_t*>(reinterpret_cast<uintptr_t>(this) + 0x80) != *reinterpret_cast<int64_t*>(reinterpret_cast<uintptr_t>(this) + 0x88))
		*reinterpret_cast<int64_t*>(reinterpret_cast<uintptr_t>(this) + 0x88) = *reinterpret_cast<int64_t*>(reinterpret_cast<uintptr_t>(this) + 0x80);
	*reinterpret_cast<uint16_t*>(reinterpret_cast<uintptr_t>(this) + 0x98) = 0x101;
}

void Module_1802cfa50::slot_15() {
	// Binary function: func_0x1802d33a0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x2d33a0)(this);
}

void Module_1802cfa50::toggle(void* event, bool* cancel) {
	// Binary function: func_0x1802d3d60
	if (event == nullptr) return;

	auto mod = g_Data.getModule();
	if (mod == nullptr) return;

	using GetEventKey = int(*)(void*);
	int key = reinterpret_cast<GetEventKey>(mod->ptrBase + 0x1106e0)(event);

	auto base = reinterpret_cast<uintptr_t>(this);

	if (key == 0x15) {
		auto player = reinterpret_cast<float*>(g_Data.getLocalPlayer());
		if (player == nullptr) return;

		int rad = *reinterpret_cast<int*>(base + 0xa8);
		int ix = (int)std::round(player[0]) - rad;
		int iz = (int)std::round(player[1]) - rad;

		if (ix <= *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(event) + 0x30) &&
		    iz <= *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(event) + 0x34)) {
			int iy = (int)std::round(player[2]) - rad;
			if (*reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(event) + 0x38) < iy + rad * 2 &&
			    iy <= *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(event) + 0x38) &&
			    *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(event) + 0x34) < iz + 4 &&
			    *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(event) + 0x30) < ix + rad * 2) {
				*reinterpret_cast<uint64_t*>(base + 0x9c) = ((uint64_t)(uint32_t)iz << 32) | (uint32_t)ix;
				*reinterpret_cast<int*>(base + 0xa4) = iy;
				*reinterpret_cast<uint8_t*>(base + 0x98) = 1;
			}
		}
	} else {
		int key2 = reinterpret_cast<GetEventKey>(mod->ptrBase + 0x1106e0)(event);
		if (key2 == 0x3d) {
			*reinterpret_cast<uint64_t*>(base + 0x9c) = 0xfffffe0c00000000;
			*reinterpret_cast<int*>(base + 0xa4) = 0;
			*reinterpret_cast<uint8_t*>(base + 0x98) = 1;
			if (*reinterpret_cast<int64_t*>(base + 0x80) != *reinterpret_cast<int64_t*>(base + 0x88))
				*reinterpret_cast<int64_t*>(base + 0x88) = *reinterpret_cast<int64_t*>(base + 0x80);
			*reinterpret_cast<uint8_t*>(base + 0x99) = 1;
		}
	}
}

