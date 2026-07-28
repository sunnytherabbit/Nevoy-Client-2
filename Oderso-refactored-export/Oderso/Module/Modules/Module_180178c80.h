#pragma once
#define ODERSO_MODULE_MODULE_180178C80_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180178c80 : public IModule {
public:
	Module_180178c80();
	~Module_180178c80() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	float uUM = 0.f;
	float sE = 0.f;
	float multiplierLsX = 0.f;
	float multiplierLsY = 0.f;
	float multiplierRsX = 0.f;
};

#endif
