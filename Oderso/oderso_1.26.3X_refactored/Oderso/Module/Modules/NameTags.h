// MANUAL
#pragma once
#ifndef ODERSO_MODULE_NAMETAGS_H
#define ODERSO_MODULE_NAMETAGS_H

#include "../../../Horion/Module/Modules/Module.h"

class NameTags : public IModule {
public:
	NameTags();
	~NameTags();

	virtual std::string getModuleName() override;
};

#endif
