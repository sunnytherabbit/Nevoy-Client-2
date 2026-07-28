#pragma once
#define ODERSO_MODULE_MODULE_18032CE60_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_18032ce60 : public IModule {
public:
	Module_18032ce60();
	~Module_18032ce60() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() {}
	virtual void onDisable() {}

	bool showX = false;
	bool showY = false;
	bool showZ = false;
	SettingEnum separator;
	bool decimal = false;
};

#endif
