// MANUAL
#pragma once
#ifndef ODERSO_MODULE_NOFIRE_H
#define ODERSO_MODULE_NOFIRE_H

#include "../../../Horion/Module/Modules/Module.h"

class NoFire : public IModule {
public:
	NoFire();
	~NoFire() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	virtual std::string getTooltip() override;

	bool noFire = false;
	bool lastNoFire = false;
	float height = 1.5f;
};

static_assert(sizeof(NoFire) == 0x88, "NoFire must match the binary object size");

#endif
