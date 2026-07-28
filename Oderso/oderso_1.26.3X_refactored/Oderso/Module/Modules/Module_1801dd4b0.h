#pragma once
#define ODERSO_MODULE_MODULE_1801DD4B0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801dd4b0 : public IModule {
public:
	Module_1801dd4b0();
	~Module_1801dd4b0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool thirdPerson = false;
	bool sE = false;
	float adjustYOffset = 0.f;
	bool noBackground = false;
};

#endif
