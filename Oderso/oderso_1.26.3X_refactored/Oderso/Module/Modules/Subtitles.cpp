// MANUAL
#include "Subtitles.h"

#include "../../../Horion/DrawUtils.h"
#include "../../../Memory/GameData.h"

Subtitles::Subtitles() : IModule(0, Category::VISUAL, "Displays subtitles for sounds, like in Minecraft: Java Edition.") {
	registerFloatSetting("Size", &size, 1.f, 0.1f, 3.f);
}

std::string Subtitles::getModuleName() { return "Subtitles"; }
std::string Subtitles::getTooltip() {
	return "Displays subtitles for sounds, like in Minecraft: Java Edition.";
}

void Subtitles::onLevelRender() {
	// Kept as direct binary call: func_0x1801838b0 — heavy subtitle rendering with TLS-encrypted strings and unmapped draw helpers.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using LevelRenderFunc = void(*)(void*);
	reinterpret_cast<LevelRenderFunc>(mod->ptrBase + 0x1838b0)(this);
}

void Subtitles::toggle(void* event, bool* cancel) {
	// Kept as direct binary call: func_0x180185260 — event parsing with a TLS-encrypted key name.
	if (event == nullptr)
		return;

	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using ToggleFunc = void(*)(void*, void*);
	reinterpret_cast<ToggleFunc>(mod->ptrBase + 0x185260)(this, event);
}

