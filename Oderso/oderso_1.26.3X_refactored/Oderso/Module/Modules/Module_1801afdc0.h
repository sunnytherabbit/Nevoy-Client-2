#pragma once
#ifndef ODERSO_MODULE_MODULE_1801AFDC0_H
#define ODERSO_MODULE_MODULE_1801AFDC0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801afdc0 : public IModule {
public:
	Module_1801afdc0();
	~Module_1801afdc0() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
};

#endif
