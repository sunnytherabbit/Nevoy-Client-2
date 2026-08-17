#pragma once
#ifndef ODERSO_MODULE_MODULE_18031E130`_H
#define ODERSO_MODULE_MODULE_18031E130`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18031e130` : public IModule {
public:
	Module_18031e130`();
	~Module_18031e130`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual bool isFlashMode() override;
	virtual void setEnabled(bool enabled) override;
	virtual void callWhenDisabled(C_Entity* entity = nullptr) override;

private:
};

#endif
