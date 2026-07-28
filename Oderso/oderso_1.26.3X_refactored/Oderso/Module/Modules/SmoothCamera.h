// MANUAL
#pragma once
#ifndef ODERSO_MODULE_SMOOTHCAMERA_H
#define ODERSO_MODULE_SMOOTHCAMERA_H

#include "../../../Horion/Module/Modules/Module.h"

class SmoothCamera : public IModule {
public:
	SmoothCamera();
	~SmoothCamera() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	float strength = 0.f;
	bool animation = false;
	float animationSpeed = 0.f;
	bool scroll = false;
	bool smoothCamera = false;

	vec2_t lastViewAngles{};
	bool smoothInit = false;
};

#endif
