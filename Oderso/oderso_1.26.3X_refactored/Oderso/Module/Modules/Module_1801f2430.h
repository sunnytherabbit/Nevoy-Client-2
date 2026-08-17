#pragma once
#ifndef ODERSO_MODULE_MODULE_1801F2430_H
#define ODERSO_MODULE_MODULE_1801F2430_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801f2430 : public IModule {
public:
	Module_1801f2430();
	~Module_1801f2430() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	// padding to 0xd0 (derived 0x50)
	char _binaryPadding[0x50];

	bool noBackground = false;
	float size = 1.f;
	bool switchPack = false;
	int32_t switchDelay = 100;
	int32_t currentIndex = 0;
	int32_t selectedIndex = 0;
};

#endif
