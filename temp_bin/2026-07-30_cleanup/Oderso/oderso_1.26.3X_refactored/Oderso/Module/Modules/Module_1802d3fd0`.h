#pragma once
#ifndef ODERSO_MODULE_MODULE_1802D3FD0`_H
#define ODERSO_MODULE_MODULE_1802D3FD0`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802d3fd0` : public IModule {
public:
	Module_1802d3fd0`();
	~Module_1802d3fd0`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;

private:
};

#endif
