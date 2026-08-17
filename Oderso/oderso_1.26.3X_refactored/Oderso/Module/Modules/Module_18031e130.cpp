#include "Module_18031e130.h"

Module_18031e130::Module_18031e130() : IModule(0, Category::COMBAT, "Module_18031e130") {
	// No settings extracted yet
}

std::string Module_18031e130::getModuleName() { return "Module_18031e130"; }
std::string Module_18031e130::getTooltip() { 
	// Binary function: func_0x18031e4d0
	return "";
}

void Module_18031e130::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x18031e680
	auto client = g_Data.getClientInstance();
	if (client == nullptr) {
		// Unmapped global side-effect: DAT_180840a68 = 0;
		return;
	}

	short field_0x19c = *reinterpret_cast<short*>(reinterpret_cast<uintptr_t>(client) + 0x19c);
	if (field_0x19c > 0)
		this->field_0x148 = 0;

	auto now = g_Data.getTimeMs();
	if (3000 <= now - this->field_0x150) {
		this->field_0x148 = 0;
		this->field_0x158 = 0;
	}
}

void Module_18031e130::onEnable() {
	// Binary function: func_0x18031e660
	*reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(this) + 0x148) = 0;
	*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x14c) = 0;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x150) = 0;
	*reinterpret_cast<uint64_t*>(reinterpret_cast<uintptr_t>(this) + 0x158) = 0;
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
	// Binary function: func_0x18031e7b0
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

