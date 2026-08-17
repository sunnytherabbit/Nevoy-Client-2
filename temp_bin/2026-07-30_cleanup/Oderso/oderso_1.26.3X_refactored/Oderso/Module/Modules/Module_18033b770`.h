#pragma once
#ifndef ODERSO_MODULE_MODULE_18033B770`_H
#define ODERSO_MODULE_MODULE_18033B770`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18033b770` : public IModule {
public:
	Module_18033b770`();
	~Module_18033b770`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual bool isFlashMode() override;
	virtual void setEnabled(bool enabled) override;

private:
};

#endif
