#pragma once
#ifndef ODERSO_MODULE_MAKE_H
#define ODERSO_MODULE_MAKE_H

#include "../../../Horion/Module/Modules/Module.h"

class Make : public IModule {
public:
	Make();
	~Make() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool ignoreSecond = false;
	bool forwardBackward = false;
};

#endif
