#pragma once
#ifndef ODERSO_MODULE_MODULE_1802AC240_H
#define ODERSO_MODULE_MODULE_1802AC240_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802ac240 : public IModule {
public:
	Module_1802ac240();
	~Module_1802ac240() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual std::string getRawModuleName() override;
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void toggle(void* event = nullptr, bool* cancel = nullptr) override;

	// Covers the binary module-specific state (counters, booleans, std::string/std::vector
	// fields used by onPreRender/onEnable/onPostRender/onLoadConfig/toggle).
	char _binaryPadding[0x110];
};

#endif
