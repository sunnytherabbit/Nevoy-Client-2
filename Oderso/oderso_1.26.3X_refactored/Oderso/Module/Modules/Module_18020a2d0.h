#pragma once
#ifndef ODERSO_MODULE_MODULE_18020A2D0_H
#define ODERSO_MODULE_MODULE_18020A2D0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18020a2d0 : public IModule {
public:
	Module_18020a2d0();
	~Module_18020a2d0() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	char _binaryPadding[0xd8];
};

static_assert(sizeof(Module_18020a2d0) == 0x158, "Module_18020a2d0 must match the binary object size");

#endif
