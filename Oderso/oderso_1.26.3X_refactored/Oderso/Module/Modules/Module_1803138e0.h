#pragma once
#ifndef ODERSO_MODULE_MODULE_1803138E0_H
#define ODERSO_MODULE_MODULE_1803138E0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1803138e0 : public IModule {
public:
	Module_1803138e0();
	~Module_1803138e0() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool seconds = false;
	bool date = false;
	bool fullYear = false;
};

#endif
