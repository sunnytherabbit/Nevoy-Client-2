#pragma once
#ifndef ODERSO_MODULE_MODULE_18018D820_H
#define ODERSO_MODULE_MODULE_18018D820_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18018d820 : public IModule {
public:
	Module_18018d820();
	~Module_18018d820() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;	
	virtual void onEnable() override;	virtual std::string getTooltip() override;

	int sE = 0;

	// padding to match binary layout up to 0x8c
	char _binaryPadding[0x10];
};

#endif
