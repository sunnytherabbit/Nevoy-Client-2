#pragma once
#include "Module.h"

class NameTags : public IModule {
public:
	NameTags();
	~NameTags();

	virtual const char* getModuleName() override;
};
