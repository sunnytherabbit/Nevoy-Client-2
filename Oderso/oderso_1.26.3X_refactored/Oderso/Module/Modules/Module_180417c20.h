#pragma once
#ifndef ODERSO_MODULE_MODULE_180417C20_H
#define ODERSO_MODULE_MODULE_180417C20_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180417c20 : public IModule {
public:
	Module_180417c20();
	~Module_180417c20() {}

	virtual std::string getModuleName() override;

	SettingEnum hotbarTooltips;
	virtual std::string getTooltip() override;
};

#endif
