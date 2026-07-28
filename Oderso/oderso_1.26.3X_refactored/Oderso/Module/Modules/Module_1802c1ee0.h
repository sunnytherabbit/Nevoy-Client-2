#pragma once
#define ODERSO_MODULE_MODULE_1802C1EE0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802c1ee0 : public IModule {
public:
	Module_1802c1ee0();
	~Module_1802c1ee0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	float speed = 0.f;
	float yMul = 0.f;
	float zMul = 0.f;
};

#endif
