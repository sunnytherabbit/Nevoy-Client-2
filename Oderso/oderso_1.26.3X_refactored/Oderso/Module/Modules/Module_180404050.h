#pragma once
#ifndef ODERSO_MODULE_MODULE_180404050_H
#define ODERSO_MODULE_MODULE_180404050_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180404050 : public IModule {
public:
	Module_180404050();
	~Module_180404050() {}

	virtual std::string getModuleName() override;

	virtual void onEnable() override;
	virtual void onDisable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;
	bool field_0x80 = false;
};

#endif
