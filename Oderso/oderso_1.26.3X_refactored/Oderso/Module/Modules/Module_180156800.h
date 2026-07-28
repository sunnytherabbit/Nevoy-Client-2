#pragma once
#define ODERSO_MODULE_MODULE_180156800_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180156800 : public IModule {
public:
	Module_180156800();
	~Module_180156800() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool color = false;
	bool colorSlots = false;
	SettingEnum backgroundColor;
	SettingEnum slotCol;
	bool holdKey = false;
};

#endif
