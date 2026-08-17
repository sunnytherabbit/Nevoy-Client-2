#pragma once
#ifndef ODERSO_MODULE_MODULE_180193330_H
#define ODERSO_MODULE_MODULE_180193330_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180193330 : public IModule {
public:
	Module_180193330();
	~Module_180193330() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	char _binaryPadding[0xd0];
};

#endif
