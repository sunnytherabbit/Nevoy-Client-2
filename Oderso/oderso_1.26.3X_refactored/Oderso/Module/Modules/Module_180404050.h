#pragma once
#ifndef ODERSO_MODULE_MODULE_180404050_H
#define ODERSO_MODULE_MODULE_180404050_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180404050 : public IModule {
public:
	Module_180404050();
	~Module_180404050() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	// No settings extracted yet
};

#endif
