#pragma once
#ifndef ODERSO_MODULE_MODULE_180218DB0_H
#define ODERSO_MODULE_MODULE_180218DB0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180218db0 : public IModule {
public:
	Module_180218db0();
	~Module_180218db0() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onDisable() override;

private:
	// State cached by the binary dynamic-lighting logic (offsets 0x80..0x8e).
	// lastPos packs the last rounded block X (low 32 bits) and Z (high 32 bits).
	uint64_t lastPos = 0xfffffe0c00000000;  // 0x80
	int lastY = 0;                           // 0x88
	uint8_t lastLight = 0;                   // 0x8c
	bool active = false;                     // 0x8d
	uint8_t currentLight = 0;                // 0x8e
	uint8_t _pad0x8f = 0;                    // 0x8f, keeps the 0x10-byte region
};

#endif
