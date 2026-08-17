#pragma once
#ifndef ODERSO_MODULE_MODULE_180247570_H
#define ODERSO_MODULE_MODULE_180247570_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180247570 : public IModule {
public:
	Module_180247570();
	~Module_180247570() {}

	virtual std::string getModuleName() override;

	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	virtual std::string getTooltip() override;

	float currentScale = 0.f;
	uint8_t flag_0x84 = 0;
	char _pad_0x85[3];
	float targetScale = 0.f;
	uint8_t flag_0x8c = 0;
};

#endif
