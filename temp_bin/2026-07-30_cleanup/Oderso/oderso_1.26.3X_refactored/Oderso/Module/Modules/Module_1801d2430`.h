#pragma once
#ifndef ODERSO_MODULE_MODULE_1801D2430`_H
#define ODERSO_MODULE_MODULE_1801D2430`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801d2430` : public IModule {
public:
	Module_1801d2430`();
	~Module_1801d2430`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onLevelRender() override;

private:
};

#endif
