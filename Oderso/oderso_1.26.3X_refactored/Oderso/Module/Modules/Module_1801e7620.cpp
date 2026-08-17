#include "Module_1801e7620.h"

#include <cstring>
#include <cmath>

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

std::string Module_1801e7620::getModuleName() {
	return "PortalOverlay";
}
std::string Module_1801e7620::getTooltip() {
	// Manifest tooltip
	return "PortalOverlay";
}

void Module_1801e7620::onDisable() {
	// Kept as direct binary call: complex patch restore with TLS-initialized resolve helpers and multiple option objects.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x1ed940)(this);
}

void Module_1801e7620::slot_15() {
	// Kept as direct binary call: complex per-option patch toggling with unmapped resolve/option helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x1ed0a0)(this);
}

void Module_1801e7620::toggle(void* event, bool* cancel) {
	// Ported from func_0x1801ed8c0: cancel the lightning-bolt attack event.
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

