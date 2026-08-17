#pragma once
#ifndef ODERSO_MODULE_MODULE_1804168F0_H
#define ODERSO_MODULE_MODULE_1804168F0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1804168f0 : public IModule {
public:
	Module_1804168f0();
	~Module_1804168f0() {}

	virtual std::string getModuleName() override;

	virtual void onEnable() override;
	virtual void onDisable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void slot_15() override;
	int field_0x80 = 0;
	char _pad_0x84[0x1c];
	int field_0xa0 = 0;
};

#endif
