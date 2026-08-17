#pragma once
#ifndef ODERSO_MODULE_MODULE_180136CD0`_H
#define ODERSO_MODULE_MODULE_180136CD0`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180136cd0` : public IModule {
public:
	Module_180136cd0`();
	~Module_180136cd0`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;

private:
};

#endif
