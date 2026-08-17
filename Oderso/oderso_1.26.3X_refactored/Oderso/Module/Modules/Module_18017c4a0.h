#pragma once
#ifndef ODERSO_MODULE_MODULE_18017C4A0_H
#define ODERSO_MODULE_MODULE_18017C4A0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18017c4a0 : public IModule {
public:
	Module_18017c4a0();
	~Module_18017c4a0() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual std::string getTooltip() override;
	virtual void onAttack(int attackButton, bool isDown, bool* cancel = nullptr) override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
	virtual void slot_30(int arg = 0, char mask = 0, bool* cancel = nullptr) override;

	bool stopOnEvent = false;

	char _pad_0x81[0xc7];

	bool flag_0x148 = false;
	bool field_0x149 = false;
	bool field_0x14a = false;
	char _pad_0x14b;
	int attackKey = 0;
	int otherKey = 0;
	bool flag_0x154 = false;
	char _pad_0x155[3];
	__int64 time_0x158 = 0;
	__int64 accumulated_0x160 = 0;
};

#endif
