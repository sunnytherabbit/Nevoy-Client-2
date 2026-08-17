#pragma once
#ifndef ODERSO_MODULE_MODULE_18024B340_H
#define ODERSO_MODULE_MODULE_18024B340_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18024b340 : public IModule {
public:
	Module_18024b340();
	~Module_18024b340() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;
	virtual void slot_15() override;

	bool mobs = false;
	bool projectiles = false;
	bool items = false;
	float viewDir = 0.f;
	bool eye = false;
	bool rainbow = false;
	bool hitHelppgg = false;

	char _binaryPadding[0x31];
	void* field_0xb8 = nullptr;
};

#endif
