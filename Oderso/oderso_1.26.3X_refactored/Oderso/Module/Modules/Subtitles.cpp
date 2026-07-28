// MANUAL
#include "Subtitles.h"

#include "../../../Horion/DrawUtils.h"
#include "../../../Memory/GameData.h"

Subtitles::Subtitles() : IModule(0, Category::VISUAL, "Displays subtitles for sounds, like in Minecraft: Java Edition.") {
	registerFloatSetting("Size", &size, 1.f, 0.1f, 3.f);
}

const char* Subtitles::getModuleName() { return "Subtitles"; }

void Subtitles::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	if (g_Data.getLocalPlayer() == nullptr || size <= 0.f) return;

	std::string text = "Subtitles (placeholder)";
	vec2_t windowSize = g_Data.getClientInstance()->getGuiData()->windowSize;
	float textWidth = DrawUtils::getTextWidth(&text, size);
	vec2_t pos = vec2_t(windowSize.x / 2.f - textWidth / 2.f, windowSize.y - 30.f * size);

	DrawUtils::drawText(pos, &text, MC_Color(255, 255, 255), size);
}
