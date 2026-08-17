// MANUAL
#include "NameTags.h"

NameTags::NameTags() : IModule(0, Category::VISUAL, "Displays the name of every user on the server.") {
	font.addEntry(EnumEntry("Default", 0));
	registerEnumSetting("Font", &font, 0);
	registerBoolSetting("Rainbow text", &rainbowText, true);
	registerBoolSetting("Background", &background, true);
	registerBoolSetting("Outline", &outline, true);
	registerFloatSetting("Outline size", &outlineSize, 1.f, 1.f, 4.f);
	registerBoolSetting("Round corners", &roundCorners, true);
	registerFloatSetting("Roundness", &roundness, 5.f, 0.5f, 45.f);
	registerIntSetting("Max columns", &maxColumns, 10, 1, 20);
	registerIntSetting("Max rows", &maxRows, 4, 1, 7);
	registerFloatSetting("Text size", &textSize, 1.f, 0.1f, 2.f);
	registerBoolSetting("Display heads", &displayHeads, true);
}

NameTags::~NameTags() {
}

std::string NameTags::getModuleName() { return "NameTags"; }

std::string NameTags::getTooltip() {
	return "Displays the name of every user on the server.";
}
