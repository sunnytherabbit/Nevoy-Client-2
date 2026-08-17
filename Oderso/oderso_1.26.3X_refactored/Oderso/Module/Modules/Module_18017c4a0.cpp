#include "Module_18017c4a0.h"

Module_18017c4a0::Module_18017c4a0() : IModule(0, Category::COMBAT, "Module_18017c4a0") {
	registerBoolSetting("Stop on event", &stopOnEvent, false);
}

std::string Module_18017c4a0::getModuleName() { return "Module_18017c4a0"; }
std::string Module_18017c4a0::getTooltip() { 
	// Binary function: func_0x18017ff40
	return "";
}

void Module_18017c4a0::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x180180210
	if (!this->flag_0x148 || !this->flag_0x154)
		return;

	auto mod = g_Data.getModule();
	if (mod == nullptr) return;

	struct BinaryFunction {
		void* vtable;
		void* module;
	} func = {
		reinterpret_cast<void*>(mod->ptrBase + 0x6baca0),
		this
	};

	using RenderDispatcher = void(*)(void*, void*);
	auto dispatcher = reinterpret_cast<RenderDispatcher>(mod->ptrBase + 0x460100);
	dispatcher(reinterpret_cast<void*>(mod->ptrBase + 0x840a48), &func);
}

void Module_18017c4a0::onAttack(int attackButton, bool isDown, bool* cancel) {
	// Binary function: func_0x1801800d0
	// The isDown parameter is actually a button mask; check the current attack state against it.
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
	// Binary function: func_0x180180160
	if (g_Data.getClientInstance() != nullptr)
		return;

	// Unmapped global side-effect: DAT_180840a68 = 0;
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
	// Binary function: func_0x1801802b0
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
