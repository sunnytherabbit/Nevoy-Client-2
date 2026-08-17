#pragma once
#ifndef ODERSO_MODULE_MODULE_1801EDBA0_H
#define ODERSO_MODULE_MODULE_1801EDBA0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801edba0 : public IModule {
public:
	Module_1801edba0();
	~Module_1801edba0() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;

	bool shadow = false;
	bool rainbowText = false;
};

#endif
