#pragma once
#ifndef ODERSO_MODULE_MODULE_18020CA00_H
#define ODERSO_MODULE_MODULE_18020CA00_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18020ca00 : public IModule {
public:
	Module_18020ca00();
	~Module_18020ca00() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
};

#endif
