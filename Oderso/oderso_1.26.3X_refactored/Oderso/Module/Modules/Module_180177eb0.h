#pragma once
#ifndef ODERSO_MODULE_MODULE_180177EB0_H
#define ODERSO_MODULE_MODULE_180177EB0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180177eb0 : public IModule {
public:
	Module_180177eb0();
	~Module_180177eb0() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
};

#endif
