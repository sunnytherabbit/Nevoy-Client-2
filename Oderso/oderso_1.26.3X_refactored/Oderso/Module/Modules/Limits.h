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

	int limitLe = 0;        // 0x80
	bool limitRight = false; // 0x84
	char _pad0x85[0xb];      // 0x85-0x8f

	uint64_t field_0x90 = 0; // 0x90
	uint64_t field_0x98 = 0; // 0x98
};

static_assert(sizeof(Limits) == 0xa0, "Limits must match the binary object size");

#endif
