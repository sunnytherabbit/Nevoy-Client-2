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

	float speed = 0.f;
	float yMul = 0.f;
	float zMul = 0.f;
};

#endif
