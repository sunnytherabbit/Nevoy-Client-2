#pragma once
#ifndef ODERSO_MODULE_MODULE_180185460_H
#define ODERSO_MODULE_MODULE_180185460_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180185460 : public IModule {
public:
	Module_180185460();
	~Module_180185460() {}

	virtual std::string getModuleName() override;

	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	virtual std::string getTooltip() override;
	virtual void setEnabled(void* event = nullptr, bool* cancel = nullptr) override;

	bool field_0x80 = false;
	char _pad_0x81[0x1f];
	int field_0xa0 = 0;
	bool field_0xa8 = false;
	bool field_0xa9 = false;
	bool field_0xaa = false;
	char _pad_0xab[5];
	bool field_0xb0 = false;
	float swingSpeed = 0.f;
};

#endif
