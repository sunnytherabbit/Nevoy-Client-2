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

private:
	// IModule is 0x80 bytes; binary fields live at 0x148, 0x149 and 0x14a.
	char _binaryPadding[0xc8];

public:
	// 0x148: "Always sprint" setting.
	bool alwaysSprint = false;
	// 0x149: "Hide text" setting.
	bool hideText = false;
	// 0x14a: manual toggle state, toggled by onAttack / slot_31.
	bool sprintToggle = false;

private:
	// Pad to 0x150 to keep the object well-sized for any binary-sized comparisons.
	char _binaryPadding2[0x6];
};

#endif
