#pragma once
#ifndef ODERSO_MODULE_MODULE_180156800`_H
#define ODERSO_MODULE_MODULE_180156800`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180156800` : public IModule {
public:
	Module_180156800`();
	~Module_180156800`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onLevelRender() override;

private:
};

#endif
