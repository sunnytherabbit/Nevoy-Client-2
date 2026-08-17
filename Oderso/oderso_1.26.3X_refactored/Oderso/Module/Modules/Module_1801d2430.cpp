#include "Module_1801d2430.h"

Module_1801d2430::Module_1801d2430() : IModule(0, Category::CUSTOM, "Module_1801d2430") {
	// No settings extracted yet
}

std::string Module_1801d2430::getModuleName() { return "Module_1801d2430"; }
std::string Module_1801d2430::getTooltip() { 
	// Binary function: func_0x1801d2830
	return "";
}

void Module_1801d2430::onEnable() {
	// Binary function: func_0x1801d29c0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	using Func134bf0 = void*(*)(void*);
	auto f1 = reinterpret_cast<Func134bf0>(base + 0x134bf0);
	auto p = f1(reinterpret_cast<void*>(base + 0x8400a0));
	if (p != nullptr)
		this->field_0x80 = *reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(p) + 0x40);

	using Func11ae00 = void*(*)(void*);
	auto f2 = reinterpret_cast<Func11ae00>(base + 0x11ae00);
	auto v = f2(reinterpret_cast<void*>(base + 0x840a48));
	if (v != nullptr)
		this->field_0x81 = *reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(v) + 0x778);
}

void Module_1801d2430::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1801d2aa0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x1d2aa0)(this);
}

