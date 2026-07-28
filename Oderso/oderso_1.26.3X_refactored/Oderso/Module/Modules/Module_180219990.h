#pragma once
#ifndef ODERSO_MODULE_MODULE_180219990_H
#define ODERSO_MODULE_MODULE_180219990_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180219990 : public IModule {
public:
	Module_180219990();
	~Module_180219990() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	float size = 0.f;
};

#endif
