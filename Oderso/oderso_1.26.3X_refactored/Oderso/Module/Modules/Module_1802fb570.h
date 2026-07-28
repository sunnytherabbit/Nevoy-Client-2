#pragma once
#ifndef ODERSO_MODULE_MODULE_1802FB570_H
#define ODERSO_MODULE_MODULE_1802FB570_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802fb570 : public IModule {
public:
	Module_1802fb570();
	~Module_1802fb570() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	// No settings extracted yet
};

#endif
