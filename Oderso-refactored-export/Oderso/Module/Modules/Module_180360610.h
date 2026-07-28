#pragma once
#define ODERSO_MODULE_MODULE_180360610_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180360610 : public IModule {
public:
	Module_180360610();
	~Module_180360610() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	int blockRadius = 0;
};

#endif
