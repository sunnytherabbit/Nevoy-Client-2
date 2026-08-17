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
	// Kept as direct binary call: onEnable uses the unmapped code-location
	// scanner (func_0x1802c5770) to find and patch the target code.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using OnEnableT = void(*)(void*);
	reinterpret_cast<OnEnableT>(mod->ptrBase + 0x2c56a0)(this);
}

void Module_1802c1ee0::onDisable() {
	// Kept as direct binary call: onDisable restores the patched code and then
	// touches a GUI option through the unmapped helper func_0x1802e13a0.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using OnDisableT = void(*)(void*);
	reinterpret_cast<OnDisableT>(mod->ptrBase + 0x2c5850)(this);
}
