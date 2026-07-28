#pragma once
#ifndef ODERSO_MODULE_MODULE_180347D80_H
#define ODERSO_MODULE_MODULE_180347D80_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180347d80 : public IModule {
public:
	Module_180347d80();
	~Module_180347d80() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	// No settings extracted yet
};

#endif
