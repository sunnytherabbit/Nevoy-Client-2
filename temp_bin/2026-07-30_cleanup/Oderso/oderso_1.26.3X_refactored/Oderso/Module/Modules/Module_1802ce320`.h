#pragma once
#ifndef ODERSO_MODULE_MODULE_1802CE320`_H
#define ODERSO_MODULE_MODULE_1802CE320`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1802ce320` : public IModule {
public:
	Module_1802ce320`();
	~Module_1802ce320`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual bool isFlashMode() override;
	virtual void setEnabled(bool enabled) override;

private:
};

#endif
