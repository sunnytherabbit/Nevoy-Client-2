#include "Module_1801380b0.h"

Module_1801380b0::Module_1801380b0() : IModule(0, Category::COMBAT, "") {
	registerIntSetting("Opacity", &opacity, opacity, 0, 0xFF);

	registerBoolSetting("Air", &air, air);
	registerBoolSetting("Wrong", &wrong, wrong);
	registerBoolSetting("Ignore a", &ignoreA, ignoreA);
	registerBoolSetting("field_0x601", &field_0x601, field_0x601);

	registerIntSetting("Offset X", &offsetX, offsetX, 0, 1);
	registerIntSetting("Offset Y", &offsetY, offsetY, 0, 1);
	registerIntSetting("Offset Z", &offsetZ, offsetZ, 0, 1);

	// The binary constructor also registers six 4-byte settings at 0x61c-0x630
	// via func_0x1801d3800 (valueType 8). IModule has no matching registration
	// helper, so field_0x61c..field_0x630 are left unregistered as layout
	// placeholders.
	//
	// Similarly, the Color objects at 0x90/0xa0/0xb0 are registered in the
	// binary via func_0x1801cd600; IModule has no registerColorSetting, so
	// airColor/wrongColor/mixColor are also left unregistered.

	registerIntSetting("Reset on load", &resetOnLoad, resetOnLoad, -1, 1);
	registerIntSetting("Max heigY7", &maxHeigy7, maxHeigy7, -1, 1);
	registerIntSetting("Max leng", &maxLeng, maxLeng, -1, 1);

	registerIntSetting("X", &x, x, -30000000, 30000000);
	registerIntSetting("Y", &y, y, -30000000, 30000000);
	registerIntSetting("Z", &z, z, -30000000, 30000000);
	registerIntSetting("Rot", &rot, rot, 0, 270);
}

std::string Module_1801380b0::getModuleName() { return "Module_1801380b0"; }
std::string Module_1801380b0::getTooltip() { 
	// Binary function: func_0x180142430
	return "";
}

void Module_1801380b0::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderT = void(*)(void*);
	reinterpret_cast<PreRenderT>(mod->ptrBase + 0x143d70)(this);
}

void Module_1801380b0::onAttack(int attackButton, bool isDown, bool* cancel) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using AttackT = void(*)(void*, int, uint8_t, bool*);
	reinterpret_cast<AttackT>(mod->ptrBase + 0x148e10)(this, attackButton, static_cast<uint8_t>(isDown), cancel);
}

void Module_1801380b0::onEnable() {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using OnEnableT = void(*)(void*);
	reinterpret_cast<OnEnableT>(mod->ptrBase + 0x1425c0)(this);
}

void Module_1801380b0::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderT = void(*)(void*);
	reinterpret_cast<PostRenderT>(mod->ptrBase + 0x1443d0)(this);
}

void Module_1801380b0::slot_15() {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using Slot15T = void(*)(void*);
	reinterpret_cast<Slot15T>(mod->ptrBase + 0x144470)(this);
}

void Module_1801380b0::toggle(void* event, bool* cancel) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using ToggleT = void(*)(void*, void*);
	reinterpret_cast<ToggleT>(mod->ptrBase + 0x148c20)(this, event);
}

void Module_1801380b0::slot_30(int arg, char mask, bool* cancel) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using Slot30T = void(*)(void*, uint32_t, uint8_t, bool*);
	reinterpret_cast<Slot30T>(mod->ptrBase + 0x148ec0)(this, static_cast<uint32_t>(arg), static_cast<uint8_t>(mask), cancel);
}
