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

	// 0x8b..0xb7: padding to keep field_0xb8 at its binary offset.
	char _binaryPadding[0x2d];
	void* field_0xb8 = nullptr;

	char _binaryPadding2[0x8];
};

static_assert(sizeof(Module_18024b340) == 0xc8, "Module_18024b340 must be 0xc8 bytes to match the binary layout");

#endif
