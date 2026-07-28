#pragma once
#ifndef ODERSO_MODULE_MODULE_180243E70_H
#define ODERSO_MODULE_MODULE_180243E70_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180243e70 : public IModule {
public:
	Module_180243e70();
	~Module_180243e70() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool hold = false;
};

#endif
