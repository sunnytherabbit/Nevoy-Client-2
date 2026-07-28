#pragma once
#ifndef ODERSO_MODULE_MODULE_1802C0340_H
#define ODERSO_MODULE_MODULE_1802C0340_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802c0340 : public IModule {
public:
	Module_1802c0340();
	~Module_1802c0340() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool disable = false;
	float multipli = 0.f;
};

#endif
