#pragma once
#define ODERSO_MODULE_MODULE_1801A2840_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801a2840 : public IModule {
public:
	Module_1801a2840();
	~Module_1801a2840() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	float size = 0.f;
	bool interdimensional = false;
	bool showCoordinates = false;
};

#endif
