#pragma once
#ifndef ODERSO_MODULE_MODULE_1802FB570_H
#define ODERSO_MODULE_MODULE_1802FB570_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802fb570 : public IModule {
public:
	Module_1802fb570();
	~Module_1802fb570() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
};

#endif
