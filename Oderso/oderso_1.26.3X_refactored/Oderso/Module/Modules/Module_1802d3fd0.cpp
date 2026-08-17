#include "Module_1802d3fd0.h"

Module_1802d3fd0::Module_1802d3fd0() : IModule(0, Category::CUSTOM, "Module_1802d3fd0") {
	// No settings extracted yet
}

std::string Module_1802d3fd0::getModuleName() { return "Module_1802d3fd0"; }
std::string Module_1802d3fd0::getTooltip() {
	// No manifest description
	return "";
}

void Module_1802d3fd0::onEnable() {
	// Binary function: func_0x1802d4570
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x2d4570)(this);
}

void Module_1802d3fd0::onDisable() {
	// Binary function: func_0x1802d4a50
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	auto target = *reinterpret_cast<uintptr_t*>(base + 0x83fca8);
	if (target != 0) {
		auto saved = *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x80);
		g_Data.patchToCode(reinterpret_cast<void*>(target), &saved, 4);
	}

	auto buf = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(this) + 0x88);
	if (buf != nullptr) {
		g_Data.freeNearCode(buf);
		*reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(this) + 0x88) = nullptr;
	}
}

