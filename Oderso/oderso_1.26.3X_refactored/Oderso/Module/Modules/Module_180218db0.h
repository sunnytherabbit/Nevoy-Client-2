#pragma once
#ifndef ODERSO_MODULE_MODULE_180218DB0_H
#define ODERSO_MODULE_MODULE_180218DB0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180218db0 : public IModule {
public:
	Module_180218db0();
	~Module_180218db0() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;

	// padding to match binary layout up to 0x8f
	char _binaryPadding[0x10];
};

#endif
