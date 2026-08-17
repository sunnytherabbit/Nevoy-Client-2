#pragma once
#ifndef ODERSO_MODULE_MODULE_1801914F0_H
#define ODERSO_MODULE_MODULE_1801914F0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801914f0 : public IModule {
public:
	Module_1801914f0();
	~Module_1801914f0() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onDisable() override;
	virtual std::string getTooltip() override;
	virtual void onAttack(int attackButton, bool isDown, bool* cancel = nullptr) override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
	virtual void slot_31(int arg = 0, char mask = 0, bool* cancel = nullptr) override;

	bool alwaysSprint = false;

	// padding to match binary layout up to 0x14b
	char _binaryPadding[0xc5];

	bool field_0x148 = false;
	char _pad_0x149[1];
	bool field_0x14a = false;
};

#endif
