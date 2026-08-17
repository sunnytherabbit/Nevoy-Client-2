#include "Module_180130570.h"

Module_180130570::Module_180130570() : IModule(0, Category::CUSTOM, "Module_180130570") {
	registerIntSetting("Change amount", &changeAmount, 1, 1, 10);
}

std::string Module_180130570::getModuleName() { return "Module_180130570"; }

void Module_180130570::refreshEntityPointers() {
	auto level = g_Data.getLevel();
	if (level == nullptr) return;

	auto entityList = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(level) + 0x3c8);
	if (entityList == nullptr) return;

	auto e2c1 = g_Data.getEntityListEntry(entityList, 0x2c1);
	if (e2c1 != nullptr && *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(e2c1) + 0x1d4) == 6)
		this->field_0x98 = e2c1;

	auto e27 = g_Data.getEntityListEntry(entityList, 0x27);
	if (e27 != nullptr) {
		auto inner = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(e27) + 8);
		if (inner != nullptr && *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(inner) + 0x1d4) == 5) {
			this->field_0x80 = e27;
			this->field_0x88 = e27;
			this->field_0x90 = e27;
		}
	}
}

void Module_180130570::onEnable() {
	this->refreshEntityPointers();
}

void Module_180130570::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	this->refreshEntityPointers();
	using PreRenderT = void(*)(void*);
	reinterpret_cast<PreRenderT>(mod->ptrBase + 0x132b00)(this);
}

void Module_180130570::onAttack(int attackButton, bool isDown, bool* cancel) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	this->refreshEntityPointers();
	using AttackT = void(*)(void*, int, uint8_t, bool*);
	reinterpret_cast<AttackT>(mod->ptrBase + 0x132b60)(this, attackButton, static_cast<uint8_t>(isDown), cancel);
}

void Module_180130570::slot_30(int arg, char mask, bool* cancel) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	this->refreshEntityPointers();
	using Slot30T = void(*)(void*, uint32_t, uint8_t, bool*);
	reinterpret_cast<Slot30T>(mod->ptrBase + 0x132c70)(this, static_cast<uint32_t>(arg), static_cast<uint8_t>(mask), cancel);
}
