#pragma once
#ifndef ODERSO_MODULE_MODULE_1802C5A20_H
#define ODERSO_MODULE_MODULE_1802C5A20_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802c5a20 : public IModule {
public:
	Module_1802c5a20();
	~Module_1802c5a20() {}

	virtual std::string getModuleName() override;

	virtual void onEnable() override;
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	bool shadow = false;
	bool rainbowText = false;
	float size = 0.f;
	float sizeOfTheMod = 0.f;
	float verticalPadding = 0.f;
	float smoothnen = 0.f;
	float radius = 0.f;
	float animationSpeed = 0.f;
	bool jump = false;
	float jumpWidc = 0.f;
	float jumpHeight = 0.f;
	bool sneak = false;
	bool mouse = false;
	bool leftCps = false;

	// padding to match binary layout up to 0x1c0
	char _binaryPadding[0x140];
};

#endif
