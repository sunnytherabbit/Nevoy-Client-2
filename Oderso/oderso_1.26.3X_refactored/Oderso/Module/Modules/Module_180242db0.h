#pragma once
#ifndef ODERSO_MODULE_MODULE_180242DB0_H
#define ODERSO_MODULE_MODULE_180242DB0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180242db0 : public IModule {
public:
	Module_180242db0();
	~Module_180242db0() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;

	bool rainbow = false;
};

#endif
