#pragma once
#include "Module.h"

class AirStuck : public IModule {
public:
	AirStuck();
	~AirStuck();

	virtual std::string getModuleName() override;
	virtual void onTick(C_GameMode* gm) override;
};
