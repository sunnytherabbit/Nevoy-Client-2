#pragma once
#ifndef ODERSO_MODULE_MODULE_18033B770_H
#define ODERSO_MODULE_MODULE_18033B770_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18033b770 : public IModule {
public:
	Module_18033b770();
	~Module_18033b770() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	// No settings extracted yet
};

#endif
