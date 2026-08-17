#pragma once
#ifndef ODERSO_MODULE_MODULE_180404050`_H
#define ODERSO_MODULE_MODULE_180404050`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180404050` : public IModule {
public:
	Module_180404050`();
	~Module_180404050`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;

private:
};

#endif
