#pragma once
#ifndef ODERSO_MODULE_MODULE_1804F24E0_H
#define ODERSO_MODULE_MODULE_1804F24E0_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1804f24e0 : public IModule {
public:
	Module_1804f24e0();
	~Module_1804f24e0() {}

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

private:
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
	virtual bool isFlashMode() override;
	virtual void setEnabled(bool enabled) override;
	virtual void toggle() override;
	virtual bool isEnabled() override;
	virtual void onSendPacket(C_Packet*) override;
	virtual void callWhenDisabled(C_Entity* entity = nullptr) override;
	virtual const char* getTooltip() override;
	virtual void onKeyUpdate(int key, bool isDown, bool* cancel = nullptr) override;
};

#endif
