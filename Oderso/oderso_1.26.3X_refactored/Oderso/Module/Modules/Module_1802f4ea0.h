#pragma once
#define ODERSO_MODULE_MODULE_1802F4EA0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802f4ea0 : public IModule {
public:
	Module_1802f4ea0();
	~Module_1802f4ea0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool disable = false;
	bool noBackground = false;
};

#endif
