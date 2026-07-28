#pragma once
#ifndef ODERSO_MODULE_MODULE_1801914F0_H
#define ODERSO_MODULE_MODULE_1801914F0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801914f0 : public IModule {
public:
	Module_1801914f0();
	~Module_1801914f0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool alwaysSprint = false;
};

#endif
