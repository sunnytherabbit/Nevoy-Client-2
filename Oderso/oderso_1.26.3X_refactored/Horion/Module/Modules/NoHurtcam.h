#pragma once
#include "Module.h"

class NoHurtcam : public IModule{
public:
	NoHurtcam();
	~NoHurtcam();
	std::string getModuleName() override;
};
