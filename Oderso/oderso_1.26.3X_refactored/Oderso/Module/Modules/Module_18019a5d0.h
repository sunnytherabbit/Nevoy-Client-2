#pragma once
#ifndef ODERSO_MODULE_MODULE_18019A5D0_H
#define ODERSO_MODULE_MODULE_18019A5D0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18019a5d0 : public IModule {
public:
	Module_18019a5d0();
	~Module_18019a5d0() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	float size = 0.f;
	bool simpleNames = false;
	bool showNametag = false;
};

#endif
