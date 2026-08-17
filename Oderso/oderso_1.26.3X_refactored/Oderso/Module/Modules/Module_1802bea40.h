#pragma once
#ifndef ODERSO_MODULE_MODULE_1802BEA40_H
#define ODERSO_MODULE_MODULE_1802BEA40_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802bea40 : public IModule {
public:
	Module_1802bea40();
	~Module_1802bea40() {}

	virtual std::string getModuleName() override;

	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	virtual std::string getTooltip() override;

	// Binary state for 4-byte code patch (onEnable saves, onDisable restores).
	uint32_t savedCode = 0;
	char _pad_0x84[4];
	void* codeBuf = nullptr;

	bool rainbow = false;
	char _pad_0x91[3];
	float color1[3] = {0.f, 0.f, 0.f};
	float color1Alpha = 0.f;
	float color2[3] = {0.f, 0.f, 0.f};
	float color2Alpha = 1.0f;
	float field_0xb0 = 1.0f;
	float field_0xb4 = 0.f;
};

#endif
