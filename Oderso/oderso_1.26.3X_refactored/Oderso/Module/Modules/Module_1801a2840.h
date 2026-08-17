#pragma once
#ifndef ODERSO_MODULE_MODULE_1801A2840_H
#define ODERSO_MODULE_MODULE_1801A2840_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801a2840 : public IModule {
public:
	Module_1801a2840();
	~Module_1801a2840() {}

	virtual std::string getModuleName() override;
	

	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual std::string getTooltip() override;
	virtual void slot_15() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	float size = 0.f;
	bool interdimensional = false;
	bool showCoordinates = false;

	char _binaryPadding[0x26a];
};

#endif
