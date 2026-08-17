#pragma once
#ifndef ODERSO_MODULE_MODULE_1801E20D0_H
#define ODERSO_MODULE_MODULE_1801E20D0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801e20d0 : public IModule {
public:
	Module_1801e20d0();
	~Module_1801e20d0() {}

	virtual std::string getModuleName() override;

	virtual void onEnable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	char _binaryPadding[0x20];
};

#endif
