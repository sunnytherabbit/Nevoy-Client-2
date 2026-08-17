#pragma once
#ifndef ODERSO_MODULE_MODULE_1801E7090_H
#define ODERSO_MODULE_MODULE_1801E7090_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801e7090 : public IModule {
public:
	Module_1801e7090();
	~Module_1801e7090() {}

	virtual std::string getModuleName() override;

	virtual void onEnable() override;
	virtual void onDisable() override;
	// No settings extracted yet
	virtual std::string getTooltip() override;
};

#endif
