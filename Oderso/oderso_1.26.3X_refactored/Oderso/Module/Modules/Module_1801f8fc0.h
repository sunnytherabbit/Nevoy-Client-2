#pragma once
#define ODERSO_MODULE_MODULE_1801F8FC0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801f8fc0 : public IModule {
public:
	Module_1801f8fc0();
	~Module_1801f8fc0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool disable = false;
	bool alwaysShow = false;
	float scale = 0.f;
};

#endif
