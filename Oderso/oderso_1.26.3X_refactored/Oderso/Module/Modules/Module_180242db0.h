#pragma once
#define ODERSO_MODULE_MODULE_180242DB0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180242db0 : public IModule {
public:
	Module_180242db0();
	~Module_180242db0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool rainbow = false;
};

#endif
