#pragma once
#ifndef ODERSO_MODULE_MODULE_1801C2930_H
#define ODERSO_MODULE_MODULE_1801C2930_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801c2930 : public IModule {
public:
	Module_1801c2930();
	~Module_1801c2930() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
};

#endif
