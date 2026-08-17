#pragma once
#ifndef ODERSO_MODULE_MODULE_1802039A0_H
#define ODERSO_MODULE_MODULE_1802039A0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802039a0 : public IModule {
public:
	Module_1802039a0();
	~Module_1802039a0() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	bool dynamicColor = false;
};

#endif
