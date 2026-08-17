#pragma once
#ifndef ODERSO_MODULE_MODULE_18018F510_H
#define ODERSO_MODULE_MODULE_18018F510_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18018f510 : public IModule {
public:
	Module_18018f510();
	~Module_18018f510() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onDisable() override;
	virtual std::string getTooltip() override;
	virtual void onAttack(int attackButton, bool isDown, bool* cancel = nullptr) override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
	virtual void slot_31(int arg = 0, char mask = 0, bool* cancel = nullptr) override;

	// padding to match binary layout; first real field is at 0x148
	char _binaryPadding[0xc8];

	bool alwaysSneak = false;    // 0x148
	bool hideText = false;       // 0x149
	bool sneakToggled = false;   // 0x14a
};

static_assert(offsetof(Module_18018f510, alwaysSneak) == 0x148, "alwaysSneak offset mismatch");
static_assert(offsetof(Module_18018f510, hideText) == 0x149, "hideText offset mismatch");
static_assert(offsetof(Module_18018f510, sneakToggled) == 0x14a, "sneakToggled offset mismatch");

#endif
