#pragma once
#define ODERSO_MODULE_MODULE_1801F2430_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801f2430 : public IModule {
public:
	Module_1801f2430();
	~Module_1801f2430() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	float noBackground = 0.f;
	bool switchPack = false;
};

#endif
