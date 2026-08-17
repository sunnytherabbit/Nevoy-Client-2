#pragma once
#ifndef ODERSO_MODULE_MODULE_180341050_H
#define ODERSO_MODULE_MODULE_180341050_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180341050 : public IModule {
public:
	Module_180341050();
	~Module_180341050() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
};

#endif
