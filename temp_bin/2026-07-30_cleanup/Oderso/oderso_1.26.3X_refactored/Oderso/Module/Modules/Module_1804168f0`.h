#pragma once
#ifndef ODERSO_MODULE_MODULE_1804168F0`_H
#define ODERSO_MODULE_MODULE_1804168F0`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1804168f0` : public IModule {
public:
	Module_1804168f0`();
	~Module_1804168f0`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onLoadConfig(void* conf) override;

private:
};

#endif
