// MANUAL
#include "OdersoCompass.h"

#include "../../../Horion/DrawUtils.h"
#include "../../../Memory/GameData.h"
#include <cmath>

OdersoCompass::OdersoCompass() : IModule(0, Category::VISUAL, "Displays a compass.") {
	registerFloatSetting("Size", &size, 1.f, 0.1f, 3.f);
}

const char* OdersoCompass::getModuleName() { return "Compass"; }

void OdersoCompass::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	C_LocalPlayer* player = g_Data.getLocalPlayer();
	if (player == nullptr || size <= 0.f) return;

	float yaw = player->yaw;
	float angle = fmodf(-yaw + 3600.f, 360.f);
	const char* dirs[] = {"S", "SW", "W", "NW", "N", "NE", "E", "SE"};
	int idx = (int)((angle + 22.5f) / 45.f) % 8;

	std::string text = dirs[idx];
	vec2_t windowSize = g_Data.getClientInstance()->getGuiData()->windowSize;
	float textWidth = DrawUtils::getTextWidth(&text, size);
	vec2_t pos = vec2_t(windowSize.x / 2.f - textWidth / 2.f, 30.f * size);

	DrawUtils::drawText(pos, &text, MC_Color(255, 255, 255), size);
}
