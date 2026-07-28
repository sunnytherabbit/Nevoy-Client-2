#pragma once
#ifndef ODERSO_MODULE_MODULE_1801899C0_H
#define ODERSO_MODULE_MODULE_1801899C0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801899c0 : public IModule {
public:
	Module_1801899c0();
	~Module_1801899c0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	// No settings extracted yet
};

#endif
