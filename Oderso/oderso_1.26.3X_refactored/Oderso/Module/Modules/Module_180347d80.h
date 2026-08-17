#pragma once
#ifndef ODERSO_MODULE_MODULE_180347D80_H
#define ODERSO_MODULE_MODULE_180347D80_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180347d80 : public IModule {
public:
	Module_180347d80();
	~Module_180347d80() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;

	// padding to match binary layout up to 0x84
	char _binaryPadding[0x8];
};

#endif
