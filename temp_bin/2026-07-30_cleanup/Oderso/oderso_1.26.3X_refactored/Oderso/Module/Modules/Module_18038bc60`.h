#pragma once
#ifndef ODERSO_MODULE_MODULE_18038BC60`_H
#define ODERSO_MODULE_MODULE_18038BC60`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18038bc60` : public IModule {
public:
	Module_18038bc60`();
	~Module_18038bc60`() {}

	virtual const char* getModuleName() override;
	virtual const char* getRawModuleName() override;
	virtual int getKeybind() override;
	virtual void setKeybind(int key) override;
	virtual bool allowAutoStart() override;
	virtual void onTick(C_GameMode*) override;
	virtual void onEnable() override;
	virtual void onDisable() override;

private:
};

#endif
