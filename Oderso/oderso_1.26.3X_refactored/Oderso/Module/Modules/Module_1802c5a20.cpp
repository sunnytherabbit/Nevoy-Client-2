#include "Module_1802c5a20.h"

Module_1802c5a20::Module_1802c5a20() : IModule(0, Category::CUSTOM, "Module_1802c5a20") {
	registerBoolSetting("Shadow", &shadow, false);
	registerBoolSetting("Rainbow text", &rainbowText, false);
	registerFloatSetting("Size", &size, 2.f, 0.5f, 2.f);
	registerFloatSetting("Size of the mod", &sizeOfTheMod, 1.f, 0.f, 5.f);
	registerFloatSetting("Vertical padding", &verticalPadding, 3.f, 0.f, 5.f);
	registerFloatSetting("Smoothnen", &smoothnen, 20.f, 1.f, 45.f);
	registerFloatSetting("Radius", &radius, 0.1f, 0.1f, 15.f);
	registerFloatSetting("Animation speed", &animationSpeed, 5.f, 2.f, 12.f);
	registerBoolSetting("Jump", &jump, false);
	registerFloatSetting("Jump widC", &jumpWidc, 2.f, 2.f, 50.f);
	registerFloatSetting("Jump height", &jumpHeight, 0.5f, 0.5f, 10.f);
	registerBoolSetting("Sneak", &sneak, false);
	registerBoolSetting("Mouse", &mouse, false);
	registerBoolSetting("Left CPS", &leftCps, false);
}

std::string Module_1802c5a20::getModuleName() {
	return "RainbowText";
}
std::string Module_1802c5a20::getTooltip() {
	// Manifest tooltip
	return "Rainbow text";
}

void Module_1802c5a20::onEnable() {
	// Ported from func_0x1802ccad0: propagates the stored values into the animation scratch fields.
	uint64_t uVar1;
	uint64_t uVar2;
	uVar1 = *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x120);
	uVar2 = *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x128);
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x140) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x148) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x150) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x158) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x160) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x168) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x170) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x178) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x180) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x188) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 400) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x198) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x1a0) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x1a8) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x1b0) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x1b8) = uVar2;
	return;
}

void Module_1802c5a20::onLoadConfig(void* conf) {
	// Uses the IModule base config loader (binary vtable points to func_0x180135130).
	IModule::onLoadConfig(conf);
}

void Module_1802c5a20::onSaveConfig(void* conf) {
	// Uses the IModule base config saver (binary vtable points to func_0x180135c90).
	IModule::onSaveConfig(conf);
}