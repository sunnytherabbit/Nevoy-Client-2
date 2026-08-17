#pragma once
#ifndef ODERSO_MODULE_MODULE_180412630_H
#define ODERSO_MODULE_MODULE_180412630_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180412630 : public IModule {
public:
	Module_180412630();
	~Module_180412630() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	char _binaryPadding[0xd8];
};

#endif
