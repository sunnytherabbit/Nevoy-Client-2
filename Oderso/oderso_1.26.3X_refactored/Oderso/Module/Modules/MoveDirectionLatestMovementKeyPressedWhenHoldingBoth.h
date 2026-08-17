// MANUAL
#pragma once
#ifndef ODERSO_MODULE_MOVEDIRECTIONLATESTMOVEMENTKEYPRESSEDWHENHOLDINGBOTH_H
#define ODERSO_MODULE_MOVEDIRECTIONLATESTMOVEMENTKEYPRESSEDWHENHOLDINGBOTH_H

#include "../../../Horion/Module/Modules/Module.h"

class MoveDirectionLatestMovementKeyPressedWhenHoldingBoth : public IModule {
public:
	MoveDirectionLatestMovementKeyPressedWhenHoldingBoth();
	~MoveDirectionLatestMovementKeyPressedWhenHoldingBoth();

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;

	bool ignoreSecond = true;
	bool uUM = true;
};

#endif
