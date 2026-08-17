#pragma once
#ifndef ODERSO_MODULE_MODULE_180240430_H
#define ODERSO_MODULE_MODULE_180240430_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180240430 : public IModule {
public:
	Module_180240430();
	~Module_180240430() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	virtual std::string getTooltip() override;

	float savedReach = 0.f;    // 0x80: original reach value stored on enable
	float reachValue = 3.f;    // 0x84: user reach setting
};

#endif
