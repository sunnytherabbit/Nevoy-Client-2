#pragma once
#ifndef ODERSO_MODULE_MODULE_1803404A0_H
#define ODERSO_MODULE_MODULE_1803404A0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1803404a0 : public IModule {
public:
	Module_1803404a0();
	~Module_1803404a0() {}

	virtual std::string getModuleName() override;

	virtual void onEnable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;

	// padding to match binary layout up to 0x98
	char _binaryPadding[0x18];
};

#endif
