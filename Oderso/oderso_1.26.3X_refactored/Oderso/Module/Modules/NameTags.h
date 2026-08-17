// MANUAL
#pragma once
#ifndef ODERSO_MODULE_NAMETAGS_H
#define ODERSO_MODULE_NAMETAGS_H

#include "../../../Horion/Module/Modules/Module.h"

class NameTags : public IModule {
public:
	NameTags();
	~NameTags();

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;
	virtual bool isFlashMode() override;

	SettingEnum font;
	bool rainbowText = true;
	bool background = true;
	bool outline = true;
	float outlineSize = 1.f;
	bool roundCorners = true;
	float roundness = 5.f;
	int maxColumns = 10;
	int maxRows = 4;
	float textSize = 1.f;
	bool displayHeads = true;
};

#endif
