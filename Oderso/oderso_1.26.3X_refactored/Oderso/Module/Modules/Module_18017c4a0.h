#pragma once
#ifndef ODERSO_MODULE_MODULE_18017C4A0_H
#define ODERSO_MODULE_MODULE_18017C4A0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18017c4a0 : public IModule {
public:
	Module_18017c4a0();
	~Module_18017c4a0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool stopOnEvent = false;
};

#endif
