// MANUAL
#pragma once
#ifndef ODERSO_MODULE_ODERSOCOMPASS_H
#define ODERSO_MODULE_ODERSOCOMPASS_H

#include "../../../Horion/Module/Modules/Module.h"

class OdersoCompass : public IModule {
public:
	OdersoCompass();
	~OdersoCompass() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	float size = 0.f;  // 0x80
	int color = 45;    // 0x84
};

static_assert(sizeof(OdersoCompass) == 0x88, "OdersoCompass must match the binary object size");

#endif
