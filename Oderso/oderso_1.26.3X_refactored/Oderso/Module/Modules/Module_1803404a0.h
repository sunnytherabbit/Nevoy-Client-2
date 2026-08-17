#pragma once
#ifndef ODERSO_MODULE_MODULE_1803404A0_H
#define ODERSO_MODULE_MODULE_1803404A0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1803404a0 : public IModule {
public:
	Module_1803404a0();
	~Module_1803404a0() {}

	virtual std::string getModuleName() override;

	virtual void onEnable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;

	// padding to match binary layout
	char _binaryPadding[0x8];

	uint64_t field_0x88 = 0;
	uint64_t field_0x90 = 0;
};

static_assert(offsetof(Module_1803404a0, field_0x88) == 0x88, "field_0x88 offset mismatch");
static_assert(offsetof(Module_1803404a0, field_0x90) == 0x90, "field_0x90 offset mismatch");
static_assert(sizeof(Module_1803404a0) == 0x98, "Module_1803404a0 size must be 0x98");

#endif
