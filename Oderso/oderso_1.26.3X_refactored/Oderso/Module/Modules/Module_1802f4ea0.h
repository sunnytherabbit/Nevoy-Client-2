#pragma once
#ifndef ODERSO_MODULE_MODULE_1802F4EA0_H
#define ODERSO_MODULE_MODULE_1802F4EA0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802f4ea0 : public IModule {
public:
	Module_1802f4ea0();
	~Module_1802f4ea0() {}

	virtual std::string getModuleName() override;

	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onDisable() override;
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	bool disable = false;
	bool noBackground = false;

	char _binaryPadding[0x60];
};

#endif
