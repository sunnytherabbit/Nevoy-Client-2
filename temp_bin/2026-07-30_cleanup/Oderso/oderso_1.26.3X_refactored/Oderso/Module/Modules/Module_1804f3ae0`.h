#pragma once
#ifndef ODERSO_MODULE_MODULE_1804F3AE0`_H
#define ODERSO_MODULE_MODULE_1804F3AE0`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1804f3ae0` : public IModule {
public:
	Module_1804f3ae0`();
	~Module_1804f3ae0`() {}

	virtual const char* getModuleName() override;
	virtual const char* getRawModuleName() override;
	virtual int getKeybind() override;
	virtual void setKeybind(int key) override;
	virtual bool allowAutoStart() override;
	virtual void onTick(C_GameMode*) override;

private:
};

#endif
