#pragma once
#ifndef ODERSO_MODULE_MODULE_18032CE60_H
#define ODERSO_MODULE_MODULE_18032CE60_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18032ce60 : public IModule {
public:
	Module_18032ce60();
	~Module_18032ce60() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	bool showX = false;
	bool showY = false;
	bool showZ = false;
	SettingEnum separator;
	bool decimal = false;
};

#endif
