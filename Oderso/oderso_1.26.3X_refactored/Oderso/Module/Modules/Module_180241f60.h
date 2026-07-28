#pragma once
#ifndef ODERSO_MODULE_MODULE_180241F60_H
#define ODERSO_MODULE_MODULE_180241F60_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180241f60 : public IModule {
public:
	Module_180241f60();
	~Module_180241f60() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	// No settings extracted yet
};

#endif
