#pragma once
#ifndef ODERSO_MODULE_MODULE_1801DD4B0_H
#define ODERSO_MODULE_MODULE_1801DD4B0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801dd4b0 : public IModule {
public:
	Module_1801dd4b0();
	~Module_1801dd4b0() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	virtual std::string getTooltip() override;

	bool thirdPerson = false;
	bool sE = false;
	float adjustYOffset = 0.f;
	bool noBackground = false;

	char _binaryPadding[0x14];
	bool field_0x9c = false;
};

#endif
