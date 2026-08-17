#pragma once
#include "Module.h"

class Nbt : public IModule {
private:
	std::string lastCopy;

public:
	Nbt();
	~Nbt();

	virtual std::string getModuleName() override;
	virtual void onTick(C_GameMode* gm) override;
};
