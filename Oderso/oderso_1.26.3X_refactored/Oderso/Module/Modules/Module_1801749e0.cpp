#include "Module_1801749e0.h"

Module_1801749e0::Module_1801749e0() : IModule(0, Category::CUSTOM, "Module_1801749e0") {
	registerIntSetting("Radius", &radius, 2, 1, 32);
	registerBoolSetting("Fixed height", &fixedHeight, false);
	registerFloatSetting("Y positib", &yPositib, 0.f, -96.f, 340.f);
}

std::string Module_1801749e0::getModuleName() { return "Module_1801749e0"; }
std::string Module_1801749e0::getTooltip() { 
	// Binary function: func_0x1801774a0
	return "";
}

void Module_1801749e0::slot_15() {
	// Binary function: func_0x180177630
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x177630)(this);
}

