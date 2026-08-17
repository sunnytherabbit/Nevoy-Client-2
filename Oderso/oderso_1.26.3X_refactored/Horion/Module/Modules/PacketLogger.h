#pragma once
#include "Module.h"
class PacketLogger : public IModule {
public:
	PacketLogger();
	~PacketLogger();

	// Inherited via IModule
	virtual std::string getModuleName() override;
	virtual void onSendPacket(C_Packet* packet) override;
};
