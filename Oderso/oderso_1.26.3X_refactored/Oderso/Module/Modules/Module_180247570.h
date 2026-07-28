#pragma once
#ifndef ODERSO_MODULE_MODULE_180247570_H
#define ODERSO_MODULE_MODULE_180247570_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180247570 : public IModule {
public:
	Module_180247570();
	~Module_180247570() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	float scale = 0.f;
};

#endif
