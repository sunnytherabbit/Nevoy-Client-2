#pragma once
#ifndef ODERSO_MODULE_MODULE_1801F8FC0_H
#define ODERSO_MODULE_MODULE_1801F8FC0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801f8fc0 : public IModule {
public:
	Module_1801f8fc0();
	~Module_1801f8fc0() {}

	virtual std::string getModuleName() override;

	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onDisable() override;
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	bool disable = false;
	bool alwaysShow = false;
	float scale = 0.f;

	char _binaryPadding[0x60];
};

#endif
