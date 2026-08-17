#include "Module_180360610.h"

#include <cmath>

Module_180360610::Module_180360610() : IModule(0, Category::CUSTOM, "Module_180360610") {
	registerIntSetting("Block radius", &blockRadius, 16, 1, 20);
}

std::string Module_180360610::getModuleName() {
	return "BlockRadius";
}
std::string Module_180360610::getTooltip() {
	// Manifest tooltip
	return "Block radius";
}

void Module_180360610::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Kept as direct binary call: complex per-frame block/entity search using unmapped world helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x362330)(this);
}

void Module_180360610::onEnable() {
	// Ported from func_0x1803622f0: resets the block-radius search state.
	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x8c) = 0;
	*reinterpret_cast<uint16_t*>(reinterpret_cast<uintptr_t>(this) + 0x90) = 0x101;
	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x84) = this->blockRadius;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x94) = 0xfffffe0c00000000;
	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x9c) = 0;
}

void Module_180360610::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Ported from func_0x1803635e0: mirrors DAT_180840a60/180840a68 update and resets state when no client is active.
	g_Data.updateClientGlobal();
	if (g_Data.getClientInstancePtr() != nullptr)
		return;

	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x94) = 0xfffffe0c00000000;
	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x9c) = 0;
	*reinterpret_cast<uint16_t*>(reinterpret_cast<uintptr_t>(this) + 0x90) = 0x101;
}

void Module_180360610::slot_15() {
	// Kept as direct binary call: complex render/entity-list traversal using unmapped scene helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x362b00)(this);
}

void Module_180360610::toggle(void* event, bool* cancel) {
	// Ported from func_0x180363450: hotkey reset (0x3d) or AABB capture from the local-player position.
	if (event == nullptr) return;

	int key = getEventKey(event);

	if (key != 0x15 && key != 0x1a) {
		if (key != 0x3d) return;

		*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x94) = 0xfffffe0c00000000;
		*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x9c) = 0;
		*reinterpret_cast<uint16_t*>(reinterpret_cast<uintptr_t>(this) + 0x90) = 0x101;
		return;
	}

	g_Data.updateClientGlobal();
	auto player = reinterpret_cast<float*>(g_Data.getLocalPlayerPtr());
	if (player == nullptr) return;

	int rad = this->blockRadius;
	int ix = (int)std::round(player[0]) - rad;
	int iz = (int)std::round(player[1]) - rad;

	if (ix <= *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(event) + 0x30) &&
	    iz <= *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(event) + 0x34)) {
		int half = rad * 2;
		int iy = (int)std::round(player[2]) - rad;

		if (*reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(event) + 0x38) < iy + half &&
		    *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(event) + 0x30) < ix + half &&
		    iy <= *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(event) + 0x38) &&
		    *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(event) + 0x34) < iz + half) {
			*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x94) =
			    ((uint64_t)(uint32_t)iz << 32) | (uint32_t)ix;
			*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x9c) = iy;
			*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x91) = 1;
		}
	}
}

