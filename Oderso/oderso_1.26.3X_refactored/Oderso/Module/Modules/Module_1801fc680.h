#pragma once
#ifndef ODERSO_MODULE_MODULE_1801FC680_H
#define ODERSO_MODULE_MODULE_1801FC680_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801fc680 : public IModule {
public:
	Module_1801fc680();
	~Module_1801fc680() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	float size = 0.f;
	bool shadow = false;
	bool rainbowText = false;
	bool simpleNames = false;
	bool showItem = false;
};

#endif
