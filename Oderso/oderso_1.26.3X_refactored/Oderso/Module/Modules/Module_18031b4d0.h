#pragma once
#ifndef ODERSO_MODULE_MODULE_18031B4D0_H
#define ODERSO_MODULE_MODULE_18031B4D0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18031b4d0 : public IModule {
public:
	Module_18031b4d0();
	~Module_18031b4d0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool disable = false;
	float color = 0.f;
	bool changeHeight = false;
};

#endif
