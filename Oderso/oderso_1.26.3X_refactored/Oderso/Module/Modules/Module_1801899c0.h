#pragma once
#ifndef ODERSO_MODULE_MODULE_1801899C0_H
#define ODERSO_MODULE_MODULE_1801899C0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801899c0 : public IModule {
public:
	Module_1801899c0();
	~Module_1801899c0() {}

	virtual std::string getModuleName() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onAttack(int attackButton, bool isDown, bool* cancel = nullptr) override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
	virtual void slot_30(int arg = 0, char mask = 0, bool* cancel = nullptr) override;

	char _binaryPadding[0x40];
};

#endif
