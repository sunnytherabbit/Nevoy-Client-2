#pragma once
#ifndef ODERSO_MODULE_SKINSTEALER_H
#define ODERSO_MODULE_SKINSTEALER_H

#include "../../../Horion/Module/Modules/Module.h"

class SkinStealer : public IModule {
public:
	SkinStealer();
	~SkinStealer() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool selfStet = false;
	bool skin = false;
	bool cape = false;
	bool geometry = false;
	bool copyPath = false;
	bool clone = false;
};

#endif
