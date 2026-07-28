// MANUAL
#pragma once
#ifndef ODERSO_MODULE_SUBTITLES_H
#define ODERSO_MODULE_SUBTITLES_H

#include "../../../Horion/Module/Modules/Module.h"

class Subtitles : public IModule {
public:
	Subtitles();
	~Subtitles() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() {}
	virtual void onDisable() {}

	float size = 0.f;
};

#endif
