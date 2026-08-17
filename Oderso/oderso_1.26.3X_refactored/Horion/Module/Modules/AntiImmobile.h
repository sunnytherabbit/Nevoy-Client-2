#pragma once
#include "Module.h"

class AntiImmobile : public IModule {
public:
	AntiImmobile();
	~AntiImmobile();

	std::string getModuleName() override;
};
