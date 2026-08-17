#pragma once
#ifndef ODERSO_MODULE_MODULE_18021F300_H
#define ODERSO_MODULE_MODULE_18021F300_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18021f300 : public IModule {
public:
	Module_18021f300();
	~Module_18021f300() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;

	bool players = false;
	bool checkFe = false;
	float checkHe = 0.f;
	float maxHitboxWidth = 0.f;
	float setting = 0.f;
};

#endif
