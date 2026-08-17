#pragma once
#ifndef ODERSO_MODULE_MODULE_180380410_H
#define ODERSO_MODULE_MODULE_180380410_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180380410 : public IModule {
public:
	Module_180380410();
	~Module_180380410() {}

	virtual std::string getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	// No settings extracted yet
};

#endif
