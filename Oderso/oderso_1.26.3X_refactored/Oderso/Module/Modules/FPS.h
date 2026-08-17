// MANUAL
#pragma once
#ifndef ODERSO_MODULE_FPS_H
#define ODERSO_MODULE_FPS_H

#include "../../../Horion/Module/Modules/Module.h"

class FPS : public IModule {
public:
	FPS();
	~FPS() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
};

#endif
