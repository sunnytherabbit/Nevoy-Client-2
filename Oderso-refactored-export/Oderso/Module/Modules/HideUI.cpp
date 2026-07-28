// MANUAL
#include "HideUI.h"

#include "../../../Horion/Module/ModuleManager.h"
#include "../../../Horion/Module/Modules/HudModule.h"

HideUI::HideUI() : IModule(0, Category::VISUAL, "Hides the UI and can save screenshots.") {
	registerBoolSetting("Hide UI", &hideUi, false);
	registerBoolSetting("Print saved", &printSaved, false);
	registerBoolSetting("Print folder", &printFolder, false);
}

const char* HideUI::getModuleName() { return "Hide UI"; }

void HideUI::onEnable() {
	if (hideUi) {
		auto hud = moduleMgr->getModule<HudModule>();
		if (hud != nullptr) hud->setEnabled(false);
	}
}

void HideUI::onDisable() {
	auto hud = moduleMgr->getModule<HudModule>();
	if (hud != nullptr) hud->setEnabled(true);
}
