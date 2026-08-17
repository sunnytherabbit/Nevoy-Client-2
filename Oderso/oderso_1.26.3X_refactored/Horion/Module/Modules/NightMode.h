#pragma once
#include "../ModuleManager.h"
#include "Module.h"

class NightMode : public IModule {
public:
	NightMode();
	~NightMode();

	float modifier = 0.5f;

	// Inherited via IModule
	virtual std::string getModuleName() override;
	virtual void onEnable() override;
};
