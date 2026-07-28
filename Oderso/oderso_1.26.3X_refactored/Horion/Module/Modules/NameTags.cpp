#include "NameTags.h"

#include "../../../Utils/Target.h"
#include "../ModuleManager.h"

NameTags::NameTags() : IModule(0, Category::VISUAL, "Displays the name of every user on the server.") {
	this->fontSetting.addEntry(EnumEntry("Noto Sans", 0));
	this->fontSetting.addEntry(EnumEntry("Mojangles", 1));
	this->fontSetting.addEntry(EnumEntry("Font", 2));
	this->registerEnumSetting("Font", &this->fontSetting, 0);

	this->registerBoolSetting("Shadow", &this->shadow, this->shadow);
	this->registerBoolSetting("Rainbow text", &this->rainbowText, this->rainbowText);
	this->registerBoolSetting("Background", &this->background, this->background);
	this->registerBoolSetting("Outline", &this->outline, this->outline);
	this->registerFloatSetting("Outline size", &this->outlineSize, this->outlineSize, 1.f, 4.f);
	this->registerBoolSetting("Round corners", &this->roundCorners, this->roundCorners);
	this->registerFloatSetting("Roundness", &this->roundness, this->roundness, 0.5f, 45.f);
	this->registerFloatSetting("Radius", &this->radius, this->radius, 0.1f, 15.f);
	this->registerBoolSetting("Player count", &this->playerCount, this->playerCount);
	this->registerIntSetting("Max columns", &this->maxColumns, this->maxColumns, 1, 20);
	this->registerIntSetting("Max rows", &this->maxRows, this->maxRows, 1, 7);
	this->registerFloatSetting("Text size", &this->textSize, this->textSize, 0.1f, 2.f);
	this->registerBoolSetting("Display heads", &this->displayHeads, this->displayHeads);
	this->registerBoolSetting("Isometric heads", &this->isometricHeads, this->isometricHeads);

	// Oderso also keeps default color values for text/background/outline, kept as members.
}

NameTags::~NameTags() {
}

const char* NameTags::getModuleName() {
	return ("NameTags");
}

void drawNameTags(C_Entity* ent, bool) {
	C_LocalPlayer* localPlayer = g_Data.getLocalPlayer();
	static auto nameTagsMod = moduleMgr->getModule<NameTags>();

	if (ent != localPlayer) {
		if (ent->timeSinceDeath > 0)
			return;
		if (ent->getNameTag()->getTextLength() < 1)
			return;
		if (Target::isValidTarget(ent) && nameTagsMod != nullptr) {
			nameTagsMod->nameTags.insert(Utils::sanitize(ent->getNameTag()->getText()));
			float dist = ent->getPos()->dist(*g_Data.getLocalPlayer()->getPos());
			// Oderso defaults: textSize = 1.f, radius = 4.2f
			if (dist > nameTagsMod->radius)
				return;
			float textSize = fmax(0.6f, nameTagsMod->textSize * 3.f / dist);
			bool useUnicodeFont = nameTagsMod->fontSetting.GetSelectedEntry().GetValue() == 0; // 0 = Noto Sans
			DrawUtils::drawNameTags(ent, textSize, false, useUnicodeFont);
			DrawUtils::flush();
		}
	}
}

void NameTags::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	C_LocalPlayer* localPlayer = g_Data.getLocalPlayer();
	if (localPlayer == nullptr || !GameData::canUseMoveKeys()) return;

	if (ingameNametagSetting)
		if (!gotPrevSetting) {
			lastSetting = *ingameNametagSetting;
			gotPrevSetting = true;
			*ingameNametagSetting = false;
		} else
			*ingameNametagSetting = false;  //disable other ppl's nametags

	g_Data.forEachEntity(drawNameTags);
}

void NameTags::onDisable() {
	if (ingameNametagSetting && gotPrevSetting) {
		*ingameNametagSetting = lastSetting;
		gotPrevSetting = false;
	}
}