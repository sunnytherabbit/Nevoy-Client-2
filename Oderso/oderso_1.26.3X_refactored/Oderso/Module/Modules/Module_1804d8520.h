#pragma once
#ifndef ODERSO_MODULE_MODULE_1804D8520_H
#define ODERSO_MODULE_MODULE_1804D8520_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1804d8520 : public IModule {
public:
	Module_1804d8520();
	~Module_1804d8520() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	// No settings extracted yet
};

#endif
