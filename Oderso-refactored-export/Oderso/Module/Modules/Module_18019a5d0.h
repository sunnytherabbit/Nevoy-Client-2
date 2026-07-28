#pragma once
#define ODERSO_MODULE_MODULE_18019A5D0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18019a5d0 : public IModule {
public:
	Module_18019a5d0();
	~Module_18019a5d0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	float size = 0.f;
	bool simpleNames = false;
	bool showNametag = false;
};

#endif
