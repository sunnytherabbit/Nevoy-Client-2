// MANUAL
#include "CPS.h"

#include "../../../Horion/DrawUtils.h"
#include "../../../Memory/GameData.h"

CPS::CPS() : IModule(0, Category::VISUAL, "Displays your clicks per second.") {
	// No settings extracted yet
}

const char* CPS::getModuleName() { return "CPS"; }

void CPS::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	if (g_Data.getLocalPlayer() == nullptr) return;

	float scale = 1.f;
	std::string cpsText = "CPS: " + std::to_string(g_Data.getLeftCPS()) + " - " + std::to_string(g_Data.getRightCPS());
	vec4_t rectPos = vec4_t(2.5f, 5.f, DrawUtils::getTextWidth(&cpsText, scale) + 7.f, 15.f);
	vec2_t textPos = vec2_t(rectPos.x + 1.5f, rectPos.y + 1.f);

	DrawUtils::fillRectangle(rectPos, MC_Color(12, 12, 12), 1.f);
	DrawUtils::drawText(textPos, &cpsText, MC_Color(200, 200, 200), scale);
}
