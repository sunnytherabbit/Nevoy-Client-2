#pragma once
#ifndef ODERSO_MODULE_MODULE_180241F60`_H
#define ODERSO_MODULE_MODULE_180241F60`_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180241f60` : public IModule {
public:
	Module_180241f60`();
	~Module_180241f60`() {}

	virtual const char* getModuleName() override;
	virtual int getKeybind() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onSendPacket(C_Packet*) override;
	virtual void callWhenDisabled(C_Entity* entity = nullptr) override;

private:
};

#endif
