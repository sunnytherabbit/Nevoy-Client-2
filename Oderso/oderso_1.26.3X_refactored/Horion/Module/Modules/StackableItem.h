#pragma once
#include "Module.h"

class StackableItem : public IModule {
public:
	StackableItem();
	~StackableItem();

	virtual std::string getModuleName() override;
	virtual void onTick(C_GameMode* gm) override;
};
