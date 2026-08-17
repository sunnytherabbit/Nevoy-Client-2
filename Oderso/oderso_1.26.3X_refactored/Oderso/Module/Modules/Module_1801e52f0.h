#pragma once
#ifndef ODERSO_MODULE_MODULE_1801E52F0_H
#define ODERSO_MODULE_MODULE_1801E52F0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801e52f0 : public IModule {
public:
	Module_1801e52f0();
	~Module_1801e52f0() {}

	virtual std::string getModuleName() override;

	virtual void onEnable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;

	char _binaryPadding[0x8];
};

#endif
