#pragma once
#ifndef ODERSO_MODULE_MODULE_180218DB0`_H
#define ODERSO_MODULE_MODULE_180218DB0`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180218db0` : public IModule {
public:
	Module_180218db0`();
	~Module_180218db0`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;

private:
};

#endif
