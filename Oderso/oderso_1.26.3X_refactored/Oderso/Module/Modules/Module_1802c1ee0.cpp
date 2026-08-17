#include "Module_1802c1ee0.h"

Module_1802c1ee0::Module_1802c1ee0() : IModule(0, Category::CUSTOM, "Module_1802c1ee0") {
	registerFloatSetting("Speed", &speed, 5.f, 3.f, 15.f);
	registerFloatSetting("Y mul", &yMul, 7.f, 7.f, 30.f);
	registerFloatSetting("Z mul", &zMul, 7.f, 7.f, 30.f);
}

std::string Module_1802c1ee0::getModuleName() { return "Module_1802c1ee0"; }
std::string Module_1802c1ee0::getTooltip() {
	// No manifest description
	return "";
}

void Module_1802c1ee0::onEnable() {
	// Binary function: func_0x1802c56a0
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	auto target = *reinterpret_cast<void**>(base + 0x83fc78);
	if (target != nullptr) {
		g_Data.patchFromCode(reinterpret_cast<void*>(base + 0x83fc60), target, 0x18);
		g_Data.nopCode(target, 0x18);
	}
}

void Module_1802c1ee0::onDisable() {
	// Binary function: func_0x1802c5850
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	auto target = *reinterpret_cast<void**>(base + 0x83fc88);
	if (target != nullptr)
		g_Data.patchToCode(target, reinterpret_cast<void*>(base + 0x83fc60), 0x18);

	// Additional GUI side-effect (set option bit; unmapped helper func_0x1802e13a0):
	// The binary calls a GUI options vtable and toggles a value. Not yet ported.
}

