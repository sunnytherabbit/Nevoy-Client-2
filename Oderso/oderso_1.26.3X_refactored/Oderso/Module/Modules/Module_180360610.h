#pragma once
#ifndef ODERSO_MODULE_MODULE_180360610_H
#define ODERSO_MODULE_MODULE_180360610_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180360610 : public IModule {
public:
	Module_180360610();
	~Module_180360610() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;	
	virtual void onEnable() override;	virtual std::string getTooltip() override;
	virtual void slot_15() override;
	virtual void toggle(void* event = nullptr, bool* cancel = nullptr) override;

	int blockRadius = 0;

	// padding to match binary layout up to 0xe0
	char _binaryPadding[0x58];
};

#endif
