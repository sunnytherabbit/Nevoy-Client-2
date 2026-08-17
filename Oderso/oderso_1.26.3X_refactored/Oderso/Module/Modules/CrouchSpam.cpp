// MANUAL
#include "CrouchSpam.h"

#include "../../../Memory/GameData.h"

CrouchSpam::CrouchSpam() : IModule(0, Category::MOVEMENT, "Crouch Spam.") {
	registerIntSetting("Delay", &delay, 5, 1, 60);
}

std::string CrouchSpam::getModuleName() { return "CrouchSpam"; }
std::string CrouchSpam::getTooltip() {
	// Constructor tooltip fallback
	return "Crouch Spam.";
}

void CrouchSpam::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x180195140
	this->counter++;
	if (this->delay <= this->counter) {
		auto client = g_Data.getClientInstance();
		if (client == nullptr) {
			// Unmapped global side-effect: DAT_180840a68 = 0;
			return;
		}

		auto input = client->getMoveTurnInput();
		if (input != nullptr)
			input->isSneakDown ^= 1;

		this->counter = 0;
	}
}

void CrouchSpam::onDisable() {
	auto input = g_Data.getClientInstance()->getMoveTurnInput();
	if (input != nullptr)
		input->isSneakDown = false;
}

