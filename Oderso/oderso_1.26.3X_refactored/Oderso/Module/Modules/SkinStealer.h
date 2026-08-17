#pragma once
#ifndef ODERSO_MODULE_SKINSTEALER_H
#define ODERSO_MODULE_SKINSTEALER_H

#include "../../../Horion/Module/Modules/Module.h"

class SkinStealer : public IModule {
public:
	SkinStealer();
	~SkinStealer() {}

	virtual std::string getModuleName() override;
	

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual std::string getTooltip() override;

	bool selfStet = false;
	bool skin = false;
	bool cape = false;
	bool geometry = false;
	bool copyPath = false;
	bool clone = false;

	char _binaryPadding[0x10];
};

#endif
