#pragma once
#ifndef ODERSO_MODULE_MODULE_180149A30`_H
#define ODERSO_MODULE_MODULE_180149A30`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180149a30` : public IModule {
public:
	Module_180149a30`();
	~Module_180149a30`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onLevelRender() override;
	virtual bool isFlashMode() override;
	virtual void setEnabled(bool enabled) override;

private:
};

#endif
