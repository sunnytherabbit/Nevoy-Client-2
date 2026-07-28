#pragma once
#ifndef ODERSO_MODULE_MODULE_1801E7620_H
#define ODERSO_MODULE_MODULE_1801E7620_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801e7620 : public IModule {
public:
	Module_1801e7620();
	~Module_1801e7620() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool entities = false;
	bool items = false;
	bool uUM = false;
	bool hUD = false;
	bool particles = false;
	bool sky = false;
	bool weather = false;
	bool portalOverlay = false;
	bool fire = false;
	bool lightning = false;
};

#endif
