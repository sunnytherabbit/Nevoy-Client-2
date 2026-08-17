#pragma once
#ifndef ODERSO_MODULE_MODULE_180245D30_H
#define ODERSO_MODULE_MODULE_180245D30_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180245d30 : public IModule {
public:
	Module_180245d30();
	~Module_180245d30() {}

	virtual std::string getModuleName() override;
	

	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual std::string getTooltip() override;

	bool rainbow = false;
	char _pad_0x81[3];
	float field_0x84 = 0.f;
	float field_0x88 = 0.f;
	float field_0x8c = 0.f;
	char _pad_0x90[4];
	float field_0x94 = 0.f;
	float field_0x98 = 0.f;
	float field_0x9c = 0.f;
	float field_0xa0 = 0.f;
	float field_0xa4 = 0.f;
};

#endif
