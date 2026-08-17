#pragma once
#ifndef ODERSO_MODULE_MOVEDIRECTIONLATESTMOVEMENTKEYPRESSEDWHENHOLDINGBOTH_H
#define ODERSO_MODULE_MOVEDIRECTIONLATESTMOVEMENTKEYPRESSEDWHENHOLDINGBOTH_H

#include "../../../Horion/Module/Modules/Module.h"

class MoveDirectionLatestMovementKeyPressedWhenHoldingBoth : public IModule {
public:
	MoveDirectionLatestMovementKeyPressedWhenHoldingBoth();
	~MoveDirectionLatestMovementKeyPressedWhenHoldingBoth() {}

	virtual const char* getModuleName() override;

	virtual void onDisable() override;	virtual const char* getTooltip() override;

	bool ignoreSecond = true;
	bool uUM = true;
};

#endif
