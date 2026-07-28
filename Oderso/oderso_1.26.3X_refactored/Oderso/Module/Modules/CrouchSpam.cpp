// MANUAL
#include "CrouchSpam.h"

#include "../../../Memory/GameData.h"

CrouchSpam::CrouchSpam() : IModule(0, Category::MOVEMENT, "Crouch Spam.") {
	// No settings extracted yet
}

const char* CrouchSpam::getModuleName() { return "CrouchSpam"; }

void CrouchSpam::onTick(C_GameMode* gm) {
	C_LocalPlayer* player = g_Data.getLocalPlayer();
	if (player == nullptr) return;
	auto input = g_Data.getClientInstance()->getMoveTurnInput();
	if (input == nullptr) return;

	static int counter = 0;
	if (++counter >= 2) {
		counter = 0;
		input->isSneakDown = !input->isSneakDown;
	}
}

void CrouchSpam::onDisable() {
	auto input = g_Data.getClientInstance()->getMoveTurnInput();
	if (input != nullptr)
		input->isSneakDown = false;
}
