// MANUAL
#include "HideUI.h"

#include "../../../Horion/Module/ModuleManager.h"
#include "../../../Horion/Module/Modules/HudModule.h"

HideUI::HideUI() : IModule(0, Category::VISUAL, "Hides the UI and can save screenshots.") {
	registerBoolSetting("Hide UI", &hideUi, false);
	registerBoolSetting("Print saved", &printSaved, false);
	registerBoolSetting("Print folder", &printFolder, false);
}

std::string HideUI::getModuleName() { return "Hide UI"; }
std::string HideUI::getTooltip() {
	return "Hides the UI and can save screenshots.";
}

