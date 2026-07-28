#pragma once
#ifndef ODERSO_MODULE_MODULE_1802D3FD0_H
#define ODERSO_MODULE_MODULE_1802D3FD0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802d3fd0 : public IModule {
public:
	Module_1802d3fd0();
	~Module_1802d3fd0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	// No settings extracted yet
};

#endif
