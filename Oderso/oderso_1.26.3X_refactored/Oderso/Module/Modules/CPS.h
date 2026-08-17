// MANUAL
#pragma once
#ifndef ODERSO_MODULE_CPS_H
#define ODERSO_MODULE_CPS_H

#include "../../../Horion/Module/Modules/Module.h"

class CPS : public IModule {
public:
	CPS();
	~CPS() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
};

#endif
