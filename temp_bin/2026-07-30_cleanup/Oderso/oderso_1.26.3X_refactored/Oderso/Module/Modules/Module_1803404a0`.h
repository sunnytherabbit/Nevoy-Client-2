#pragma once
#ifndef ODERSO_MODULE_MODULE_1803404A0`_H
#define ODERSO_MODULE_MODULE_1803404A0`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1803404a0` : public IModule {
public:
	Module_1803404a0`();
	~Module_1803404a0`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;

private:
};

#endif
