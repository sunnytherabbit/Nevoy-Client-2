#pragma once
#ifndef ODERSO_MODULE_MODULE_180380FC0`_H
#define ODERSO_MODULE_MODULE_180380FC0`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180380fc0` : public IModule {
public:
	Module_180380fc0`();
	~Module_180380fc0`() {}

	virtual const char* getModuleName() override;
	virtual const char* getRawModuleName() override;
	virtual int getKeybind() override;
	virtual void setKeybind(int key) override;
	virtual bool allowAutoStart() override;
	virtual void onTick(C_GameMode*) override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onAttack(int attackButton, bool isDown, bool* cancel = nullptr) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onLevelRender() override;
	virtual void onMove(C_MoveInputHandler*) override;
	virtual void callWhenDisabled(C_Entity* entity = nullptr) override;

private:
};

#endif
