#include "Module_1802bea40.h"

Module_1802bea40::Module_1802bea40() : IModule(0, Category::CUSTOM, "Module_1802bea40") {
	registerBoolSetting("Rainbow", &rainbow, false);
}

std::string Module_1802bea40::getModuleName() { return "Module_1802bea40"; }
std::string Module_1802bea40::getTooltip() {
	// No manifest description
	return "";
}

void Module_1802bea40::onEnable() {
	// Ported from func_0x1802bfeb0: saves the original 4-byte code, allocates a near trampoline, and patches a relative jump.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	auto codePtr = *reinterpret_cast<uintptr_t*>(base + 0x83fc20);
	if (codePtr == 0) return;

	this->savedCode = *reinterpret_cast<uint32_t*>(codePtr);

	this->codeBuf = g_Data.allocNearCode(codePtr, 4);
	if (this->codeBuf != nullptr)
		*reinterpret_cast<uint32_t*>(this->codeBuf) = 0;

	int32_t relOffset = (int32_t)((uintptr_t)this->codeBuf - codePtr - 4);
	g_Data.patchToCode(reinterpret_cast<void*>(codePtr), &relOffset, 4);
}

void Module_1802bea40::onDisable() {
	// Ported from func_0x1802c0080: restores the original 4-byte code and frees the near trampoline.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	auto codePtr = *reinterpret_cast<uintptr_t*>(base + 0x83fc30);
	if (codePtr == 0) return;

	g_Data.patchToCode(reinterpret_cast<void*>(codePtr), &this->savedCode, 4);
	g_Data.freeNearCode(this->codeBuf);
	this->codeBuf = nullptr;
}

void Module_1802bea40::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Kept as direct binary call: func_0x1802c0150 — rainbow color/time rendering with unmapped helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x2c0150)(this);
}

