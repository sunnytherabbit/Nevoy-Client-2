#pragma once
#ifndef ODERSO_MODULE_MODULE_1802C0340_H
#define ODERSO_MODULE_MODULE_1802C0340_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802c0340 : public IModule {
public:
	Module_1802c0340();
	~Module_1802c0340() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	virtual std::string getTooltip() override;

	bool disable = false;
	float multipli = 0.f;

	// padding to match binary layout up to 0x99
	char _binaryPadding[0x20];
};

#endif
