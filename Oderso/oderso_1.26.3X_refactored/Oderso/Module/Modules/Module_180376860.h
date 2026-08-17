#pragma once
#ifndef ODERSO_MODULE_MODULE_180376860_H
#define ODERSO_MODULE_MODULE_180376860_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180376860 : public IModule {
public:
	Module_180376860();
	~Module_180376860() {}

	virtual std::string getModuleName() override;

	virtual std::string getTooltip() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	// No settings extracted yet
};

#endif
