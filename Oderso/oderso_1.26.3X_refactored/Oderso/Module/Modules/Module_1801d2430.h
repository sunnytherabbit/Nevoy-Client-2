#pragma once
#ifndef ODERSO_MODULE_MODULE_1801D2430_H
#define ODERSO_MODULE_MODULE_1801D2430_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801d2430 : public IModule {
public:
	Module_1801d2430();
	~Module_1801d2430() {}

	virtual std::string getModuleName() override;

	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual std::string getTooltip() override;

	uint8_t field_0x80 = 0;
	uint8_t field_0x81 = 0;
};

#endif
