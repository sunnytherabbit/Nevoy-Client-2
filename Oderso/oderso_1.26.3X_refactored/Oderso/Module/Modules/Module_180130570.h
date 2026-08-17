#pragma once
#ifndef ODERSO_MODULE_MODULE_180130570_H
#define ODERSO_MODULE_MODULE_180130570_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_180130570 : public IModule {
public:
	Module_180130570();
	~Module_180130570() {}

	virtual std::string getModuleName() override;

	virtual void onEnable() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onAttack(int attackButton, bool isDown, bool* cancel = nullptr) override;
	virtual void slot_30(int arg = 0, char mask = 0, bool* cancel = nullptr) override;

private:
	void refreshEntityPointers();

public:
	// Pointers/object refs initialised by the binary constructor.
	void* field_0x80 = nullptr;
	void* field_0x88 = nullptr;
	void* field_0x90 = nullptr;
	void* field_0x98 = nullptr;

	int field_0xa0 = 0;
	int changeAmount = 1;
	int field_0xa8 = 0;
	int field_0xac = 0;
	int field_0xb0 = 0x7fffffff;
	int field_0xb4 = 0;
};

#endif
