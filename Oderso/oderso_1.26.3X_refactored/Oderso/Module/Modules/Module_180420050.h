#pragma once
#ifndef ODERSO_MODULE_MODULE_180420050_H
#define ODERSO_MODULE_MODULE_180420050_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180420050 : public IModule {
public:
	Module_180420050();
	~Module_180420050() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;	
	virtual void onEnable() override;	virtual std::string getTooltip() override;

	float outlineOpacity = 0.f;

	// padding to match binary layout up to 0xb9
	char _binaryPadding[0x40];
};

#endif
