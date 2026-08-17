#pragma once
#ifndef ODERSO_MODULE_MODULE_180193330`_H
#define ODERSO_MODULE_MODULE_180193330`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180193330` : public IModule {
public:
	Module_180193330`();
	~Module_180193330`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onEnable() override;
	virtual bool isFlashMode() override;
	virtual void setEnabled(bool enabled) override;

private:
};

#endif
