#pragma once
#ifndef ODERSO_MODULE_MODULE_180415150_H
#define ODERSO_MODULE_MODULE_180415150_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180415150 : public IModule {
public:
	Module_180415150();
	~Module_180415150() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onDisable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;
};

#endif
