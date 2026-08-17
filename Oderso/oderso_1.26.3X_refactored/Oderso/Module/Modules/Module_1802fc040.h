#pragma once
#ifndef ODERSO_MODULE_MODULE_1802FC040_H
#define ODERSO_MODULE_MODULE_1802FC040_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802fc040 : public IModule {
public:
	Module_1802fc040();
	~Module_1802fc040() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;

	char _binaryPadding[0x238];
};

#endif
