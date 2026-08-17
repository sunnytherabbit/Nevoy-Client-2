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
	// Kept as direct binary call: func_0x1802d4570 performs TLS-encrypted string setup,
	// a binary heap allocation for a near-code buffer, and resolves several unmapped global code targets.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x2d4570)(this);
}

void Module_1802d3fd0::onDisable() {
	// Ported from func_0x1802d4a50: restore the 4 bytes saved by onEnable and free the near-code buffer.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	auto target = *reinterpret_cast<uintptr_t*>(base + 0x83fca8);
	if (target != 0) {
		g_Data.patchToCode(reinterpret_cast<void*>(target), &this->savedCode, 4);
	}

	if (this->codeBuf != nullptr) {
		g_Data.freeNearCode(this->codeBuf);
		this->codeBuf = nullptr;
	}
}

