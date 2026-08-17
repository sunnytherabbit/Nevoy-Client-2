#pragma once
#ifndef ODERSO_MODULE_MODULE_180195270_H
#define ODERSO_MODULE_MODULE_180195270_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180195270 : public IModule {
public:
	Module_180195270();
	~Module_180195270() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;

	bool swapHan = false;
	bool translate = false;
	bool scale = false;
	bool rotation = false;
	float rotate = 0.f;
	float translat = 0.f;
	float scaleX = 0.f;
	float scaleY = 0.f;
	float scaleZ = 0.f;
	float axisX = 0.f;
	float axisY = 0.f;
};

#endif
