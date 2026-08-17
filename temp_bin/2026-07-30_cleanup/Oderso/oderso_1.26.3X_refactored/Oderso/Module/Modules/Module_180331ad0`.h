#pragma once
#ifndef ODERSO_MODULE_MODULE_180331AD0`_H
#define ODERSO_MODULE_MODULE_180331AD0`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180331ad0` : public IModule {
public:
	Module_180331ad0`();
	~Module_180331ad0`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onLevelRender() override;
	virtual bool isFlashMode() override;
	virtual void setEnabled(bool enabled) override;

private:
};

#endif
