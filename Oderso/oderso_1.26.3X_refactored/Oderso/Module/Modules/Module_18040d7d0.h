#pragma once
#ifndef ODERSO_MODULE_MODULE_18040D7D0_H
#define ODERSO_MODULE_MODULE_18040D7D0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18040d7d0 : public IModule {
public:
	Module_18040d7d0();
	~Module_18040d7d0() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLevelRender() override;

	char _binaryPadding[0x48];
};

#endif
