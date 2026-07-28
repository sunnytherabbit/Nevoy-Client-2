// MANUAL
#pragma once
#define ODERSO_MODULE_CPS_H

#include "../../../Horion/Module/Modules/Module.h"

class CPS : public IModule {
public:
	CPS();
	~CPS() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() {}
	virtual void onDisable() {}

	// No settings extracted yet
};

#endif
