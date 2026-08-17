// MANUAL
#include "NoFire.h"

NoFire::NoFire() : IModule(0, Category::VISUAL, "Disables the fire overlay.") {
	registerBoolSetting("NoFire", &noFire, false);
	registerFloatSetting("Height", &height, 1.5f, 0.f, 3.f);
}

std::string NoFire::getModuleName() { return "NoFire"; }
std::string NoFire::getTooltip() {
	return "Disables the fire overlay.";
}

void NoFire::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Ported from func_0x1802d64c0: toggle the 5-byte fire overlay patch based on
	// the noFire setting, caching the last state to avoid repeated patches.
	if (this->noFire == this->lastNoFire)
		return;
	this->lastNoFire = this->noFire;

	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	auto target = *reinterpret_cast<void**>(base + 0x83fd08);
	if (target == nullptr) return;

	if (this->noFire) {
		g_Data.nopCode(target, 5);
	} else {
		g_Data.patchToCode(target, reinterpret_cast<void*>(base + 0x83fccc), 5);
	}
}

void NoFire::onEnable() {
	// Ported from func_0x1802d5fa0: install the fire overlay hook / code patch.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	// Stop any existing hook instance.
	auto hookPtr = *reinterpret_cast<void**>(base + 0x83fcb8);
	if (hookPtr != nullptr)
	    g_Data.freeNearCode(hookPtr);

	// Allocate a 4-byte code hook buffer and install the jump.
	auto code = *reinterpret_cast<uintptr_t*>(base + 0x83fce8);
	if (code != 0) {
	    g_Data.patchFromCode(reinterpret_cast<void*>(base + 0x83fccc), reinterpret_cast<void*>(code), 5);
	    auto buf = g_Data.allocNearCode(code, 5);
	    if (buf != nullptr) {
	        *reinterpret_cast<uint32_t*>(buf) = 0;
	        int32_t relOffset = (int32_t)((uintptr_t)buf - code - 5);
	        g_Data.patchToCode(reinterpret_cast<void*>(code), &relOffset, 4);
	        *reinterpret_cast<void**>(base + 0x83fcb8) = buf;
	    }
	}
}

void NoFire::onDisable() {
	// Ported from func_0x1802d63f0: remove the fire overlay hook and restore bytes.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	auto hookPtr = *reinterpret_cast<void**>(base + 0x83fcb8);
	if (hookPtr != nullptr)
	    g_Data.freeNearCode(hookPtr);

	auto target = *reinterpret_cast<void**>(base + 0x83fcf8);
	if (target != nullptr)
	    g_Data.patchToCode(target, reinterpret_cast<void*>(base + 0x83fccc), 5);
}

