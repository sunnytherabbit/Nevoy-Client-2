#pragma once
#include "Module.h"
class MidClick : public IModule {
private:
	bool hasClicked = false;

public:
	MidClick();
	~MidClick();
	// Inherited via IModule
	virtual std::string getModuleName() override;
	virtual void onTick(C_GameMode* gm) override;
};
