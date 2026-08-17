#pragma once
#ifndef ODERSO_MODULE_MODULE_1804E2DA0_H
#define ODERSO_MODULE_MODULE_1804E2DA0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1804e2da0 : public IModule {
public:
	Module_1804e2da0();
	~Module_1804e2da0() {}

	virtual std::string getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	// No settings extracted yet
};

#endif
