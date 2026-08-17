#pragma once
#ifndef ODERSO_MODULE_MODULE_1801749E0_H
#define ODERSO_MODULE_MODULE_1801749E0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801749e0 : public IModule {
public:
	Module_1801749e0();
	~Module_1801749e0() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;
	virtual void slot_15() override;

	int radius = 0;
	bool fixedHeight = false;
	float yPositib = 0.f;

	char _binaryPadding[0x28];
};

#endif
