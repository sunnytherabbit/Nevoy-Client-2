#pragma once
#define ODERSO_MODULE_MODULE_18021F300_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18021f300 : public IModule {
public:
	Module_18021f300();
	~Module_18021f300() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool players = false;
	bool checkFe = false;
	float checkHe = 0.f;
	float maxHitboxWidth = 0.f;
	float setting = 0.f;
};

#endif
