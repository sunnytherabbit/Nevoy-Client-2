#pragma once
#include "Module.h"
class FastEat : public IModule {
public:
	FastEat();
	~FastEat();

	// Inherited via IModule
	virtual std::string getModuleName() override;
	virtual void onTick(C_GameMode* gm) override;
	virtual void onDisable() override;
};
