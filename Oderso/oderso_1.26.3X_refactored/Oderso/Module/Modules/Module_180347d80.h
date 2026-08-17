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

	// 0x80: state flag cleared by onEnable and tested by onPreRender
	int state = 0;
};

static_assert(sizeof(Module_180347d80) == 0x88, "Module_180347d80 must match the binary object size");

#endif
