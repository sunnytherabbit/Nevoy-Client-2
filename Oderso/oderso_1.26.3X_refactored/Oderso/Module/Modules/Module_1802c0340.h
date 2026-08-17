#pragma once
#ifndef ODERSO_MODULE_MODULE_1802C0340_H
#define ODERSO_MODULE_MODULE_1802C0340_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802c0340 : public IModule {
public:
	Module_1802c0340();
	~Module_1802c0340() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	virtual std::string getTooltip() override;

	// 0x80: registered setting
	bool disable = false;
	// 0x81: cached previous disable state
	bool lastDisable = false;
	char _pad0x82[2];

	// 0x84: registered multiplier setting (binary default 0.008726646)
	float multipli = 0.008726646f;

	// 0x88: internal base value used by onPreRender
	float value = 1.0f;
	// 0x8c: cached previous input value
	float lastValue = -1.0f;

	// 0x90: sign/negate flag, 0x91: cached previous sign
	bool negative = false;
	bool lastNegative = false;
	char _pad0x92[2];

	// 0x94: original 4 bytes saved by onEnable
	uint32_t savedCode = 0;
	// 0x98: executable float buffer used by the code patch
	float* codeBuf = nullptr;
};

static_assert(sizeof(Module_1802c0340) == 0xa0, "Module_1802c0340 must match the binary object size");

#endif
