#pragma once
#ifndef ODERSO_MODULE_MODULE_180388CF0`_H
#define ODERSO_MODULE_MODULE_180388CF0`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180388cf0` : public IModule {
public:
	Module_180388cf0`();
	~Module_180388cf0`() {}

	virtual const char* getModuleName() override;
	virtual const char* getRawModuleName() override;
	virtual int getKeybind() override;
	virtual void setKeybind(int key) override;
	virtual bool allowAutoStart() override;
	virtual void onTick(C_GameMode*) override;
	virtual void onMove(C_MoveInputHandler*) override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
	virtual bool isFlashMode() override;
	virtual bool isEnabled() override;
	virtual void setEnabled(bool enabled) override;
	virtual void toggle() override;
	virtual void callWhenDisabled(C_Entity* entity = nullptr) override;

private:
};

#endif
