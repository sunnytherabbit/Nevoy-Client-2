#pragma once
#ifndef ODERSO_MODULE_MODULE_180415150`_H
#define ODERSO_MODULE_MODULE_180415150`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180415150` : public IModule {
public:
	Module_180415150`();
	~Module_180415150`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onEnable() override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;

private:
};

#endif
