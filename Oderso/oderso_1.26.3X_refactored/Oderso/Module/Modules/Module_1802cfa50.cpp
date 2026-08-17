#include "Module_1802cfa50.h"

Module_1802cfa50::Module_1802cfa50() : IModule(0, Category::CUSTOM, "Module_1802cfa50") {
	registerIntSetting("Radius", &radius, 3, 2, 20);
	registerBoolSetting("Lit color", &litColor, false);
	registerBoolSetting("Show light level", &showLightLevel, false);
}

std::string Module_1802cfa50::getModuleName() {
	return "SpawnColor";
}
std::string Module_1802cfa50::getTooltip() {
	// Manifest tooltip
	return "Spawn color";
}

void Module_1802cfa50::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Kept as direct binary call: func_0x1802d2a10 searches chunks around the player,
	// evaluates light levels, and fills an internal block list with many unmapped helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x2d2a10)(this);
}

void Module_1802cfa50::onEnable() {
	// Ported from func_0x1802d29e0: reset the cached spawn region to the default "empty" state.
	*reinterpret_cast<uint16_t*>(reinterpret_cast<uintptr_t>(this) + 0x98) = 0x101;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x9c) = 0xfffffe0c00000000;
	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0xa4) = 0;
}

void Module_1802cfa50::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Ported from func_0x1802d3f00: clear the cached spawn region when no client instance is active.
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
	// Kept as direct binary call: func_0x1802d33a0 walks the internal block list and renders
	// colored spawn indicators using unmapped tessellator/font helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x2d33a0)(this);
}

void Module_1802cfa50::toggle(void* event, bool* cancel) {
	// Ported from func_0x1802d3d60: key 0x15 sets the spawn region from the player's position;
	// key 0x3d clears it.  Uses SDK getEventKey and raw player/this offsets to match the binary layout.
	if (event == nullptr) return;

	int key = getEventKey(event);
	if (key == -1) return;

	auto player = reinterpret_cast<float*>(g_Data.getLocalPlayer());
	if (player == nullptr) return;

	auto base = reinterpret_cast<uintptr_t>(this);

	if (key == 0x15) {
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
	} else if (key == 0x3d) {
		*reinterpret_cast<uint64_t*>(base + 0x9c) = 0xfffffe0c00000000;
		*reinterpret_cast<int*>(base + 0xa4) = 0;
		*reinterpret_cast<uint8_t*>(base + 0x98) = 1;
		if (*reinterpret_cast<int64_t*>(base + 0x80) != *reinterpret_cast<int64_t*>(base + 0x88))
			*reinterpret_cast<int64_t*>(base + 0x88) = *reinterpret_cast<int64_t*>(base + 0x80);
		*reinterpret_cast<uint8_t*>(base + 0x99) = 1;
	}
}
