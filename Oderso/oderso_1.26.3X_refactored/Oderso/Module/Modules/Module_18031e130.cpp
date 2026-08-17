#include "Module_18031e130.h"

Module_18031e130::Module_18031e130() : IModule(0, Category::COMBAT, "Module_18031e130") {
	// No settings extracted yet
}

std::string Module_18031e130::getModuleName() { return "Module_18031e130"; }
std::string Module_18031e130::getTooltip() {
	// No manifest description
	return "";
}

void Module_18031e130::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Ported from func_0x18031e680: resets counters based on client state and a 3000 ms timeout.
	g_Data.updateClientGlobal();
	auto client = g_Data.getClientInstancePtr();
	if (client == nullptr)
		return;

	short field_0x19c = *reinterpret_cast<short*>(reinterpret_cast<uintptr_t>(client) + 0x19c);
	if (field_0x19c > 0)
		this->field_0x148 = 0;

	auto now = g_Data.getTimeMs();
	if (now - this->field_0x150 >= 3000) {
		this->field_0x148 = 0;
		this->field_0x158 = 0;
	}
}

void Module_18031e130::onEnable() {
	// Ported from func_0x18031e660: zeroes the combat state counters.
	this->field_0x148 = 0;
	this->field_0x14c = 0;
	this->field_0x150 = 0;
	this->field_0x158 = 0;
}

void Module_18031e130::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_18031e130::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

void Module_18031e130::toggle(void* event, bool* cancel) {
	// Ported from func_0x18031e7b0: count matching attack events.
	if (event == nullptr)
		return;

	int key = getEventKey(event);
	if (key != 0x1b)
		return;

	auto event_0x30 = *reinterpret_cast<__int64*>(reinterpret_cast<uintptr_t>(event) + 0x30);
	auto event_type = *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(event) + 0x38);

	if (this->field_0x160 && event_type == 2 && event_0x30 == this->field_0x158) {
		this->field_0x148++;
		this->field_0x160 = false;
	}
}

