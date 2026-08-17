#pragma once
#ifndef ODERSO_MODULE_MODULE_1801E7620_H
#define ODERSO_MODULE_MODULE_1801E7620_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801e7620 : public IModule {
public:
	Module_1801e7620();
	~Module_1801e7620() {}

	virtual std::string getModuleName() override;

	virtual void onDisable() override;
	virtual std::string getTooltip() override;
	virtual void slot_15() override;
	virtual void toggle(void* event = nullptr, bool* cancel = nullptr) override;

	bool entities = false;
	bool items = false;
	bool uUM = false;
	bool hUD = false;
	bool particles = false;
	bool sky = false;
	bool weather = false;
	bool portalOverlay = false;
	bool fire = false;
	bool lightning = false;

	// padding to match binary layout up to 0xbc
	char _binaryPadding[0x31];

	bool field_0xbb = false;
};

#endif
