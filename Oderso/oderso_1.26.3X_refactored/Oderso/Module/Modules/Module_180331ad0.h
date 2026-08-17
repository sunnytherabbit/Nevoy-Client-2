#pragma once
#ifndef ODERSO_MODULE_MODULE_180331AD0_H
#define ODERSO_MODULE_MODULE_180331AD0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180331ad0 : public IModule {
public:
	Module_180331ad0();
	~Module_180331ad0() {}

	virtual std::string getModuleName() override;

	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	bool crosshairPng = false;
	bool customCrosshair = false;
	bool customColor = false;
	bool hitHelp = false;

	// Used by onPostRender to avoid patching every frame.
	bool lastCrosshairPng = false;

	char _binaryPadding[0xf0];
};

#endif
