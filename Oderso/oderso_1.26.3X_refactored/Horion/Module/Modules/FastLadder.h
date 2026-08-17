#pragma once
#include "Module.h"
class FastLadder : public IModule {
public:
	float speed = 0.6f;

	FastLadder();
	~FastLadder();

	// Inherited via IModule
	virtual std::string getModuleName() override;
};
