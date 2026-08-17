#pragma once
#ifndef ODERSO_MODULE_MODULE_1801380B0_H
#define ODERSO_MODULE_MODULE_1801380B0_H

#include <cstddef>
#include <cstdint>
#include "../../../Horion/Module/Modules/Module.h"
#include "../../../Utils/HMath.h"

class Module_1801380b0 : public IModule {
public:
	Module_1801380b0();
	~Module_1801380b0() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onAttack(int attackButton, bool isDown, bool* cancel = nullptr) override;

	virtual void slot_15() override;
	virtual void toggle(void* event = nullptr, bool* cancel = nullptr) override;
	virtual void slot_30(int arg = 0, char mask = 0, bool* cancel = nullptr) override;

	// --- 0x80: Opacity (default 0x80, min 0, max 0xff) ---
	int opacity = 0x80;
	int field_0x84 = 0x80;

	// --- 0x88: bool settings ---
	bool air = true;
	bool wrong = true;
	bool field_0x8a = true;
	bool field_0x8b = true;
	char field_0x8c = 0;
	bool ignoreA = false;
	char _pad_0x8e_0x90[2] = {};

	// --- 0x90: Color objects (unregistered; IModule has no registerColorSetting) ---
	float airColor[4] = {1.f, 1.f, 1.f, 0.f};
	float wrongColor[4] = {1.f, 0.f, 1.f, 0.f};
	float mixColor[4] = {0.5f, 1.f, 1.f, 0.f};

	// Padding up to the first binary std::string at 0x128.
	char _pad_0xc0_0x128[0x128 - 0xc0] = {};

	// Binary constructor calls func_0x1806ab010 on these two strings (0x12e chars, filled with 0).
	std::string field_0x128 = std::string(0x12e, '\0');

	char _pad_0x148_0x378[0x378 - 0x148] = {};

	std::string field_0x378 = std::string(0x12e, '\0');

	char _pad_0x398_0x568[0x568 - 0x398] = {};

	// 0x568: pattern string used by onPreRender/toggle.
	std::string pattern;

	char _pad_0x588_0x5c8[0x5c8 - 0x588] = {};

	// 0x5c8: state flag written by onPreRender.
	bool field_0x5c8 = false;
	char _pad_0x5c9_0x5d0[0x5d0 - 0x5c9] = {};

	// 0x5d0 / 0x5e8: position and block vectors used by toggle/onPreRender.
	std::vector<vec3_ti> positions;
	std::vector<unsigned char> blocks;

	// 0x600 / 0x601: binary leaves 0x600 as 0x00, 0x601 as 0x01.
	char field_0x600 = 0;
	bool resetOnLoad = true;
	char _pad_0x602_0x604[2] = {};

	// --- 0x604: Offset X/Y/Z (default 0, min 0, max 1) ---
	int offsetX = 0;
	char _pad_0x608_0x60c[4] = {};
	int offsetY = 0;
	char _pad_0x610_0x614[4] = {};
	int offsetZ = 0;
	char _pad_0x618_0x61c[4] = {};

	// 0x61c-0x630: six 4-byte settings registered by func_0x1801d3800.
	// IModule has no matching registration helper, so they are left as layout placeholders.
	int field_0x61c = 0;
	int field_0x620 = 0;
	int field_0x624 = 0;
	int field_0x628 = 0;
	int field_0x62c = 0;
	int field_0x630 = 0;

	// --- 0x634: Max width / height / length (default 1, min 1, max 4096) ---
	int maxWidth = 1;
	char _pad_0x638_0x63c[4] = {};
	int maxHeight = 1;
	char _pad_0x640_0x644[4] = {};
	int maxLength = 1;
	char _pad_0x648_0x680[0x680 - 0x648] = {};

	// 0x680/0x681: onPostRender writes 0 to 0x680; onPreRender reads 0x681.
	char field_0x680 = 0;
	bool field_0x681 = false;
	char _pad_0x682_0x688[0x688 - 0x682] = {};

	// 0x688: target/structure name string used by onEnable.
	std::string structureName;

	// --- 0x6a8: X / Y / Z / Rot (default 0) ---
	int x = 0;
	int y = 0;
	int z = 0;
	int rot = 0;

	// 0x6bc: state flag written by onEnable.
	char _pad_0x6b8_0x6bc[0x6bc - 0x6b8] = {};
	bool field_0x6bc = false;
	char _pad_0x6bd_0x6c0[0x6c0 - 0x6bd] = {};

	// Layout sanity checks (these fire at compile time if the offsets drift).
	static_assert(offsetof(Module_1801380b0, opacity) == 0x80, "opacity offset");
	static_assert(offsetof(Module_1801380b0, air) == 0x88, "air offset");
	static_assert(offsetof(Module_1801380b0, ignoreA) == 0x8d, "ignoreA offset");
	static_assert(offsetof(Module_1801380b0, airColor) == 0x90, "airColor offset");
	static_assert(offsetof(Module_1801380b0, field_0x128) == 0x128, "field_0x128 offset");
	static_assert(offsetof(Module_1801380b0, field_0x378) == 0x378, "field_0x378 offset");
	static_assert(offsetof(Module_1801380b0, pattern) == 0x568, "pattern offset");
	static_assert(offsetof(Module_1801380b0, positions) == 0x5d0, "positions offset");
	static_assert(offsetof(Module_1801380b0, blocks) == 0x5e8, "blocks offset");
	static_assert(offsetof(Module_1801380b0, resetOnLoad) == 0x601, "resetOnLoad offset");
	static_assert(offsetof(Module_1801380b0, offsetX) == 0x604, "offsetX offset");
	static_assert(offsetof(Module_1801380b0, field_0x61c) == 0x61c, "field_0x61c offset");
	static_assert(offsetof(Module_1801380b0, maxWidth) == 0x634, "maxWidth offset");
	static_assert(offsetof(Module_1801380b0, field_0x680) == 0x680, "field_0x680 offset");
	static_assert(offsetof(Module_1801380b0, field_0x681) == 0x681, "field_0x681 offset");
	static_assert(offsetof(Module_1801380b0, structureName) == 0x688, "structureName offset");
	static_assert(offsetof(Module_1801380b0, x) == 0x6a8, "x offset");
	static_assert(offsetof(Module_1801380b0, rot) == 0x6b4, "rot offset");
	static_assert(offsetof(Module_1801380b0, field_0x6bc) == 0x6bc, "field_0x6bc offset");
	static_assert(sizeof(Module_1801380b0) >= 0x6c0, "class size");
};

#endif
