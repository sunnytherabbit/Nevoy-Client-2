#pragma once
#ifndef ODERSO_MODULE_MODULE_1802D3FD0_H
#define ODERSO_MODULE_MODULE_1802D3FD0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802d3fd0 : public IModule {
public:
	Module_1802d3fd0();
	~Module_1802d3fd0() {}

	virtual std::string getModuleName() override;

	virtual void onEnable() override;
	virtual void onDisable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;

	uint32_t savedCode = 0;
	char _pad0x84[0x4];
	void* codeBuf = nullptr;
};

static_assert(offsetof(Module_1802d3fd0, savedCode) == 0x80, "savedCode offset mismatch");
static_assert(offsetof(Module_1802d3fd0, codeBuf) == 0x88, "codeBuf offset mismatch");
static_assert(sizeof(Module_1802d3fd0) == 0x90, "Module_1802d3fd0 size must be 0x90");

#endif
