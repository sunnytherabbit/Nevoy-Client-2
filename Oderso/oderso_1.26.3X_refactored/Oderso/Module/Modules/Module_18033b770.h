#pragma once
#ifndef ODERSO_MODULE_MODULE_18033B770_H
#define ODERSO_MODULE_MODULE_18033B770_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18033b770 : public IModule {
public:
	Module_18033b770();
	~Module_18033b770() {}

	virtual std::string getModuleName() override;

	virtual void onEnable() override;
	virtual void onDisable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	char _binaryPadding[0x28];
};

#endif
