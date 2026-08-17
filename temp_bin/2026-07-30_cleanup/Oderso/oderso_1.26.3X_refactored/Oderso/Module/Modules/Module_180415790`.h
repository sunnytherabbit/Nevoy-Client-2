#pragma once
#ifndef ODERSO_MODULE_MODULE_180415790`_H
#define ODERSO_MODULE_MODULE_180415790`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180415790` : public IModule {
public:
	Module_180415790`();
	~Module_180415790`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual bool isFlashMode() override;
	virtual void setEnabled(bool enabled) override;

private:
};

#endif
