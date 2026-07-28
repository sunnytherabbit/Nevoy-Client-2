#pragma once
#define ODERSO_MODULE_MODULE_18018D820_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18018d820 : public IModule {
public:
	Module_18018d820();
	~Module_18018d820() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	int sE = 0;
};

#endif
