#pragma once
#ifndef ODERSO_MODULE_MODULE_1801E6000_H
#define ODERSO_MODULE_MODULE_1801E6000_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801e6000 : public IModule {
public:
	Module_1801e6000();
	~Module_1801e6000() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
};

#endif
