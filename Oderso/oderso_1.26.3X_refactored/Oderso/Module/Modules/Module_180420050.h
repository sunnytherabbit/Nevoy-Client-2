#pragma once
#define ODERSO_MODULE_MODULE_180420050_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180420050 : public IModule {
public:
	Module_180420050();
	~Module_180420050() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	float outlineOpacity = 0.f;
};

#endif
