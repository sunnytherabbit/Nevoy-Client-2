#pragma once
#ifndef ODERSO_MODULE_MODULE_1803455D0_H
#define ODERSO_MODULE_MODULE_1803455D0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1803455d0 : public IModule {
public:
	Module_1803455d0();
	~Module_1803455d0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool disable = false;
	bool noBackground = false;
};

#endif
