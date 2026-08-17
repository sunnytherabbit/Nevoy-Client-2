#pragma once
#ifndef ODERSO_MODULE_MODULE_180149A30_H
#define ODERSO_MODULE_MODULE_180149A30_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180149a30 : public IModule {
public:
	Module_180149a30();
	~Module_180149a30() {}

	virtual std::string getModuleName() override;

	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onDisable() override;
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	bool disable = false;
	bool noBackground = false;
	bool noNumbe = false;

	char _binaryPadding[0x78];
};

#endif
