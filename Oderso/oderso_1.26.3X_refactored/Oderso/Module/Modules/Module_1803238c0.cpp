#include "Module_1803238c0.h"

Module_1803238c0::Module_1803238c0() : IModule(0, Category::CUSTOM, "Module_1803238c0") {
	registerBoolSetting("Shadow", &shadow, false);
	registerFloatSetting("Size", &size, 2.f, 0.5f, 2.f);
	registerFloatSetting("Smoothne6B=", &smoothne6B, 20.f, 1.f, 45.f);
	registerFloatSetting("Radius", &radius, 3.f, 0.1f, 15.f);
	registerBoolSetting("Animation", &animation, false);
	buttonLayout = SettingEnum(this)
		.addEntry(EnumEntry("Generic", 0))
		.addEntry(EnumEntry("Xbox", 1))
		.addEntry(EnumEntry("PlayStation", 2))
		.addEntry(EnumEntry("Controller", 3));
	registerEnumSetting("Button layout", &buttonLayout, 0);
}

std::string Module_1803238c0::getModuleName() {
	return "ButtonLayout";
}
std::string Module_1803238c0::getTooltip() {
	// Manifest tooltip
	return "Button layout";
}

void Module_1803238c0::onEnable() {
	// Ported from func_0x1803292b0: copy the default button-layout descriptor
	// (at offsets 0x128/0x130) into the per-layout slots starting at 0x168.
	uint64_t uVar1;
	uint64_t uVar2;
	uVar1 = *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x128);
	uVar2 = *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x130);
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x168) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x170) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x178) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x180) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x188) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 400) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x198) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x1a0) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x1a8) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x1b0) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x1b8) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x1c0) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x1c8) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x1d0) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x1d8) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x1e0) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x1e8) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x1f0) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x1f8) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x200) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x208) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x210) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x218) = uVar1;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x220) = uVar2;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x228) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x148);
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x230) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x150);
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x238) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x148);
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x240) = *reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x150);
	return;
}

void Module_1803238c0::onLoadConfig(void* conf) {
	// Uses the IModule base config loader (binary vtable points to func_0x180135130).
	IModule::onLoadConfig(conf);
}

void Module_1803238c0::onSaveConfig(void* conf) {
	// Uses the IModule base config saver (binary vtable points to func_0x180135c90).
	IModule::onSaveConfig(conf);
}