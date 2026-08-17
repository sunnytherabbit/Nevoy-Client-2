#include "Module_1801914f0.h"

Module_1801914f0::Module_1801914f0() : IModule(0, Category::VISUAL, "AlwaysSprint") {
	registerBoolSetting("Always sprint", &alwaysSprint, false);
	registerBoolSetting("Hide text", &hideText, false);
}

std::string Module_1801914f0::getModuleName() { return "AlwaysSprint"; }
std::string Module_1801914f0::getTooltip() { return "Always sprint"; }

void Module_1801914f0::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	auto client = g_Data.getClientInstance();
	if (client == nullptr) {
		// Mirrors the binary's DAT_180840a68 = 0 side-effect when no client exists.
		g_Data.updateClientGlobal();
		return;
	}

	auto option = getOption_0x18b1887(client);
	if (option == nullptr)
		return;

	// The binary resolves the sprint-key state through the options input mapping.
	// We approximate it by reading the player's current forward input.
	bool inputSprint = false;
	auto player = g_Data.getLocalPlayer();
	if (player != nullptr) {
		auto input = client->getMoveTurnInput();
		if (input != nullptr)
			inputSprint = input->forward;
	}

	bool bit = this->alwaysSprint || this->sprintToggle || inputSprint;
	*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(option) + 0x11) =
	    (*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(option) + 0x11) & 0xfe) | (bit ? 1 : 0);
}

void Module_1801914f0::onAttack(int attackButton, bool isDown, bool* cancel) {
	if (!isDown)
		return;

	// The binary maps the attack key and checks it against attackButton while also
	// checking the current attack-button mask. The refactored GameMode_attack hook
	// calls onAttack(0, true) for left click, so we accept that as the attack event.
	if (attackButton == 0)
		this->sprintToggle = !this->sprintToggle;
}

void Module_1801914f0::onDisable() {
	this->sprintToggle = false;

	auto client = g_Data.getClientInstance();
	if (client == nullptr) {
		// Mirrors the binary's DAT_180840a68 = 0 side-effect when no client exists.
		g_Data.updateClientGlobal();
		return;
	}

	auto option = getOption_0x18b1887(client);
	if (option != nullptr)
		*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(option) + 0x11) &= 0xfe;
}

void Module_1801914f0::onLoadConfig(void* conf) {
	// Base class serialization is sufficient.
	IModule::onLoadConfig(conf);
}

void Module_1801914f0::onSaveConfig(void* conf) {
	// Base class serialization is sufficient.
	IModule::onSaveConfig(conf);
}

void Module_1801914f0::slot_31(int arg, char mask, bool* cancel) {
	if (mask == 0)
		return;

	// The binary queries the attack-key mapping in mode 3 and toggles only when
	// arg == key - 1 while the attack-button mask is down. Approximate by toggling
	// on an attack-style slot event.
	this->sprintToggle = !this->sprintToggle;
}
