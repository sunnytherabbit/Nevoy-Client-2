#pragma once
#ifndef ODERSO_MODULE_MODULE_1802D3FD0_H
#define ODERSO_MODULE_MODULE_1802D3FD0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802d3fd0 : public IModule {
public:
	Module_1802d3fd0();
	~Module_1802d3fd0() {}

	virtual std::string getModuleName() override;

	virtual void onEnable() override;
	virtual void onDisable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;

	char _binaryPadding[0x10];
};

#endif
