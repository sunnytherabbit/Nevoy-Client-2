#pragma once
#ifndef ODERSO_MODULE_MODULE_180136CD0_H
#define ODERSO_MODULE_MODULE_180136CD0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180136cd0 : public IModule {
public:
	Module_180136cd0();
	~Module_180136cd0() {}

	virtual std::string getModuleName() override;

	virtual void onEnable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;
};

#endif
