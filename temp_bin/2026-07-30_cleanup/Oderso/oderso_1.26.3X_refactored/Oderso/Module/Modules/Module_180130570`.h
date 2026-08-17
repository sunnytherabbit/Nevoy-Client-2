#pragma once
#ifndef ODERSO_MODULE_MODULE_180130570`_H
#define ODERSO_MODULE_MODULE_180130570`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180130570` : public IModule {
public:
	Module_180130570`();
	~Module_180130570`() {}

	virtual const char* getModuleName() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onAttack(int attackButton, bool isDown, bool* cancel = nullptr) override;
	virtual void onEnable() override;

private:
};

#endif
