// MANUAL
#pragma once
#ifndef ODERSO_MODULE_HIDEUI_H
#define ODERSO_MODULE_HIDEUI_H

#include "../../../Horion/Module/Modules/Module.h"

class HideUI : public IModule {
public:
	HideUI();
	~HideUI() {}

	virtual std::string getModuleName() override;

	virtual std::string getTooltip() override;

	bool hideUi = false;
	bool printSaved = false;
	bool printFolder = false;
};

#endif
