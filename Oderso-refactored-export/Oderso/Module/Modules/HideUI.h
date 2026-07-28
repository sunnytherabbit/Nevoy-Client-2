// MANUAL
#pragma once
#define ODERSO_MODULE_HIDEUI_H

#include "../../../Horion/Module/Modules/Module.h"

class HideUI : public IModule {
public:
	HideUI();
	~HideUI() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onEnable() override;
	virtual void onDisable() override;

	bool hideUi = false;
	bool printSaved = false;
	bool printFolder = false;
};

#endif
