#pragma once
#ifndef ODERSO_MODULE_MODULE_180178C80_H
#define ODERSO_MODULE_MODULE_180178C80_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180178c80 : public IModule {
public:
	Module_180178c80();
	~Module_180178c80() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;

	float uUM = 0.f;
	float sE = 0.f;
	float multiplierLsX = 0.f;
	float multiplierLsY = 0.f;
	float multiplierRsX = 0.f;
};

#endif
