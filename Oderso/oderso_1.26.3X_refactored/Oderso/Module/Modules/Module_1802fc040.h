#pragma once
#ifndef ODERSO_MODULE_MODULE_1802FC040_H
#define ODERSO_MODULE_MODULE_1802FC040_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802fc040 : public IModule {
public:
	Module_1802fc040();
	~Module_1802fc040() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	// No settings extracted yet
};

#endif
