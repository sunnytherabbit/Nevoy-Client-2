#pragma once
#include "Module.h"
#include "../../DrawUtils.h"
class Radar : public IModule {
public:
	Radar();
	~Radar();

	// Inherited via IModule
	virtual std::string getModuleName() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
};
