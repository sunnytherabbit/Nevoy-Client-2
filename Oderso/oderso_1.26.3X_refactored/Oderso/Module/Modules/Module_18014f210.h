#pragma once
#ifndef ODERSO_MODULE_MODULE_18014F210_H
#define ODERSO_MODULE_MODULE_18014F210_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18014f210 : public IModule {
public:
	Module_18014f210();
	~Module_18014f210() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
};

#endif
