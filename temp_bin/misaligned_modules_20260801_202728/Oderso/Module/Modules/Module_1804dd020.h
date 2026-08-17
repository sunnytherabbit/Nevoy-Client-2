#pragma once
#ifndef ODERSO_MODULE_MODULE_1804DD020_H
#define ODERSO_MODULE_MODULE_1804DD020_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1804dd020 : public IModule {
public:
	Module_1804dd020();
	~Module_1804dd020() {}

	virtual const char* getModuleName() override;
	virtual const char* getRawModuleName() override;
	virtual int getKeybind() override;
	virtual void setKeybind(int key) override;
	virtual bool allowAutoStart() override;
	virtual void onTick(C_GameMode* gameMode) override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onAttack(int attackButton, bool isDown, bool* cancel = nullptr) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onLevelRender() override;
	virtual void onMove(C_MoveInputHandler*) override;
	virtual void onSendPacket(C_Packet*) override;
	virtual bool isEnabled() override;
	virtual void setEnabled(bool enabled) override;
	virtual void toggle() override;
	virtual void callWhenDisabled(C_Entity* entity = nullptr) override;

private:
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
	virtual const char* getTooltip() override;
	virtual void onKeyUpdate(int key, bool isDown, bool* cancel = nullptr) override;
};

#endif
