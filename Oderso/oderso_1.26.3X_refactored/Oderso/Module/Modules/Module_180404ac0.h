#pragma once
#ifndef ODERSO_MODULE_MODULE_180404AC0_H
#define ODERSO_MODULE_MODULE_180404AC0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180404ac0 : public IModule {
public:
	Module_180404ac0();
	~Module_180404ac0() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
};

#endif
