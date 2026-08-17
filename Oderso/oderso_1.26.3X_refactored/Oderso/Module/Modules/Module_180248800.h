#pragma once
#ifndef ODERSO_MODULE_MODULE_180248800_H
#define ODERSO_MODULE_MODULE_180248800_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180248800 : public IModule {
public:
	Module_180248800();
	~Module_180248800() {}

	virtual std::string getModuleName() override;
	

	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual std::string getTooltip() override;

	int health = 0;
	bool fadeCol = false;

	char _binaryPadding[0x18];
};

#endif
