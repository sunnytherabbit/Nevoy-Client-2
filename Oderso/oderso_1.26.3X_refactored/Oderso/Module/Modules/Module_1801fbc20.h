#pragma once
#ifndef ODERSO_MODULE_MODULE_1801FBC20_H
#define ODERSO_MODULE_MODULE_1801FBC20_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801fbc20 : public IModule {
public:
	Module_1801fbc20();
	~Module_1801fbc20() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
};

#endif
