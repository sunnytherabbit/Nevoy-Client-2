// MANUAL
#pragma once
#ifndef ODERSO_MODULE_CROUCHSPAM_H
#define ODERSO_MODULE_CROUCHSPAM_H

#include "../../../Horion/Module/Modules/Module.h"

class CrouchSpam : public IModule {
public:
	CrouchSpam();
	~CrouchSpam() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onDisable() override;

	// No settings extracted yet
	virtual std::string getTooltip() override;

	int counter = 0;
	int delay = 5;
};

#endif
