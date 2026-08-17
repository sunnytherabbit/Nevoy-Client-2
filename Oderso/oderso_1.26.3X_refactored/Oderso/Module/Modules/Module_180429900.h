#pragma once
#ifndef ODERSO_MODULE_MODULE_180429900_H
#define ODERSO_MODULE_MODULE_180429900_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180429900 : public IModule {
public:
	Module_180429900();
	~Module_180429900() {}

	virtual std::string getModuleName() override;

	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onDisable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	char _binaryPadding[0x60];
};

#endif
