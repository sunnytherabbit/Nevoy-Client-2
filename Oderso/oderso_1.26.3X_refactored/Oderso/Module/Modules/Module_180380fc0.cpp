#include "Module_180380fc0.h"

Module_180380fc0::Module_180380fc0() : IModule(0, Category::CUSTOM, "Set, list, remove or clear text hotkeys for TextHotkey") {
	// No settings extracted yet
}

std::string Module_180380fc0::getModuleName() { return "TextHotkey"; }

std::string Module_180380fc0::getTooltip() {
	// Manifest tooltip
	return "<set|remove|list|clear> [key] [message]";
}
