// MANUAL
#pragma once
#ifndef ODERSO_MODULE_NOFIRE_H
#define ODERSO_MODULE_NOFIRE_H

#include "../../../Horion/Module/Modules/Module.h"

class NoFire : public IModule {
public:
	NoFire();
	~NoFire() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool noFire = false;
	float height = 1.5f;
};

#endif
