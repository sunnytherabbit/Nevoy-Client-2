#pragma once
#define ODERSO_MODULE_MODULE_180248800_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180248800 : public IModule {
public:
	Module_180248800();
	~Module_180248800() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	int health = 0;
	bool fadeCol = false;
};

#endif
