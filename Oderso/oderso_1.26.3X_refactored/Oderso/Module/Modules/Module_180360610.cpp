#include "Module_180360610.h"

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
	// Binary function: func_0x180362330
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x362330)(this);
}

void Module_180360610::onEnable() {
	// Binary function: func_0x1803622f0
	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x8c) = 0;
	*reinterpret_cast<uint16_t*>(reinterpret_cast<uintptr_t>(this) + 0x90) = 0x101;
	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x84) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x80);
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x94) = 0xfffffe0c00000000;
	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x9c) = 0;
}

void Module_180360610::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1803635e0
	if (g_Data.getClientInstance() != nullptr)
		return;
	// Unmapped global side-effect: DAT_180840a68 = 0;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x94) = 0xfffffe0c00000000;
	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x9c) = 0;
	*reinterpret_cast<uint16_t*>(reinterpret_cast<uintptr_t>(this) + 0x90) = 0x101;
}

void Module_180360610::slot_15() {
	// Binary function: func_0x180362b00
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x362b00)(this);
}

void Module_180360610::toggle(void* event, bool* cancel) {
	// Binary function: func_0x180363450
	if (event == nullptr) return;

	auto mod = g_Data.getModule();
	if (mod == nullptr) return;

	using GetEventKey = int(*)(void*);
	int key = reinterpret_cast<GetEventKey>(mod->ptrBase + 0x1106e0)(event);

	if (key != 0x15 && key != 0x1a) {
		if (key != 0x3d) return;

		*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x94) = 0xfffffe0c00000000;
		*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x9c) = 0;
		*reinterpret_cast<uint16_t*>(reinterpret_cast<uintptr_t>(this) + 0x90) = 0x101;
		return;
	}

	auto player = reinterpret_cast<float*>(g_Data.getLocalPlayer());
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

