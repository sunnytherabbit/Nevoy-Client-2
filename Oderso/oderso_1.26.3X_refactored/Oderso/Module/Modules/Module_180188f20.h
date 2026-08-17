#pragma once
#ifndef ODERSO_MODULE_MODULE_180188F20_H
#define ODERSO_MODULE_MODULE_180188F20_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180188f20 : public IModule {
public:
	Module_180188f20();
	~Module_180188f20() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
};

#endif
