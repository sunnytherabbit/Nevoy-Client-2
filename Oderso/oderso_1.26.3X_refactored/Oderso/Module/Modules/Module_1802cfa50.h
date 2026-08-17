#pragma once
#ifndef ODERSO_MODULE_MODULE_1802CFA50_H
#define ODERSO_MODULE_MODULE_1802CFA50_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802cfa50 : public IModule {
public:
	Module_1802cfa50();
	~Module_1802cfa50() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;	
	virtual void onEnable() override;	virtual std::string getTooltip() override;
	virtual void slot_15() override;
	virtual void toggle(void* event = nullptr, bool* cancel = nullptr) override;

	int radius = 0;
	bool litColor = false;
	bool showLightLevel = false;

	// padding to match binary layout up to 0xe0
	char _binaryPadding[0x58];
};

#endif
