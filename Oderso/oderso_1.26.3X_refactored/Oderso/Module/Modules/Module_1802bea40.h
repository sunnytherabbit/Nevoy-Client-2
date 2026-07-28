#pragma once
#define ODERSO_MODULE_MODULE_1802BEA40_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802bea40 : public IModule {
public:
	Module_1802bea40();
	~Module_1802bea40() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool rainbow = false;
};

#endif
