#pragma once
#ifndef ODERSO_MODULE_MODULE_1801E7090_H
#define ODERSO_MODULE_MODULE_1801E7090_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801e7090 : public IModule {
public:
	Module_1801e7090();
	~Module_1801e7090() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	// No settings extracted yet
};

#endif
