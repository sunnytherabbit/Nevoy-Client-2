#pragma once
#ifndef ODERSO_MODULE_MODULE_180223CC0_H
#define ODERSO_MODULE_MODULE_180223CC0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180223cc0 : public IModule {
public:
	Module_180223cc0();
	~Module_180223cc0() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;

	bool visible = false;
	bool crosshair = false;
	SettingEnum skyBlot;
	bool backgrou = false;
	SettingEnum font;
	bool shadow = false;
	bool rainbowText = false;
	bool version = false;
	bool fPS = false;
	bool world = false;
	bool server = false;
	bool ping = false;
	bool player = false;
	bool item = false;
	bool hardware = false;
};

#endif
