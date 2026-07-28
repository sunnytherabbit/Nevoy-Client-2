#pragma once

#include "Module.h"
#include <set>

class NameTags : public IModule {
public:
	std::set<std::string> nameTags;

	// Decrypted Oderso settings from func_0x1803d65c1
	SettingEnum fontSetting = SettingEnum(this);

	bool shadow = false;
	bool rainbowText = false;
	bool background = false;
	bool outline = false;
	bool roundCorners = true;
	bool playerCount = true;
	bool displayHeads = false;
	bool isometricHeads = false;

	float outlineSize = 1.f;
	float roundness = 1.f;
	float radius = 4.2f;
	float textSize = 1.f;

	int maxColumns = 10;
	int maxRows = 5;

	struct ColorF { float r = 1.f; float g = 1.f; float b = 1.f; float a = 1.f; };
	ColorF textColor;
	ColorF backgroundColor;
	ColorF outlineColor;

	// Legacy draw parameters retained for DrawUtils::drawNameTags compatibility
	bool displayArmor = true;
	bool underline = true;
	float opacity = 0.2f;

	bool* ingameNametagSetting = nullptr;
	bool lastSetting = true;
	bool gotPrevSetting = false;

	NameTags();
	~NameTags();

	// Inherited via IModule
	virtual const char* getModuleName() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onDisable() override;
};
