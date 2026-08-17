#pragma once
#ifndef ODERSO_MODULE_MODULE_1804CF410_H
#define ODERSO_MODULE_MODULE_1804CF410_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1804cf410 : public IModule {
public:
	Module_1804cf410();
	~Module_1804cf410() {}

	virtual std::string getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	// No settings extracted yet
};

#endif
