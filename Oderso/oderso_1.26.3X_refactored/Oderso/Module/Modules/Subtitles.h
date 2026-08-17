// MANUAL
#pragma once
#ifndef ODERSO_MODULE_SUBTITLES_H
#define ODERSO_MODULE_SUBTITLES_H

#include "../../../Horion/Module/Modules/Module.h"

class Subtitles : public IModule {
public:
	Subtitles();
	~Subtitles() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;
	virtual void onLevelRender() override;
	virtual void toggle(void* event = nullptr, bool* cancel = nullptr) override;

	float size = 0.f;

	char _binaryPadding[0x74];
};

#endif
