#pragma once
#ifndef ODERSO_MODULE_MODULE_18024B340_H
#define ODERSO_MODULE_MODULE_18024B340_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18024b340 : public IModule {
public:
	Module_18024b340();
	~Module_18024b340() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool mobs = false;
	bool projectiles = false;
	bool items = false;
	float viewDir = 0.f;
	bool eye = false;
	bool rainbow = false;
	bool hitHelppgg = false;
};

#endif
