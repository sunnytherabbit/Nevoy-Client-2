#pragma once
#ifndef ODERSO_MODULE_MODULE_1801A0E40_H
#define ODERSO_MODULE_MODULE_1801A0E40_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801a0e40 : public IModule {
public:
	Module_1801a0e40();
	~Module_1801a0e40() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
};

#endif
