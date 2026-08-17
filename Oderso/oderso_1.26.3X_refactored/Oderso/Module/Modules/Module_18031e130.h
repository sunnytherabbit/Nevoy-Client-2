#pragma once
#ifndef ODERSO_MODULE_MODULE_18031E130_H
#define ODERSO_MODULE_MODULE_18031E130_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18031e130 : public IModule {
public:
	Module_18031e130();
	~Module_18031e130() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
	virtual void toggle(void* event = nullptr, bool* cancel = nullptr) override;

	// padding to match binary layout up to 0x148
	char _binaryPadding[0xc8];

	int field_0x148 = 0;
	int field_0x14c = 0;
	__int64 field_0x150 = 0;
	__int64 field_0x158 = 0;
	bool field_0x160 = false;
};

#endif
