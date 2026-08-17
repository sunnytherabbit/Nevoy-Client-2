#include "Module_180241f60.h"

Module_180241f60::Module_180241f60() : IModule(0, Category::CUSTOM, "Module_180241f60") {
	// No settings extracted yet
}

std::string Module_180241f60::getModuleName() { return "Module_180241f60"; }
std::string Module_180241f60::getTooltip() { 
	// Binary function: func_0x180242300
	return "";
}

void Module_180241f60::onEnable() {
	// Binary function: func_0x180242490
	*reinterpret_cast<uint16_t*>(reinterpret_cast<uintptr_t>(this) + 0x80) = 0;
	*reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(this) + 0x82) = 0xff;
}

void Module_180241f60::setEnabled(void* event, bool* cancel) {
	// Binary function: func_0x1802424b0
	if (event == nullptr || cancel == nullptr)
		return;

	int key = getEventKey(event);

	if (key == 0x21) {
		// Complex spawn/throwable logic: maps player input to an entity spawn.
		// Unmapped helpers: DAT_180840a60/DAT_18083fd40/func_0x180122250/func_0x18011b530/func_0x18011caa0
		return;
	}

	bool* field_0x81 = reinterpret_cast<bool*>(reinterpret_cast<uintptr_t>(this) + 0x81);
	if (key == 0x2f && *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(event) + 0x31) == -9 && !*field_0x81) {
		if (this->field_0x82 == -1) {
			if ((this->field_0x80 & 0xFF) != 0) {
				*field_0x81 = true;
				*cancel = true;
			}
		} else {
			*reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(event) + 0x30) = this->field_0x82;
			this->field_0x82 = 0xff;
		}
	}
}

void Module_180241f60::toggle(void* event, bool* cancel) {
	// Binary function: func_0x180242af0
	if (event == nullptr || cancel == nullptr)
		return;

	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using ToggleFunc = void(*)(void*, void*, bool*);
	reinterpret_cast<ToggleFunc>(mod->ptrBase + 0x242af0)(this, event, cancel);
}

