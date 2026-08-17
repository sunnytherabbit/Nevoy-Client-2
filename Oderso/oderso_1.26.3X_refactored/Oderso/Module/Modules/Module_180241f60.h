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

	// Binary layout: IModule is 0x80 bytes, then:
	// 0x80 - state flag, 0x81 - busy flag, 0x82 - stored key
	uint8_t field_0x80 = 0;
	bool field_0x81 = false;
	int8_t field_0x82 = -1;
};

static_assert(sizeof(Module_180241f60) == 0x88, "Module_180241f60 must be 0x88 bytes to match the binary layout");

#endif
