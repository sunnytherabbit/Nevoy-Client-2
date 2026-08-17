#pragma once
#ifndef ODERSO_MODULE_MODULE_18020D4C0_H
#define ODERSO_MODULE_MODULE_18020D4C0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18020d4c0 : public IModule {
public:
	Module_18020d4c0();
	~Module_18020d4c0() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	// padding to match binary layout up to 0x150
	char _binaryPadding[0xd0];
};

#endif
