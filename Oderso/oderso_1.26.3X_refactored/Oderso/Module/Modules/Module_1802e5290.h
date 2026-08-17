#pragma once
#ifndef ODERSO_MODULE_MODULE_1802E5290_H
#define ODERSO_MODULE_MODULE_1802E5290_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802e5290 : public IModule {
public:
	Module_1802e5290();
	~Module_1802e5290() {}

	virtual std::string getModuleName() override;
	

	virtual void onEnable() override;	virtual std::string getTooltip() override;
	virtual void onAttack(int attackButton, bool isDown, bool* cancel = nullptr) override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
	virtual void slot_30(int arg = 0, char mask = 0, bool* cancel = nullptr) override;

	float scale = 0.f;
	char _pad_0x84[0x30];
	int field_0xb4 = 0;
	int field_0xb8 = 0;
	int field_0xbc = 0;
	int field_0xc0 = 0;
	int field_0xc4 = 0;
	int field_0xc8 = 0;
	int field_0xcc = 0;
	int field_0xd0 = 0;
	int field_0xd4 = 0;
	char _pad_0xd8[0x280];
	void* field_0x1358 = nullptr;
};

#endif
