#pragma once
#define ODERSO_MODULE_MODULE_1801749E0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801749e0 : public IModule {
public:
	Module_1801749e0();
	~Module_1801749e0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	int radius = 0;
	bool fixedHeight = false;
	float yPositib = 0.f;
};

#endif
