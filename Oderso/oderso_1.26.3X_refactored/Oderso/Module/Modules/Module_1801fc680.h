#pragma once
#ifndef ODERSO_MODULE_MODULE_1801FC680_H
#define ODERSO_MODULE_MODULE_1801FC680_H

#include "../../../Horion/Module/Modules/Module.h"

class Module_1801fc680 : public IModule {
public:
	Module_1801fc680();
	~Module_1801fc680() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
	virtual void toggle(void* event = nullptr, bool* cancel = nullptr) override;

	float size = 0.f;
	bool shadow = false;
	bool rainbowText = false;
	bool simpleNames = false;
	bool showItem = false;

	char _binaryPadding[0x74];
	// std::vector storage at 0x108 (begin/end/capacity)
	void* vector_0x108[3] = {};
};

#endif
