#pragma once
#ifndef ODERSO_MODULE_MODULE_1802501F0_H
#define ODERSO_MODULE_MODULE_1802501F0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802501f0 : public IModule {
public:
	Module_1802501f0();
	~Module_1802501f0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	// No settings extracted yet
};

#endif
