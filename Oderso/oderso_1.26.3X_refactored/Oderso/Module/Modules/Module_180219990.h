#pragma once
#ifndef ODERSO_MODULE_MODULE_180219990_H
#define ODERSO_MODULE_MODULE_180219990_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180219990 : public IModule {
public:
	Module_180219990();
	~Module_180219990() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	float size = 0.f;
};

#endif
