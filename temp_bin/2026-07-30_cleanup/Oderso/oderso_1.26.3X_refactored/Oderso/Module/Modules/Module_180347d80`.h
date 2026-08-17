#pragma once
#ifndef ODERSO_MODULE_MODULE_180347D80`_H
#define ODERSO_MODULE_MODULE_180347D80`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180347d80` : public IModule {
public:
	Module_180347d80`();
	~Module_180347d80`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;

private:
};

#endif
