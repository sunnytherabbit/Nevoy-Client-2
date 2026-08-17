#pragma once
#ifndef ODERSO_MODULE_MODULE_1802452C0_H
#define ODERSO_MODULE_MODULE_1802452C0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802452c0 : public IModule {
public:
	Module_1802452c0();
	~Module_1802452c0() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
};

#endif
