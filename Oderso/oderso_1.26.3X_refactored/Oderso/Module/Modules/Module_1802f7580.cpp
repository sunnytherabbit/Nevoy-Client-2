#include "Module_1802f7580.h"
#include <cmath>
#include <cstdint>

Module_1802f7580::Module_1802f7580() : IModule(0, Category::CUSTOM, "Module_1802f7580") {
	registerBoolSetting("Show grid", &showGrid, false);
}

std::string Module_1802f7580::getModuleName() { return "Module_1802f7580"; }
std::string Module_1802f7580::getTooltip() { 
	// Binary function: func_0x1802f9b40
	return "";
}

void Module_1802f7580::onEnable() {
	// Binary function: func_0x1802f9cd0
	*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x81) =
	    *reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x80);
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x94) =
	    *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x84);
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x9c) =
	    *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x8c);
	*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x83) =
	    *reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x82);
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0xb4) =
	    *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0xa4);
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0xbc) =
	    *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0xac);
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0xd4) =
	    *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0xc4);
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0xdc) =
	    *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0xcc);
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0xf4) =
	    *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0xe4);
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0xfc) =
	    *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0xec);
	*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x104) = 1;

	auto player = g_Data.getLocalPlayer();
	if (player == nullptr) {
		// Unmapped global side-effect: DAT_180840a68 = 0;
		return;
	}

	auto pos = player->getPos();
	if (pos != nullptr) {
		auto fx = std::floor(pos->x);
		auto fz = std::floor(pos->z);
		int chunkX = static_cast<int>(fx) >> 4;
		int chunkZ = static_cast<int>(fz) >> 4;
		*reinterpret_cast<int64_t*>(reinterpret_cast<uintptr_t>(this) + 0x114) =
		    (static_cast<int64_t>(chunkZ) << 32) | static_cast<uint32_t>(chunkX);
	}
}

void Module_1802f7580::slot_15() {
	// Binary function: func_0x1802f9e60
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x2f9e60)(this);
}

