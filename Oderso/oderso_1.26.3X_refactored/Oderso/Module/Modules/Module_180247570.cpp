#include "Module_180247570.h"

Module_180247570::Module_180247570() : IModule(0, Category::CUSTOM, "Module_180247570") {
	registerFloatSetting("Scale", &targetScale, 1.f, 1.f, 10.f);
}

std::string Module_180247570::getModuleName() { return "Module_180247570"; }
std::string Module_180247570::getTooltip() {
	// No manifest description
	return "";
}

void Module_180247570::onEnable() {
	// Ported from func_0x180248620.
	this->currentScale = -1.f;
	this->flag_0x84 = 0;
}

void Module_180247570::onDisable() {
	// Uses unmapped helper func_0x180129fc0 for scale reset; ported from func_0x180248640.
	auto mc = g_Data.getMinecraft();
	if (mc == nullptr) return;

	auto p = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(mc) + 0x648);
	if (p == nullptr) return;

	p = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(p) + 0x40);

	float local[2] = {1.0f, 1.0f};

	auto mod = g_Data.getModule();
	if (mod == nullptr) return;

	using Func129fc0 = void(*)(void*, void*, void*, int);
	auto f = reinterpret_cast<Func129fc0>(mod->ptrBase + 0x129fc0);
	f(mc, p, local, 0);
}

void Module_180247570::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Uses unmapped helper func_0x180129fc0 for scale sync; ported from func_0x180248700.
	if (this->currentScale != this->targetScale || this->flag_0x84 != this->flag_0x8c) {
		this->currentScale = this->targetScale;
		this->flag_0x84 = this->flag_0x8c;

		auto mc = g_Data.getMinecraft();
		if (mc == nullptr) return;

		auto p = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(mc) + 0x648);
		if (p == nullptr) return;

		p = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(p) + 0x40);

		float local[2] = {1.0f, 1.0f};

		auto mod = g_Data.getModule();
		if (mod == nullptr) return;

		using Func129fc0 = void(*)(void*, void*, void*, int);
		auto f = reinterpret_cast<Func129fc0>(mod->ptrBase + 0x129fc0);
		f(mc, p, local, 0);
	}
}

