#pragma once
#ifndef ODERSO_MODULE_MODULE_180241F60_H
#define ODERSO_MODULE_MODULE_180241F60_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180241f60 : public IModule {
public:
	Module_180241f60();
	~Module_180241f60() {}

	virtual std::string getModuleName() override;

	virtual void onEnable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;
	virtual void setEnabled(void* event = nullptr, bool* cancel = nullptr) override;
	virtual void toggle(void* event = nullptr, bool* cancel = nullptr) override;

	// binary fields used by setEnabled/toggle
	uint16_t field_0x80 = 0;
	char field_0x82 = -1;
};

#endif
