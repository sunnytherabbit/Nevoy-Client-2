#pragma once
#ifndef ODERSO_MODULE_MODULE_1801899C0`_H
#define ODERSO_MODULE_MODULE_1801899C0`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801899c0` : public IModule {
public:
	Module_1801899c0`();
	~Module_1801899c0`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onAttack(int attackButton, bool isDown, bool* cancel = nullptr) override;
	virtual bool isFlashMode() override;
	virtual void setEnabled(bool enabled) override;

private:
};

#endif
