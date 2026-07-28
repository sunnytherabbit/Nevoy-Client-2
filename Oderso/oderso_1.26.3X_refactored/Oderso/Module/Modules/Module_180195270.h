#pragma once
#define ODERSO_MODULE_MODULE_180195270_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180195270 : public IModule {
public:
	Module_180195270();
	~Module_180195270() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool swapHan = false;
	bool translate = false;
	bool scale = false;
	bool rotation = false;
	float rotate = 0.f;
	float translat = 0.f;
	float scaleX = 0.f;
	float scaleY = 0.f;
	float scaleZ = 0.f;
	float axisX = 0.f;
	float axisY = 0.f;
};

#endif
