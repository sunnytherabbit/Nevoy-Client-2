#pragma once
#ifndef ODERSO_MODULE_MODULE_18037BC90_H
#define ODERSO_MODULE_MODULE_18037BC90_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18037bc90 : public IModule {
public:
	Module_18037bc90();
	~Module_18037bc90() {}

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
