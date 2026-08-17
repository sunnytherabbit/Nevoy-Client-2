#pragma once
#ifndef ODERSO_MODULE_MODULE_18020D4C0`_H
#define ODERSO_MODULE_MODULE_18020D4C0`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18020d4c0` : public IModule {
public:
	Module_18020d4c0`();
	~Module_18020d4c0`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual bool isFlashMode() override;
	virtual void setEnabled(bool enabled) override;

private:
};

#endif
