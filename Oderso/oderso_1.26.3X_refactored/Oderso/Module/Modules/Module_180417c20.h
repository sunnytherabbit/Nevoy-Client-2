#pragma once
#define ODERSO_MODULE_MODULE_180417C20_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180417c20 : public IModule {
public:
	Module_180417c20();
	~Module_180417c20() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	SettingEnum hotbarTooltips;
};

#endif
