// MANUAL
#pragma once
#ifndef ODERSO_MODULE_SMOOTHCAMERA_H
#define ODERSO_MODULE_SMOOTHCAMERA_H

#include "../../../Horion/Module/Modules/Module.h"

class SmoothCamera : public IModule {
public:
	SmoothCamera();
	~SmoothCamera() {}

	virtual std::string getModuleName() override;

	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	virtual std::string getTooltip() override;
	virtual void onKeyUpdate(int key, bool isDown, bool* cancel = nullptr) override;
	virtual void slot_27(int arg = 0, char mask = 0, bool* cancel = nullptr) override;
	virtual void slot_29() override;
	virtual void slot_31(int arg = 0, char mask = 0, bool* cancel = nullptr) override;

	float strength = 0.f;
	bool animation = false;
	float animationSpeed = 0.f;
	bool scroll = false;
	bool smoothCamera = false;

	vec2_t lastViewAngles{};
	bool smoothInit = false;

	char _binaryPadding[0x30];
};

#endif
