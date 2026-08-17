#pragma once
#ifndef ODERSO_MODULE_MODULE_180412630`_H
#define ODERSO_MODULE_MODULE_180412630`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180412630` : public IModule {
public:
	Module_180412630`();
	~Module_180412630`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onEnable() override;
	virtual bool isFlashMode() override;
	virtual void setEnabled(bool enabled) override;

private:
};

#endif
