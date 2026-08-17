#pragma once
#ifndef ODERSO_MODULE_MODULE_180371F00_H
#define ODERSO_MODULE_MODULE_180371F00_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180371f00 : public IModule {
public:
	Module_180371f00();
	~Module_180371f00() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	// No settings extracted yet
	virtual bool allowAutoStart() override;
	virtual void onLevelRender() override;
	virtual void onMove(C_MoveInputHandler*) override;
	virtual void onSendPacket(C_Packet*) override;
	virtual void callWhenDisabled(C_Entity* entity = nullptr) override;
	virtual void setKeybind(int key) override;
	virtual const char* getRawModuleName() override;
	virtual const char* getTooltip() override;
	virtual int getKeybind() override;
	virtual void onKeyUpdate(int key, bool isDown, bool* cancel = nullptr) override;
	virtual void onAttack(int attackButton, bool isDown, bool* cancel = nullptr) override;
	virtual void onSaveConfig(void* conf) override;
	virtual bool isFlashMode() override;
	virtual void setEnabled(bool enabled) override;
	virtual void toggle() override;
	virtual bool isEnabled() override;
};

#endif
