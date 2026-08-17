#pragma once
#ifndef ODERSO_MODULE_MODULE_18018D820_H
#define ODERSO_MODULE_MODULE_18018D820_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18018d820 : public IModule {
public:
	Module_18018d820();
	~Module_18018d820() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;	
	virtual void onEnable() override;	virtual std::string getTooltip() override;

	int sE = 0;                  // 0x80

	bool field_0x84 = false;     // 0x84
	bool running = false;        // 0x85
	char _pad_0x86[0x2];         // 0x86

	int targetTime = -1;         // 0x88
	int timeSetting = 0x1770;    // 0x8c
	char _pad_0x90[0x4];         // 0x90
};

#endif
