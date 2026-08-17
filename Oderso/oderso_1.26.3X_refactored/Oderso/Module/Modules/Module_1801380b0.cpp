#include "Module_1801380b0.h"

Module_1801380b0::Module_1801380b0() : IModule(0, Category::COMBAT, "mod.schematica.name") {
	registerIntSetting("Opacity", &opacity, opacity, 0, 0xFF);

	registerBoolSetting("Air", &air, air);
	registerBoolSetting("Wrong", &wrong, wrong);
	registerBoolSetting("Ignore a", &ignoreA, ignoreA);

	// The binary registers the 0x90/0xa0/0xb0 Color objects via func_0x1801cd600.
	// IModule has no registerColorSetting, so expose each component as a float.
	registerFloatSetting("Air color1 R", &airColor[0], airColor[0], 0.f, 1.f);
	registerFloatSetting("Air color1 G", &airColor[1], airColor[1], 0.f, 1.f);
	registerFloatSetting("Air color1 B", &airColor[2], airColor[2], 0.f, 1.f);
	registerFloatSetting("Air color1 A", &airColor[3], airColor[3], 0.f, 1.f);
	registerFloatSetting("Wrong color R", &wrongColor[0], wrongColor[0], 0.f, 1.f);
	registerFloatSetting("Wrong color G", &wrongColor[1], wrongColor[1], 0.f, 1.f);
	registerFloatSetting("Wrong color B", &wrongColor[2], wrongColor[2], 0.f, 1.f);
	registerFloatSetting("Wrong color A", &wrongColor[3], wrongColor[3], 0.f, 1.f);
	registerFloatSetting("Mix color R", &mixColor[0], mixColor[0], 0.f, 1.f);
	registerFloatSetting("Mix color G", &mixColor[1], mixColor[1], 0.f, 1.f);
	registerFloatSetting("Mix color B", &mixColor[2], mixColor[2], 0.f, 1.f);
	registerFloatSetting("Mix color A", &mixColor[3], mixColor[3], 0.f, 1.f);

	registerBoolSetting("Reset on load", &resetOnLoad, resetOnLoad);

	registerIntSetting("Offset X", &offsetX, offsetX, 0, 1);
	registerIntSetting("Offset Y", &offsetY, offsetY, 0, 1);
	registerIntSetting("Offset Z", &offsetZ, offsetZ, 0, 1);

	// The binary constructor also registers six 4-byte settings at 0x61c-0x630
	// via func_0x1801d3800 (valueType 8). These use the same names as the
	// Offset/Max int settings (Offset X/Y/Z and Max width/height/length) but
	// IModule has no matching registration helper for valueType 8, so
	// field_0x61c..field_0x630 are kept as layout placeholders.

	registerIntSetting("Max width", &maxWidth, maxWidth, 1, 1);
	registerIntSetting("Max height", &maxHeight, maxHeight, 1, 1);
	registerIntSetting("Max length", &maxLength, maxLength, 1, 1);

	registerIntSetting("X", &x, x, -30000000, 30000000);
	registerIntSetting("Y", &y, y, -30000000, 30000000);
	registerIntSetting("Z", &z, z, -30000000, 30000000);
	registerIntSetting("Rot", &rot, rot, 0, 270);
}

std::string Module_1801380b0::getModuleName() {
	return "Schematica";
}

std::string Module_1801380b0::getTooltip() {
	// Manifest tooltip
	return "Reset on load";
}

void Module_1801380b0::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Kept as direct binary call: onPreRender does a full schematic block scan
	// using unmapped BlockSource / Level / Actor vtable helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderT = void(*)(void*);
	reinterpret_cast<PreRenderT>(mod->ptrBase + 0x143d70)(this);
}

void Module_1801380b0::onAttack(int attackButton, bool isDown, bool* cancel) {
	// Kept as direct binary call: onAttack uses unmapped attack-button and
	// placement-rotation helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using AttackT = void(*)(void*, int, uint8_t, bool*);
	reinterpret_cast<AttackT>(mod->ptrBase + 0x148e10)(this, attackButton, static_cast<uint8_t>(isDown), cancel);
}

void Module_1801380b0::onEnable() {
	// Kept as direct binary call: onEnable sets up schematic state through
	// unmapped file / structure loading helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using OnEnableT = void(*)(void*);
	reinterpret_cast<OnEnableT>(mod->ptrBase + 0x1425c0)(this);
}

void Module_1801380b0::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Kept as direct binary call: onPostRender renders 3D schematic boxes with
	// unmapped tessellator / GL helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderT = void(*)(void*);
	reinterpret_cast<PostRenderT>(mod->ptrBase + 0x1443d0)(this);
}

void Module_1801380b0::slot_15() {
	// Kept as direct binary call: slot_15 reloads the target structure with
	// unmapped IO helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using Slot15T = void(*)(void*);
	reinterpret_cast<Slot15T>(mod->ptrBase + 0x144470)(this);
}

void Module_1801380b0::toggle(void* event, bool* cancel) {
	// Kept as direct binary call: toggle places/removes schematic blocks through
	// unmapped game-world interaction helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using ToggleT = void(*)(void*, void*);
	reinterpret_cast<ToggleT>(mod->ptrBase + 0x148c20)(this, event);
}

void Module_1801380b0::slot_30(int arg, char mask, bool* cancel) {
	// Kept as direct binary call: slot_30 handles key/mask input through unmapped
	// input-translation helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using Slot30T = void(*)(void*, uint32_t, uint8_t, bool*);
	reinterpret_cast<Slot30T>(mod->ptrBase + 0x148ec0)(this, static_cast<uint32_t>(arg), static_cast<uint8_t>(mask), cancel);
}
