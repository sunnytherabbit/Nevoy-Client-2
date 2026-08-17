#include "Module_1801dd4b0.h"

Module_1801dd4b0::Module_1801dd4b0() : IModule(0, Category::CUSTOM, "Module_1801dd4b0") {
	registerBoolSetting("Third person", &thirdPerson, false);
	registerBoolSetting("sE", &sE, false);
	registerFloatSetting("Adjust Y offset", &adjustYOffset, 0.f, -0.5f, 0.5f);
	registerBoolSetting("No background", &noBackground, false);
}

std::string Module_1801dd4b0::getModuleName() {
	return "NoBackground";
}
std::string Module_1801dd4b0::getTooltip() {
	// Manifest tooltip
	return "No background";
}

void Module_1801dd4b0::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1801e1e40
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	auto level = g_Data.getLevel();
	using IsLevelValid = int(*)(void*);
	auto isValid = reinterpret_cast<IsLevelValid>(base + 0x10ce80);
	int levelFlag = (level != nullptr) ? isValid(level) : 0;

	bool f0x80 = *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x80);
	bool f0x81 = *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x81);
	bool f0x82 = *reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x82);
	bool f0x9c = this->field_0x9c;

	auto g0x83f9b4 = reinterpret_cast<uint8_t*>(base + 0x83f9b4);
	auto g0x83f9b5 = reinterpret_cast<uint8_t*>(base + 0x83f9b5);
	auto g0x83f9b6 = reinterpret_cast<uint8_t*>(base + 0x83f9b6);
	auto g0x83f9b7 = reinterpret_cast<uint8_t*>(base + 0x83f9b7);

	auto patch18 = *reinterpret_cast<void**>(base + 0x83fa18);
	auto patch20 = *reinterpret_cast<void**>(base + 0x83fa20);
	auto patch28 = *reinterpret_cast<void**>(base + 0x83fa28);
	auto patch30 = *reinterpret_cast<void**>(base + 0x83fa30);
	auto patch38 = *reinterpret_cast<void**>(base + 0x83fa38);
	auto patch40 = *reinterpret_cast<void**>(base + 0x83fa40);

	if ((levelFlag == 0) || (*g0x83f9b4 != f0x80)) {
		*g0x83f9b4 = (levelFlag != 0) & f0x80;
		if (*g0x83f9b4 == 0) {
			if (patch18 != nullptr)
				g_Data.patchToCode(patch18, reinterpret_cast<void*>(base + 0x83fa48), 2);
			if (*g0x83f9b5 != f0x82) {
				goto LAB_1801e1efc;
			}
			goto LAB_1801e1e7e;
		}
		if (patch18 != nullptr)
			g_Data.nopCode(patch18, 2);
		if (*g0x83f9b5 == f0x82) {
			goto LAB_1801e1e7e;
		}
LAB_1801e1efc:
		*g0x83f9b5 = f0x82;
		if (f0x82) {
			if (patch20 != nullptr)
				g_Data.nopCode(patch20, 6);
			if (*g0x83f9b6 == f0x9c) {
				goto LAB_1801e1e91;
			}
			goto LAB_1801e1f51;
		}
		if (patch20 != nullptr)
			g_Data.patchToCode(patch20, reinterpret_cast<void*>(base + 0x83fa4a), 6);
		if (*g0x83f9b6 != f0x9c) {
			goto LAB_1801e1f51;
		}
	} else {
		if (*g0x83f9b5 != f0x82) {
			goto LAB_1801e1efc;
		}
LAB_1801e1e7e:
		if (*g0x83f9b6 != f0x9c) {
LAB_1801e1f51:
			*g0x83f9b6 = f0x9c;
			if (f0x9c == 0) {
				if (patch28 != nullptr)
					g_Data.patchToCode(patch28, reinterpret_cast<void*>(base + 0x83fa50), 5);
				if (patch30 != nullptr)
					g_Data.patchToCode(patch30, reinterpret_cast<void*>(base + 0x83fa55), 5);
				if (*g0x83f9b7 == f0x81)
					return;
			} else {
				if (patch28 != nullptr)
					g_Data.nopCode(patch28, 5);
				if (patch30 != nullptr)
					g_Data.nopCode(patch30, 5);
				if (*g0x83f9b7 == f0x81)
					return;
			}
			goto LAB_1801e1fd0;
		}
	}

LAB_1801e1e91:
	if (*g0x83f9b7 == f0x81) {
		return;
	}
LAB_1801e1fd0:
	*g0x83f9b7 = f0x81;
	if (f0x81 == 0) {
		if (patch38 != nullptr)
			g_Data.patchToCode(patch38, reinterpret_cast<void*>(base + 0x83fa5a), 6);
		if (patch40 != nullptr)
			g_Data.patchToCode(patch40, reinterpret_cast<void*>(base + 0x83fa60), 2);
	} else {
		if (patch38 != nullptr)
			g_Data.nopCode(patch38, 6);
		if (patch40 != nullptr)
			g_Data.patchToCode(patch40, reinterpret_cast<void*>(base + 0x761146), 2);
	}
}

void Module_1801dd4b0::onEnable() {
	// Binary function: func_0x1801e13d0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	// Clear internal flags at 0x83f9b4 - 0x83f9b7.
	*reinterpret_cast<uint32_t*>(base + 0x83f9b4) = 0;

	// Code patch targets and their saved-byte storage. The binary stores the
	// target code pointers at 0x83fa18/0x83fa20/... and the original bytes at
	// 0x83fa48/0x83fa4a/...  Save original bytes where needed.
	struct Patch { uintptr_t targetPtr; uintptr_t savedPtr; size_t size; };
	Patch patches[] = {
		{base + 0x83fa18, base + 0x83fa48, 2},
		{base + 0x83fa20, base + 0x83fa4a, 6},
		{base + 0x83fa28, base + 0x83fa50, 5},
		{base + 0x83fa30, base + 0x83fa55, 5},
		{base + 0x83fa38, base + 0x83fa5a, 6},
		{base + 0x83fa40, base + 0x83fa60, 2},
	};

	for (const auto& p : patches) {
		auto target = *reinterpret_cast<void**>(p.targetPtr);
		if (target != nullptr)
			g_Data.patchFromCode(reinterpret_cast<void*>(p.savedPtr), target, p.size);
	}
}

void Module_1801dd4b0::onDisable() {
	// Binary function: func_0x1801e2030
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	struct Patch { uintptr_t targetPtr; uintptr_t savedPtr; size_t size; };
	Patch patches[] = {
		{base + 0x83fa18, base + 0x83fa48, 2},
		{base + 0x83fa20, base + 0x83fa4a, 6},
		{base + 0x83fa28, base + 0x83fa50, 5},
		{base + 0x83fa30, base + 0x83fa55, 5},
		{base + 0x83fa38, base + 0x83fa5a, 6},
		{base + 0x83fa40, base + 0x83fa60, 2},
	};

	for (const auto& p : patches) {
		auto target = *reinterpret_cast<void**>(p.targetPtr);
		if (target != nullptr)
			g_Data.patchToCode(target, reinterpret_cast<void*>(p.savedPtr), p.size);
	}
}

