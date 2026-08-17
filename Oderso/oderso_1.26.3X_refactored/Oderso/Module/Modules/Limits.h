#pragma once
#ifndef ODERSO_MODULE_LIMITS_H
#define ODERSO_MODULE_LIMITS_H

#include "../../../Horion/Module/Modules/Module.h"

class Limits : public IModule {
public:
	Limits();
	~Limits() {}

	virtual std::string getModuleName() override;
	

	virtual void onEnable() override;	virtual std::string getTooltip() override;

	int limitLe = 0;
	bool limitRight = false;

	// padding to match binary layout up to 0xa0
	char _binaryPadding[0x20];
};

#endif
