#include "Module_180241f60.h"

Module_180241f60::Module_180241f60() : IModule(0, Category::CUSTOM, "Opens the inventory client-side") {
	// Binary constructor: func_0x180241f60 initializes field_0x82 to -1.
	this->field_0x82 = -1;
}

std::string Module_180241f60::getModuleName() {
	// Binary function: func_0x180242190 (TLS-encrypted string -> "FastInventory").
	return "FastInventory";
}

std::string Module_180241f60::getTooltip() {
	// Constructor tooltip fallback
	return "Opens the inventory client-side";
}

void Module_180241f60::onEnable() {
	// Binary function: func_0x180242490.
	this->field_0x80 = 0;
	this->field_0x81 = false;
	this->field_0x82 = -1;
}

void Module_180241f60::setEnabled(void* event, bool* cancel) {
	// Binary function: func_0x1802424b0.
	if (event == nullptr || cancel == nullptr)
		return;

	int key = getEventKey(event);

	if (key == 0x21) {
		// Complex spawn/throwable logic: maps player input to an entity spawn.
		// Unmapped helpers: DAT_180840a60/DAT_18083fd40/func_0x180122250/func_0x18011b530/func_0x18011caa0.
		// Kept as a direct binary call.
		auto mod = g_Data.getModule();
		if (mod == nullptr) return;
		using SetFunc = void(*)(void*, void*, bool*);
		reinterpret_cast<SetFunc>(mod->ptrBase + 0x2424b0)(this, event, cancel);
		return;
	}

	if (key == 0x2f && *reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(event) + 0x31) == -9 && !this->field_0x81) {
		if (this->field_0x82 == -1) {
			if (this->field_0x80 == 1) {
				this->field_0x81 = true;
				*cancel = true;
			}
		} else {
			*reinterpret_cast<char*>(reinterpret_cast<uintptr_t>(event) + 0x30) = this->field_0x82;
			this->field_0x82 = -1;
		}
	}
}

void Module_180241f60::toggle(void* event, bool* cancel) {
	// Binary function: func_0x180242af0.
	if (event == nullptr || cancel == nullptr)
		return;

	int key = getEventKey(event);
	if (key != 0x2e || this->field_0x80 != 1)
		return;

	// Complex packet construction and state updates; kept as a direct binary call.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using ToggleFunc = void(*)(void*, void*, bool*);
	reinterpret_cast<ToggleFunc>(mod->ptrBase + 0x242af0)(this, event, cancel);
}
