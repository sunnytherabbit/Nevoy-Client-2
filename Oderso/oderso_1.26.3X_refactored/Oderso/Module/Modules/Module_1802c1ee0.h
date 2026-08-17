#pragma once
#ifndef ODERSO_MODULE_MODULE_1802C1EE0_H
#define ODERSO_MODULE_MODULE_1802C1EE0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802c1ee0 : public IModule {
public:
	Module_1802c1ee0();
	~Module_1802c1ee0() {}

	virtual std::string getModuleName() override;

	virtual void onEnable() override;
	virtual void onDisable() override;
	virtual std::string getTooltip() override;

	float speed = 0.f;  // 0x80
	float yMul = 0.f;   // 0x84
	float zMul = 0.f;   // 0x88
	char _pad0x8c[4];   // 0x8c-0x8f
};

static_assert(sizeof(Module_1802c1ee0) == 0x90, "Module_1802c1ee0 must match the binary object size");

#endif
