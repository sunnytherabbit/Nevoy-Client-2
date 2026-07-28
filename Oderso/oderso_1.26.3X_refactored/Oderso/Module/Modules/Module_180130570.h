#pragma once
#ifndef ODERSO_MODULE_MODULE_180130570_H
#define ODERSO_MODULE_MODULE_180130570_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180130570 : public IModule {
public:
	Module_180130570();
	~Module_180130570() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	int changeAmount = 0;
};

#endif
