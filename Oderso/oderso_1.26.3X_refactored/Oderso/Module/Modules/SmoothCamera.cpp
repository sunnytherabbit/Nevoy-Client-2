// MANUAL
#include "SmoothCamera.h"

#include "../../../Memory/GameData.h"
#include "../../../Utils/HMath.h"

SmoothCamera::SmoothCamera() : IModule(0, Category::VISUAL, "Makes the camera smooth, or not.") {
	registerFloatSetting("Strength", &strength, 0.5f, 0.f, 1.f);
	registerBoolSetting("Animation", &animation, false);
	registerFloatSetting("Animation speed", &animationSpeed, 0.1f, 0.f, 1.f);
	registerBoolSetting("Scroll", &scroll, false);
	registerBoolSetting("Smooth camera", &smoothCamera, false);
}

std::string SmoothCamera::getModuleName() { return "Smooth Camera"; }
std::string SmoothCamera::getTooltip() { 
	// Binary function: func_0x180121e40
	return "Makes the camera smooth, or not.";
}

void SmoothCamera::onKeyUpdate(int key, bool isDown, bool* cancel) {
	// Binary function: func_0x180123a10
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using KeyUpdateFunc = void(*)(void*, int, bool, bool*);
	reinterpret_cast<KeyUpdateFunc>(mod->ptrBase + 0x123a10)(this, key, isDown, cancel);
}

void SmoothCamera::onEnable() {
	// Binary function: func_0x180121fb0
	auto base = reinterpret_cast<uintptr_t>(this);

	if (*reinterpret_cast<bool*>(base + 0x86) == false || *reinterpret_cast<bool*>(base + 0xb0) == false) {
		*reinterpret_cast<float*>(base + 0xac) = 1.0f;
	}

	uint32_t strengthBits = *reinterpret_cast<uint32_t*>(base + 0x80);
	*reinterpret_cast<uint32_t*>(base + 0x9c) = strengthBits;
	*reinterpret_cast<uint64_t*>(base + 0x94) = (uint64_t)strengthBits << 0x20;

	*reinterpret_cast<bool*>(base + 0xb0) = false;

	if (*reinterpret_cast<bool*>(base + 0x84)) {
		auto player = g_Data.getLocalPlayer();
		if (player != nullptr)
			g_Data.setOption(0x159, player, 1.0f, 1.0f);
	}
}

void SmoothCamera::onDisable() {
	// Binary function: func_0x1801222b0
	*reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0xb0) = false;
	*reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(this) + 0xac) = 1.0f;

	if (*reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x84)) {
		auto player = g_Data.getLocalPlayer();
		if (player != nullptr)
			g_Data.setOption(0x15a, player, 1.0f, 1.0f);
	}
}

void SmoothCamera::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1801224c0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x1224c0)(this);
}

void SmoothCamera::slot_27(int arg, char mask, bool* cancel) {
	// Binary function: func_0x180123760
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*, char, bool*);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x123760)(this, mask, cancel);
}

void SmoothCamera::slot_29() {
	// Binary function: func_0x180124190
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*, int, bool);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x124190)(this, 0, false);
}

void SmoothCamera::slot_31(int arg, char mask, bool* cancel) {
	// Binary function: func_0x1801248e0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*, int, char);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x1248e0)(this, arg, mask);
}

