// MANUAL
#include "SmoothCamera.h"

#include "../../../Memory/GameData.h"
#include "../../../Utils/HMath.h"

SmoothCamera::SmoothCamera() : IModule(0, Category::VISUAL, "Makes the camera smooth, or not.") {
	registerFloatSetting("Strength", &strength, 0.5f, 0.f, 1.f);
	registerBoolSetting("Animation", &animation, false);
	registerFloatSetting("Animation speed", &animationSpeed, 0.1f, 0.f, 1.f);
	registerBoolSetting("Scroll", &scroll, false);
	registerBoolSetting("Smooth camera", &smoothCamera, false);
}

const char* SmoothCamera::getModuleName() { return "SmoothCamera"; }

void SmoothCamera::onTick(C_GameMode*) {
	C_LocalPlayer* player = g_Data.getLocalPlayer();
	if (player == nullptr) return;

	vec2_t target = player->viewAngles;
	if (!smoothInit) {
		lastViewAngles = target;
		smoothInit = true;
		return;
	}

	float factor = 1.f - strength;
	if (factor < 0.01f) factor = 0.01f;
	if (factor > 1.f) factor = 1.f;

	lastViewAngles.x = lerp(lastViewAngles.x, target.x, factor);
	lastViewAngles.y = lerp(lastViewAngles.y, target.y, factor);
	lastViewAngles = lastViewAngles.normAngles();

	if (smoothCamera)
		player->viewAngles = lastViewAngles;
}
