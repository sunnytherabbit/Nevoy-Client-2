#pragma once
#define ODERSO_MODULE_MODULE_1802C5A20_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802c5a20 : public IModule {
public:
	Module_1802c5a20();
	~Module_1802c5a20() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool shadow = false;
	bool rainbowText = false;
	float size = 0.f;
	float sizeOfTheMod = 0.f;
	float verticalPadding = 0.f;
	float smoothnen = 0.f;
	float radius = 0.f;
	float animationSpeed = 0.f;
	bool jump = false;
	float jumpWidc = 0.f;
	float jumpHeight = 0.f;
	bool sneak = false;
	bool mouse = false;
	bool leftCps = false;
};

#endif
