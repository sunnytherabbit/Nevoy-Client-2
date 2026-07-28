#pragma once
#ifndef ODERSO_MODULE_MODULE_1803238C0_H
#define ODERSO_MODULE_MODULE_1803238C0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1803238c0 : public IModule {
public:
	Module_1803238c0();
	~Module_1803238c0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool shadow = false;
	float size = 0.f;
	float smoothne6B = 0.f;
	float radius = 0.f;
	bool animation = false;
	SettingEnum buttonLayout;
};

#endif
