#pragma once
#ifndef ODERSO_MODULE_LIMITS_H
#define ODERSO_MODULE_LIMITS_H

#include "../../../Horion/Module/Modules/Module.h"

class Limits : public IModule {
public:
	Limits();
	~Limits() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	int limitLe = 0;
	bool limitRight = false;
};

#endif
