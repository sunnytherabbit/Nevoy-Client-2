// MANUAL
#pragma once
#ifndef ODERSO_MODULE_CROUCHSPAM_H
#define ODERSO_MODULE_CROUCHSPAM_H

#include "../../../Horion/Module/Modules/Module.h"

class CrouchSpam : public IModule {
public:
	CrouchSpam();
	~CrouchSpam() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() override;

	// No settings extracted yet
};

#endif
