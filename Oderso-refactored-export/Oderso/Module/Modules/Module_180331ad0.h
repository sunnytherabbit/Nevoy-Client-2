#pragma once
#define ODERSO_MODULE_MODULE_180331AD0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180331ad0 : public IModule {
public:
	Module_180331ad0();
	~Module_180331ad0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool crosshairPng = false;
	bool customCrosshair = false;
	bool customColor = false;
	bool hitHelp = false;
};

#endif
