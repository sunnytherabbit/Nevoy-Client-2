#pragma once
#ifndef ODERSO_MODULE_MODULE_180243E70_H
#define ODERSO_MODULE_MODULE_180243E70_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180243e70 : public IModule {
public:
	Module_180243e70();
	~Module_180243e70() {}

	virtual std::string getModuleName() override;
	

	virtual void onEnable() override;	virtual std::string getTooltip() override;
	virtual bool isFlashMode() override;

	bool hold = false;

	float storedX = 0.f;
	float storedY = 0.f;
};

#endif
