#pragma once
#ifndef ODERSO_MODULE_MODULE_180415790_H
#define ODERSO_MODULE_MODULE_180415790_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180415790 : public IModule {
public:
	Module_180415790();
	~Module_180415790() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
};

#endif
