#include "Module_18017c4a0.h"

Module_18017c4a0::Module_18017c4a0() : IModule(0, Category::COMBAT, "Module_18017c4a0") {
	registerBoolSetting("Stop on event", &stopOnEvent, false);
}

std::string Module_18017c4a0::getModuleName() {
	return "StopEvent";
}
std::string Module_18017c4a0::getTooltip() {
	// Manifest tooltip
	return "Stop on event";
}

void Module_18017c4a0::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Kept as direct binary call: uses the unmapped render dispatcher / std::function-like vtable cleanup (func_0x180460100).
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x180210)(this);
}

void Module_18017c4a0::onAttack(int attackButton, bool isDown, bool* cancel) {
	// Ported from func_0x1801800d0: toggles the timing state when the attack/other key is pressed.
	if ((g_Data.getAttackButtonMask() & (isDown ? 1 : 0)) != 1)
		return;

	if (attackButton == this->attackKey) {
		if (this->flag_0x154) {
			this->flag_0x154 = false;
			this->accumulated_0x160 += g_Data.getTimeMs() - this->time_0x158;
		} else {
			this->flag_0x154 = true;
			this->time_0x158 = g_Data.getTimeMs();
		}
	} else if (attackButton != this->otherKey) {
		return;
	} else {
		this->flag_0x154 = false;
		this->time_0x158 = 0;
		this->accumulated_0x160 = 0;
	}

	if (cancel != nullptr)
		*cancel = true;
}

void Module_18017c4a0::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Ported from func_0x180180160; DAT_180840a68 clear side-effect omitted when no client.
	if (g_Data.getClientInstance() != nullptr)
		return;

	if (this->flag_0x154) {
		this->flag_0x154 = false;
		this->accumulated_0x160 += g_Data.getTimeMs() - this->time_0x158;
	}
}

void Module_18017c4a0::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_18017c4a0::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

void Module_18017c4a0::slot_30(int arg, char mask, bool* cancel) {
	// Ported from func_0x1801802b0: maps the slot argument to attack/other key and toggles timing state.
	if (cancel == nullptr)
		return;

	if ((g_Data.getAttackButtonMask() & mask) != 1)
		return;

	int mapped;
	if ((int)arg < 1) {
		mapped = -1;
		if (this->attackKey != -0x65)
			goto check_other;
	} else if (arg < 4) {
		mapped = arg - 1;
		if (mapped != this->attackKey + 100)
			goto check_other;
	} else {
		mapped = (arg == 4) ? -1 : arg - 2;
		if (mapped != this->attackKey + 100)
			goto check_other;
	}

	// attackKey matched: toggle timing state
	if (this->flag_0x154) {
		this->flag_0x154 = false;
		this->accumulated_0x160 += g_Data.getTimeMs() - this->time_0x158;
	} else {
		this->flag_0x154 = true;
		this->time_0x158 = g_Data.getTimeMs();
	}
	*cancel = true;
	return;

check_other:
	if (mapped != this->otherKey + 100)
		return;
	this->flag_0x154 = false;
	this->time_0x158 = 0;
	this->accumulated_0x160 = 0;
	*cancel = true;
}
