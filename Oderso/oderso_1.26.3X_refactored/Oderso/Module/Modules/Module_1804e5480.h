#pragma once
#ifndef ODERSO_MODULE_MODULE_1804E5480_H
#define ODERSO_MODULE_MODULE_1804E5480_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1804e5480 : public IModule {
public:
	Module_1804e5480();
	~Module_1804e5480() {}

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
