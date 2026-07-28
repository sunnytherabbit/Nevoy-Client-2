#pragma once
#ifndef ODERSO_MODULE_MODULE_1802CFA50_H
#define ODERSO_MODULE_MODULE_1802CFA50_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802cfa50 : public IModule {
public:
	Module_1802cfa50();
	~Module_1802cfa50() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	int radius = 0;
	bool litColor = false;
	bool showLightLevel = false;
};

#endif
