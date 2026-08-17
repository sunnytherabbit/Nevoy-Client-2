#pragma once
#ifndef ODERSO_MODULE_MODULE_1802CE320_H
#define ODERSO_MODULE_MODULE_1802CE320_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802ce320 : public IModule {
public:
	Module_1802ce320();
	~Module_1802ce320() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
};

#endif
