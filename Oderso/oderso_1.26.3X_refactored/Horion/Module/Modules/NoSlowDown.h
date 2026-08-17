#pragma once
#include "Module.h"
class NoSlowDown : public IModule {
private:
	uint8_t* opcode = 0;
	uint8_t* opcode1 = 0;

public:
	NoSlowDown();
	~NoSlowDown();

	// Inherited via IModule
	virtual std::string getModuleName() override;
	virtual void onEnable() override;
	virtual void onDisable() override;
};
