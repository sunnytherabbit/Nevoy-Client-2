#pragma once
#ifndef ODERSO_MODULE_MODULE_1801380B0_H
#define ODERSO_MODULE_MODULE_1801380B0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801380b0 : public IModule {
public:
	Module_1801380b0();
	~Module_1801380b0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	int opacity = 0;
	bool air = false;
	bool wrong = false;
	bool ignoreA = false;
	int offsetX = 0;
	int offsetY = 0;
	int resetOnLoad = 0;
	int maxHeigy7 = 0;
	int maxLeng = 0;
	int rot = 0;
};

#endif
