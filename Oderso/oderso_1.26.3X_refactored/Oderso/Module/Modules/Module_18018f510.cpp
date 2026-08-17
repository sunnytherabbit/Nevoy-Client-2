#include "Module_18018f510.h"

Module_18018f510::Module_18018f510() : IModule(0, Category::VISUAL, "Module_18018f510") {
	registerBoolSetting("Always sneak", &alwaysSneak, false);
}

std::string Module_18018f510::getModuleName() { return "Module_18018f510"; }
std::string Module_18018f510::getTooltip() { 
	// Binary function: func_0x180190380
	return "";
}

void Module_18018f510::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x180190510
	auto client = g_Data.getClientInstance();
	if (client == nullptr) {
		// Unmapped global side-effect: DAT_180840a68 = 0;
		return;
	}

	auto option = getOption_0x18b1887(client);
	if (option == nullptr)
		return;

	// The binary queries the player's current sneaking state through func_0x180116830/0x180116790/0x1801167e0.
	// Approximate with the user's input state if available.
	bool inputSneak = false;
	auto input = client->getMoveTurnInput();
	if (input != nullptr)
		inputSneak = input->isSneakDown;

	bool bit = this->field_0x148 || this->field_0x14a || inputSneak;
	*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(option) + 0x10) =
	    (*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(option) + 0x10) & 0xfe) | (bit ? 1 : 0);
}

void Module_18018f510::onAttack(int attackButton, bool isDown, bool* cancel) {
	// Binary function: func_0x180190870
	if (!isDown)
		return;

	// The binary maps the attack key through func_0x180116750 and checks it against param_2 (attackButton)
	// and the current mouse state via func_0x18045fc30(). Approximate by toggling on any attack press.
	this->field_0x14a = !this->field_0x14a;
}

void Module_18018f510::onDisable() {
	// Binary function: func_0x1801907d0
	this->field_0x14a = false;

	auto client = g_Data.getClientInstance();
	if (client == nullptr) {
		// Unmapped global side-effect: DAT_180840a68 = 0;
		return;
	}

	auto option = getOption_0x18b1887(client);
	if (option != nullptr)
		*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(option) + 0x10) &= 0xfe;
}

void Module_18018f510::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_18018f510::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

void Module_18018f510::slot_31(int arg, char mask, bool* cancel) {
	// Binary function: func_0x180190930
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*, int, char);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x190930)(this, arg, mask);
}

