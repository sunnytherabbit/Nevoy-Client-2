#include "Module_1801e7620.h"

#include <cstring>

Module_1801e7620::Module_1801e7620() : IModule(0, Category::CUSTOM, "Module_1801e7620") {
	registerBoolSetting("Entities", &entities, false);
	registerBoolSetting("Items", &items, false);
	registerBoolSetting("uUM", &uUM, false);
	registerBoolSetting("HUD", &hUD, false);
	registerBoolSetting("Particles", &particles, false);
	registerBoolSetting("Sky", &sky, false);
	registerBoolSetting("Weather", &weather, false);
	registerBoolSetting("PortalOverlay", &portalOverlay, false);
	registerBoolSetting("Fire", &fire, false);
	registerBoolSetting("Lightning", &lightning, false);
}

std::string Module_1801e7620::getModuleName() { return "Module_1801e7620"; }
std::string Module_1801e7620::getTooltip() { 
	// Binary function: func_0x1801eb5b0
	return "";
}

void Module_1801e7620::onDisable() {
	// Binary function: func_0x1801ed940
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	using ResolvePatch = __int64(*)(void*);
	auto resolve1 = reinterpret_cast<ResolvePatch>(base + 0x1ed700);
	auto resolve2 = reinterpret_cast<ResolvePatch>(base + 0x1ed7e0);

	static void* patch1 = nullptr;
	static void* patch2 = nullptr;
	if (patch1 == nullptr)
		patch1 = reinterpret_cast<void*>(resolve1(reinterpret_cast<void*>(base + 0x840f80)));
	if (patch2 == nullptr)
		patch2 = reinterpret_cast<void*>(resolve2(reinterpret_cast<void*>(base + 0x840f80)));

	auto tbase = reinterpret_cast<uintptr_t>(this);

	if (*reinterpret_cast<bool*>(tbase + 0xb0)) {
		g_Data.patchToCode(patch1, reinterpret_cast<void*>(base + 0x83fa96), 5);
		*reinterpret_cast<bool*>(tbase + 0xb0) = false;
	}

	if (*reinterpret_cast<bool*>(tbase + 0xb1)) {
		g_Data.patchToCode(patch2, reinterpret_cast<void*>(base + 0x83fa9b), 5);
		*reinterpret_cast<bool*>(tbase + 0xb1) = false;
	}

	for (auto off : {0x80, 0x88, 0x90, 0x98}) {
		auto obj = *reinterpret_cast<void**>(tbase + off);
		if (obj == nullptr) continue;
		auto inner = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(obj) + 8);
		if (inner == nullptr) continue;
		if (*reinterpret_cast<int32_t*>(reinterpret_cast<uintptr_t>(inner) + 0x1d4) == 0)
			*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(obj) + 0x10) = 0;
	}
}

void Module_1801e7620::slot_15() {
	// Binary function: func_0x1801ed0a0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x1ed0a0)(this);
}

void Module_1801e7620::toggle(void* event, bool* cancel) {
	// Binary function: func_0x1801ed8c0
	if (cancel == nullptr)
		return;
	if (!this->field_0xbb || event == nullptr)
		return;

	int key = getEventKey(event);
	if (key != 0xd)
		return;

	auto field_c8 = *reinterpret_cast<__int64*>(reinterpret_cast<uintptr_t>(event) + 200);
	if (field_c8 != 0xe)
		return;

	// The event contains a std::string at offset 0xb8; check for "lightning_bolt".
	auto size = *reinterpret_cast<unsigned long long*>(reinterpret_cast<uintptr_t>(event) + 0xd0);
	const char* str = (size < 0x10)
	    ? reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(event) + 0xb8)
	    : *reinterpret_cast<char**>(reinterpret_cast<uintptr_t>(event) + 0xb8);

	if (size == 14 && memcmp(str, "lightning_bolt", 14) == 0)
		*cancel = true;
}

