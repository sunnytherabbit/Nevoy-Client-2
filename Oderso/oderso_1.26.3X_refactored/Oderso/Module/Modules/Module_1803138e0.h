#pragma once
#ifndef ODERSO_MODULE_MODULE_1803138E0_H
#define ODERSO_MODULE_MODULE_1803138E0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1803138e0 : public IModule {
public:
	Module_1803138e0();
	~Module_1803138e0() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;

	bool seconds = false;
	bool date = false;
	bool fullYear = false;
};

#endif
