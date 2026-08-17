#pragma once
#include "Module.h"
class HighJump : public IModule {
public:
	float jumpPower = 1.8f;
	HighJump();
	~HighJump();

	// Inherited via IModule
	virtual std::string getModuleName() override;
};
