#pragma once
#ifndef ODERSO_MODULE_MODULE_18041E380_H
#define ODERSO_MODULE_MODULE_18041E380_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18041e380 : public IModule {
public:
	Module_18041e380();
	~Module_18041e380() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	// No settings extracted yet
};

#endif
