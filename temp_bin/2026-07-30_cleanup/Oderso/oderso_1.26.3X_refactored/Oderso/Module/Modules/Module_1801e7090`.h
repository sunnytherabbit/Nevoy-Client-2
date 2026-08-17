#pragma once
#ifndef ODERSO_MODULE_MODULE_1801E7090`_H
#define ODERSO_MODULE_MODULE_1801E7090`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801e7090` : public IModule {
public:
	Module_1801e7090`();
	~Module_1801e7090`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;

private:
};

#endif
