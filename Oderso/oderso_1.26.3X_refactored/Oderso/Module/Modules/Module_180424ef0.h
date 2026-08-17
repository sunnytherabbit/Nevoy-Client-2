#pragma once
#ifndef ODERSO_MODULE_MODULE_180424EF0_H
#define ODERSO_MODULE_MODULE_180424EF0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180424ef0 : public IModule {
public:
	Module_180424ef0();
	~Module_180424ef0() {}

	virtual std::string getModuleName() override;

	virtual void onEnable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void slot_15() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	char _binaryPadding[0xb0];
};

#endif
