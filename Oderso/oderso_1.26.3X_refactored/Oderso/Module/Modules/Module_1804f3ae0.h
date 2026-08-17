#pragma once
#ifndef ODERSO_MODULE_MODULE_1804F3AE0_H
#define ODERSO_MODULE_MODULE_1804F3AE0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1804f3ae0 : public IModule {
public:
	Module_1804f3ae0();
	~Module_1804f3ae0() {}

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
