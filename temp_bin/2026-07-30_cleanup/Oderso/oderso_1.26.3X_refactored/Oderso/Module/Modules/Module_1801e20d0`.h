#pragma once
#ifndef ODERSO_MODULE_MODULE_1801E20D0`_H
#define ODERSO_MODULE_MODULE_1801E20D0`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801e20d0` : public IModule {
public:
	Module_1801e20d0`();
	~Module_1801e20d0`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual bool isFlashMode() override;
	virtual void setEnabled(bool enabled) override;

private:
};

#endif
