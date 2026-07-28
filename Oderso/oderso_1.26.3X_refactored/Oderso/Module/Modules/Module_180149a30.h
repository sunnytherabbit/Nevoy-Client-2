#pragma once
#ifndef ODERSO_MODULE_MODULE_180149A30_H
#define ODERSO_MODULE_MODULE_180149A30_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180149a30 : public IModule {
public:
	Module_180149a30();
	~Module_180149a30() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool disable = false;
	bool noBackground = false;
	bool noNumbe = false;
};

#endif
