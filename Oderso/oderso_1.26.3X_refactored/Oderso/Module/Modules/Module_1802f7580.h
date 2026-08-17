#pragma once
#ifndef ODERSO_MODULE_MODULE_1802F7580_H
#define ODERSO_MODULE_MODULE_1802F7580_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802f7580 : public IModule {
public:
	Module_1802f7580();
	~Module_1802f7580() {}

	virtual std::string getModuleName() override;
	

	virtual void onEnable() override;	virtual std::string getTooltip() override;
	virtual void slot_15() override;

	bool showGrid = false;

	// padding to match binary layout up to 0x370
	char _binaryPadding[0x2e8];
};

#endif
