#pragma once
#ifndef ODERSO_MODULE_MODULE_1803238C0_H
#define ODERSO_MODULE_MODULE_1803238C0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1803238c0 : public IModule {
public:
	Module_1803238c0();
	~Module_1803238c0() {}

	virtual std::string getModuleName() override;

	virtual void onEnable() override;
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	bool shadow = false;
	float size = 0.f;
	float smoothne6B = 0.f;
	float radius = 0.f;
	bool animation = false;
	SettingEnum buttonLayout;  // 0x98

	// padding to match binary layout up to 0x248
	// (actual SettingEnum size is compiler-dependent, so this is sized to bring
	// the total class size to 0x248.)
	char _binaryPadding[0x180];
};

static_assert(sizeof(Module_1803238c0) == 0x248, "Module_1803238c0 must match the binary object size");

#endif
