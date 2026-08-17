#include "Module_1801914f0.h"

Module_1801914f0::Module_1801914f0() : IModule(0, Category::VISUAL, "Module_1801914f0") {
	registerBoolSetting("Always sprint", &alwaysSprint, false);
}

std::string Module_1801914f0::getModuleName() { return "Module_1801914f0"; }
std::string Module_1801914f0::getTooltip() { 
	// Binary function: func_0x1801923a0
	return "";
}

void Module_1801914f0::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x180192530
	auto client = g_Data.getClientInstance();
	if (client == nullptr) {
		// Unmapped global side-effect: DAT_180840a68 = 0;
		return;
	}

	auto option = getOption_0x18b1887(client);
	if (option == nullptr)
		return;

	// The binary queries the player's sprint state through func_0x180116830/0x180116790/0x1801167e0.
	// Approximate with local player forward input.
	bool inputSprint = false;
	auto player = g_Data.getLocalPlayer();
	if (player != nullptr) {
		auto input = client->getMoveTurnInput();
		if (input != nullptr)
			inputSprint = input->forward;
	}

	bool bit = this->field_0x148 || this->field_0x14a || inputSprint;
	*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(option) + 0x11) =
	    (*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(option) + 0x11) & 0xfe) | (bit ? 1 : 0);
}

void Module_1801914f0::onAttack(int attackButton, bool isDown, bool* cancel) {
	// Binary function: func_0x180192740
	if (!isDown)
		return;

	// The binary maps the attack key through func_0x180116750 and checks it against param_2 (attackButton)
	// and the current mouse state via func_0x18045fc30(). Approximate by toggling on any attack press.
	this->field_0x14a = !this->field_0x14a;
}

void Module_1801914f0::onDisable() {
	// Binary function: func_0x1801926a0
	this->field_0x14a = false;

	auto client = g_Data.getClientInstance();
	if (client == nullptr) {
		// Unmapped global side-effect: DAT_180840a68 = 0;
		return;
	}

	auto option = getOption_0x18b1887(client);
	if (option != nullptr)
		*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(option) + 0x11) &= 0xfe;
}

void Module_1801914f0::onLoadConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onLoadConfig(conf);
}

void Module_1801914f0::onSaveConfig(void* conf) {
	// Base class serialization is sufficient for this module.
	IModule::onSaveConfig(conf);
}

void Module_1801914f0::slot_31(int arg, char mask, bool* cancel) {
	// Binary function: func_0x180192800
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using SlotFunc = void(*)(void*, int, char);
	reinterpret_cast<SlotFunc>(mod->ptrBase + 0x192800)(this, arg, mask);
}

