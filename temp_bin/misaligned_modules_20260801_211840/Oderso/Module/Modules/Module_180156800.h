#pragma once
#ifndef ODERSO_MODULE_MODULE_180156800_H
#define ODERSO_MODULE_MODULE_180156800_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180156800 : public IModule {
public:
	Module_180156800();
	~Module_180156800() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	virtual int getKeybind() override;
	virtual void setKeybind(int key) override;
	virtual bool allowAutoStart() override;
	virtual void onKeyUpdate(int key, bool isDown, bool* cancel = nullptr) override;
	virtual void onAttack(int attackButton, bool isDown, bool* cancel = nullptr) override;
	virtual void onLevelRender() override;
	virtual void onMove(C_MoveInputHandler*) override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
	virtual bool isFlashMode() override;
	virtual void setEnabled(bool enabled) override;
	virtual void toggle() override;
	virtual bool isEnabled() override;
	virtual void onSendPacket(C_Packet*) override;
	virtual void callWhenDisabled(C_Entity* entity = nullptr) override;
	virtual const char* getTooltip() override;
	virtual const char* getRawModuleName() override;

	bool color = false;
	bool colorSlots = false;
	SettingEnum backgroundColor;
	SettingEnum slotCol;
	bool holdKey = false;
};

#endif
