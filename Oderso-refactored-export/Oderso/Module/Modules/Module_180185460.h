#pragma once
#define ODERSO_MODULE_MODULE_180185460_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180185460 : public IModule {
public:
	Module_180185460();
	~Module_180185460() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	float swingSpeed = 0.f;
};

#endif
