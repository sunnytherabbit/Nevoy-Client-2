#include "Module_180185460.h"

Module_180185460::Module_180185460() : IModule(0, Category::CUSTOM, "Module_180185460") {
	registerFloatSetting("Swing speed", &swingSpeed, 0.f, 0.01f, 1.f);
}

std::string Module_180185460::getModuleName() {
	return "SwingSpeed";
}
std::string Module_180185460::getTooltip() {
	// Manifest tooltip
	return "Swing speed";
}

void Module_180185460::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Kept as direct binary call: TLS-heavy swing-speed logic with unmapped game helpers (func_0x1801888e0).
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x1888e0)(this);
}

void Module_180185460::onEnable() {
	// Kept as direct binary call: TLS and unmapped global setters (func_0x180188590).
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x188590)(this);
}

void Module_180185460::onDisable() {
	// Kept as direct binary call: TLS and unmapped global setters (func_0x180188d50).
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using DisableFunc = void(*)(void*);
	reinterpret_cast<DisableFunc>(mod->ptrBase + 0x188d50)(this);
}

void Module_180185460::setEnabled(void* event, bool* cancel) {
	// Ported from func_0x180188ee0 (key 0x2c toggle).
	if (event == nullptr)
		return;

	int key = getEventKey(event);
	if (key != 0x2c)
		return;

	auto eventType = *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(event) + 0x38);
	if (eventType != 1)
		return;

	this->field_0xb0 = true;
	this->swingSpeed = 0.f;
}

