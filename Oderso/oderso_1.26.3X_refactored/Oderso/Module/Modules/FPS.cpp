// MANUAL
#include "FPS.h"

#include "../../../Horion/DrawUtils.h"
#include "../../../Memory/GameData.h"

FPS::FPS() : IModule(0, Category::VISUAL, "Displays your current FPS.") {
	// No settings extracted yet
}

const char* FPS::getModuleName() { return "FPS"; }

void FPS::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	if (g_Data.getLocalPlayer() == nullptr) return;

	float scale = 1.f;
	std::string text = "FPS: " + std::to_string(g_Data.getFPS());
	vec4_t rectPos = vec4_t(2.5f, 20.f, DrawUtils::getTextWidth(&text, scale) + 7.f, 30.f);
	vec2_t textPos = vec2_t(rectPos.x + 1.5f, rectPos.y + 1.f);

	DrawUtils::fillRectangle(rectPos, MC_Color(12, 12, 12), 1.f);
	DrawUtils::drawText(textPos, &text, MC_Color(200, 200, 200), scale);
}
