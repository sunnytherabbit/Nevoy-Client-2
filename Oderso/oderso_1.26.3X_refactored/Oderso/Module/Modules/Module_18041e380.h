#pragma once
#ifndef ODERSO_MODULE_MODULE_18041E380_H
#define ODERSO_MODULE_MODULE_18041E380_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18041e380 : public IModule {
public:
	Module_18041e380();
	~Module_18041e380() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
};

#endif
